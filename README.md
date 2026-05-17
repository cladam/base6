# base64

Base64 encoding and decoding library for [hica](https://cladam.github.io/hica).

Pure functions, no effects — a showcase of hica's functional style.

## Install

```sh
# Add as a dependency (when hica package manager is available)
hica add base64
```

## Usage

```hica
import "base64"

fun main() {
  let encoded = b64_encode("Hello, World!")
  println(encoded)  // SGVsbG8sIFdvcmxkIQ==

  match b64_decode(encoded) {
    Ok(text) => println(text),  // Hello, World!
    Err(e) => println("Error: " + e)
  }
}
```

## API

### Encoding

| Function | Description |
|---|---|
| `b64_encode(input: string) : string` | Encode to standard base64 (RFC 4648) with padding |
| `b64_encode_url(input: string) : string` | Encode to URL-safe base64 (no padding) |

### Decoding

| Function | Description |
|---|---|
| `b64_decode(input: string) : result<string, string>` | Decode standard base64 |
| `b64_decode_url(input: string) : result<string, string>` | Decode URL-safe base64 |

## Project Structure

```
src/
  base64.hc    # barrel module (pub imports)
  types.hc     # alphabet constants
  encode.hc    # encoding functions
  decode.hc    # decoding functions
tests/
  test-base64.hc
examples/
  basic.hc
```

## Development

```sh
hica run examples/basic.hc   # run the example
hica test tests/test-base64.hc  # run tests
hica check src/base64.hc     # type-check
```

## License

MIT
