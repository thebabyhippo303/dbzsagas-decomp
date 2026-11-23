/* atoi @ 0x80162304 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: atoi @ 0x80162304 (0x28). ProDG -O2. */
extern long strtol(const char *text, char **end, int base);

int atoi(const char *text) {
    return (int)strtol(text, 0, 10);
}
