/* Printf__WriteBasicBuffer @ 0x801658B0 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

int Console__WriteDescriptor(int, const void *, int);

extern u8 lbl_8039E7A4[] __attribute__((section(".data")));
extern s32 lbl_803DC9CC;
extern u8 *lbl_803DC9D0;

s32 Printf__WriteBasicBuffer(s32 fd, const u8 *src, u32 len, s32 mode) {
    u32 i;
    s32 count;
    s32 wrote;

    if (mode == 1) {
        wrote = Console__WriteDescriptor(fd, lbl_8039E7A4, lbl_803DC9CC);
        lbl_803DC9CC = 0;
        lbl_803DC9D0 = lbl_8039E7A4;
        return wrote;
    }

    for (i = 0; i < len; i++) {
        *lbl_803DC9D0 = src[i];
        lbl_803DC9D0 = lbl_803DC9D0 + 1;
        count = lbl_803DC9CC + 1;
        lbl_803DC9CC = count;
        if (count > 127) {
            wrote = Console__WriteDescriptor(fd, lbl_8039E7A4, count);
            lbl_803DC9D0 = lbl_8039E7A4;
            lbl_803DC9CC = 0;
            if (wrote == 0) {
                return 0;
            }
        }
    }
    return (s32) i;
}
