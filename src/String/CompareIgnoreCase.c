/* String__CompareIgnoreCase @ 0x80163778 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;

extern u8 lbl_8033C9D9[] __attribute__((section(".data")));

#define LOWER(c) (((lbl_8033C9D9[c] & 1) != 0) ? (c) + 32 : (c))

int String__CompareIgnoreCase(const char *a, const char *b) {
    for (; (s8)*a != 0 && LOWER((s8)*a) == LOWER((s8)*b); a++, b++) {
    }
    return LOWER((u8)*a) - LOWER((u8)*b);
}
