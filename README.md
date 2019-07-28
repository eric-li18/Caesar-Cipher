# Caesar-Cipher
A simple C exercise to brush up on coding.

The program takes a string and encodes it using a pseudo-random shift in ASCII values, then decodes it, providing the original input.

You can read more about the Caesar Cipher [here](https://en.wikipedia.org/wiki/Caesar_cipher).

## Comments
Although this is an elementary program, it can be scaled by decoding separately without saving the shift value. Then dictionary APIs or libraries can check validity of decoded words, and try to match as accurately as possible. 

Alternatively one could brute force with the top $x$ words of the English language and try to "guess" the shift.
