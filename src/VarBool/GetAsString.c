/* VarBool__GetAsString @ 0x8018D374 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarBool__GetAsString @ 0x8018D374 (0x6C). ProDG -O2. */
extern char lbl_8033E9B4[];
extern char lbl_8033E9B8[];
extern char *strcpy(char *dst, const char *src);

char *VarBool__GetAsString(void *self, char *out) {
    unsigned flags;
    int value;
    const char *text;

    flags = *(unsigned *)self;
    if (flags & 2)
        return 0;
    value = **(int **)((char *)self + 64);
    if (value != 0)
        text = lbl_8033E9B4;
    else
        text = lbl_8033E9B8;
    strcpy(out, text);
    return out;
}
