// base64/types — shared types for base64 encoding/decoding

// Base64 alphabet: standard (RFC 4648) with + and /
// Index 0–63 maps to A–Z, a–z, 0–9, +, /
pub fun b64_alphabet() => "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"

// Padding character
pub fun b64_pad() => '='

// URL-safe alphabet: replaces + with - and / with _
pub fun b64_url_alphabet() => "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_"
