/* memchr @ 0x80167BF8 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
void *memchr(const void *src, int chr, unsigned int n) {
    unsigned char c = (unsigned char)chr;
    const unsigned char *bytes = (const unsigned char *)src;

    if (n > 3 && (((unsigned int)bytes) & 3) == 0) {
        unsigned int count = 4;
        unsigned int *words = (unsigned int *)bytes;
        unsigned int pattern = 0;
        unsigned int mask;

        do {
            pattern = (pattern << 8) + c;
        } while (--count != 0);

        if (n > 3) {
            mask = 0x80808080;
            do {
                unsigned int word = *words ^ pattern;

                if (((word + 0xFEFEFEFF) & ~word & mask) != 0) {
                    unsigned int left = 4;
                    const unsigned char *scan = (const unsigned char *)words;

                    do {
                        if (*scan == c) {
                            return (void *)scan;
                        }
                        scan += 1;
                    } while (--left != 0);
                }
                n -= 4;
                words += 1;
            } while (n > 3);
            bytes = (const unsigned char *)words;
        }
    }

    while (n-- != 0) {
        if (*bytes == c) {
            return (void *)bytes;
        }
        bytes += 1;
    }
    return 0;
}
