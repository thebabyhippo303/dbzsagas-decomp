/* Printf__WriteFloatBuffer @ 0x801642C0 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

int Console__WriteDescriptor(int, const void *, int);

extern u8 lbl_8039E724[] __attribute__((section(".data")));
extern s32 lbl_803DC9C4;
extern u8 *lbl_803DC9C8;

s32 Printf__WriteFloatBuffer(s32 fd, u8 *src, u32 len, s32 mode) {
    u32 i;
    s32 count;
    s32 wrote;

    if (mode == 1) {
        wrote = Console__WriteDescriptor(fd, lbl_8039E724, lbl_803DC9C4);
        lbl_803DC9C4 = 0;
        lbl_803DC9C8 = lbl_8039E724;
        return wrote;
    }
    i = 0;
    if (i < len) {
    do {
        *lbl_803DC9C8 = src[i];
        lbl_803DC9C8 += 1;
        count = lbl_803DC9C4 + 1;
        lbl_803DC9C4 = count;
        if (count > 127) {
            wrote = Console__WriteDescriptor(fd, lbl_8039E724, count);
            lbl_803DC9C8 = lbl_8039E724;
            lbl_803DC9C4 = 0;
            if (wrote == 0) {
                return 0;
            }
        }
        i += 1;
    } while (i < len);
    }
    return (s32) i;
}
