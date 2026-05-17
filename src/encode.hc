// base64/encode — encode a string to base64
import "types"

// Encode a string to standard base64 (RFC 4648)
pub fun b64_encode(input: string) : string =>
  encode_with(input, b64_alphabet(), true)

// Encode a string to URL-safe base64 (no padding)
pub fun b64_encode_url(input: string) : string =>
  encode_with(input, b64_url_alphabet(), false)

// Encode using a given alphabet, with optional padding
pub fun encode_with(input: string, alphabet: string, pad: bool) : string {
  let bytes = chars(input)
  let encoded = encode_chars(bytes, alphabet)
  if pad { add_padding(encoded) }
  else { encoded }
}

// Process chars in groups of 3
pub fun encode_chars(cs: list<char>, alphabet: string) : string =>
  match cs {
    [] => "",
    [a] => {
      let n = ord(a)
      let i0 = n / 4
      let i1 = (n % 4) * 16
      let c0 = alphabet[i0:i0 + 1]
      let c1 = alphabet[i1:i1 + 1]
      c0 + c1
    },
    [a, b] => {
      let na = ord(a)
      let nb = ord(b)
      let i0 = na / 4
      let i1 = (na % 4) * 16 + nb / 16
      let i2 = (nb % 16) * 4
      let c0 = alphabet[i0:i0 + 1]
      let c1 = alphabet[i1:i1 + 1]
      let c2 = alphabet[i2:i2 + 1]
      c0 + c1 + c2
    },
    [a, b, c, ..rest] => {
      let na = ord(a)
      let nb = ord(b)
      let nc = ord(c)
      let i0 = na / 4
      let i1 = (na % 4) * 16 + nb / 16
      let i2 = (nb % 16) * 4 + nc / 64
      let i3 = nc % 64
      let c0 = alphabet[i0:i0 + 1]
      let c1 = alphabet[i1:i1 + 1]
      let c2 = alphabet[i2:i2 + 1]
      let c3 = alphabet[i3:i3 + 1]
      c0 + c1 + c2 + c3 + encode_chars(rest, alphabet)
    }
  }

// Add = padding to make length a multiple of 4
pub fun add_padding(s: string) : string {
  let remainder = str_length(s) % 4
  if remainder == 0 { s }
  else if remainder == 2 { s + "==" }
  else if remainder == 3 { s + "=" }
  else { s }
}
