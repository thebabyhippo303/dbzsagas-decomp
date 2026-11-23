/* inflate_blocks_reset @ 0x80257564 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: inflate_blocks_reset @ 0x80257564 (0xBC). ProDG -O2. */
typedef unsigned long uLong;
typedef void (*ZFreeFn)(void *opaque, void *ptr);
typedef uLong (*CheckFn)(uLong adler, const void *buf, unsigned len);

void inflate_codes_free(void *codes, void *z);

void inflate_blocks_reset(void *s, void *z, uLong *c) {
    char *st = (char *)s;
    char *zs = (char *)z;
    void *window;
    CheckFn checkfn;
    uLong check;

    if (c != 0) {
        *c = *(uLong *)(st + 0x3C);
    }
    if ((unsigned)(*(int *)st - 4) <= 1U) {
        ((ZFreeFn)*(void **)(zs + 0x24))(*(void **)(zs + 0x28), *(void **)(st + 0xC));
    }
    if (*(int *)st == 6) {
        inflate_codes_free(*(void **)(st + 4), z);
    }
    window = *(void **)(st + 0x28);
    checkfn = *(CheckFn *)(st + 0x38);
    *(int *)st = 0;
    *(int *)(st + 0x1C) = 0;
    *(void **)(st + 0x34) = window;
    *(int *)(st + 0x20) = 0;
    *(void **)(st + 0x30) = window;
    if (checkfn != 0) {
        check = checkfn(0, 0, 0);
        *(uLong *)(st + 0x3C) = check;
        *(uLong *)(zs + 0x30) = check;
    }
}
