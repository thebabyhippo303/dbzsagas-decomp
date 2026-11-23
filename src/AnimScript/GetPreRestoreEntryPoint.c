/* AnimScript__GetPreRestoreEntryPoint @ 0x80235278 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed int s32;
#define NULL 0
s32 AnimScript__GetPreRestoreEntryPoint(void *self, s32 i) {
    s32 off = i * 4;
    void **table = (void **)((char *)self + 240);
    void *p = *(void **)((char *)table + off);
    if (p != NULL)
        return *(signed char *)((char *)p + 6);
    return -1;
}
