/* AI__GetLevelAdjustedComboBranchChance @ 0x80063880 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern f32 lbl_8031E6E0 __attribute__((section(".data")));
extern f32 lbl_8031E6E4 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

f32 AI__GetLevelAdjustedComboBranchChance(void *arg0) {
    s32 temp_r0;
    s32 var_r10;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x390);
    var_r10 = M2C_FIELD(temp_r9, s32 *, 0x660);
    if (var_r10 > 4) {
        var_r10 = 4;
    }
    if ((s32) M2C_FIELD(temp_r9, s32 *, 0x2B8) == 0) {
        return lbl_8031E6E0;
    }
    temp_r0 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
    if ((temp_r0 == 0x11) || (temp_r0 == 0x13)) {
        return lbl_8031E6E4;
    }
    {
        register s32 index = var_r10 * 4;
        register f32 *values = (f32 *)((char *)arg0 + 0x174);
        return *(f32 *)((char *)values + index);
    }
}
