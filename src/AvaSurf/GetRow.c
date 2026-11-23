/* AvaSurf__GetRow @ 0x800B7F10 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvaSurf__GetRow @ 0x800B7F10 (0x60). ProDG -O2. */
typedef int s32;

void *AvaSurf__GetRow(void *arg0) {
    char *temp_r3_2;
    char *temp_r9;
    s32 (*fn)(void *);
    s32 idx;

    temp_r3_2 = *(char **)arg0;
    temp_r9 = *(char **)(temp_r3_2 + 0x10);
    fn = *(s32 (**)(void *))(temp_r9 + 0x2C);
    idx = fn(temp_r3_2 + *(short *)(temp_r9 + 0x28));
    if (idx >= 0) {
        return *(char **)((char *)arg0 + 0x2C) + idx * 0x28;
    }
    return 0;
}
