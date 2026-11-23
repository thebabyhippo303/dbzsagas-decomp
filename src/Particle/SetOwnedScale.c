/* Particle__SetOwnedScale @ 0x80220FF0 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
typedef int s32;
typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern void *lbl_803AD068 __attribute__((section(".data")));

s32 Particle__SetOwnedScale(u32 arg0, f32 scale) {
    s32 offset = (arg0 >> 16) * 200;
    char *entry = (char *)lbl_803AD068 + offset;
    if (M2C_FIELD(entry, u32 *, 0) != arg0) {
        return 0;
    }
    M2C_FIELD(entry, s32 *, 4) &= ~0x180;
    M2C_FIELD(entry, f32 *, 0x94) = M2C_FIELD(entry, f32 *, 0x9C) * scale;
    M2C_FIELD(entry, f32 *, 0x98) = M2C_FIELD(entry, f32 *, 0xA0) * scale;
    return 1;
}
