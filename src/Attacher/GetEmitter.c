/* Attacher__GetEmitter @ 0x80217140 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern void *lbl_803ACFA8 __attribute__((section(".data")));

s32 Attacher__GetEmitter(u32 arg0) {
    s32 offset = (arg0 >> 16) * 0x5C;
    char *base = (char *)lbl_803ACFA8 + offset;
    if (M2C_FIELD(base, u32 *, 0) == arg0) {
        return M2C_FIELD(base, s32 *, 0x58);
    }
    return 0;
}
