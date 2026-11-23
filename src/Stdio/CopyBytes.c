/* Stdio__CopyBytes @ 0x801677D4 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
void Stdio__CopyBytes(unsigned char *dst, unsigned char *src, int n) {
    while (n-- != 0) {
        *dst++ = *src++;
    }
}
