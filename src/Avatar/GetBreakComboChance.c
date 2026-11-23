/* Avatar__GetBreakComboChance @ 0x800638E4 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern f32 lbl_8031E6E8 __attribute__((section(".data")));
extern f32 lbl_8031E6EC __attribute__((section(".data")));

f32 Avatar__GetBreakComboChance(void *arg0) {
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg0, void **, 0x390);
    if (((M2C_FIELD(temp_r11, f32 *, 0x288) / M2C_FIELD(temp_r11, f32 *, 0x28C)) < lbl_8031E6E8) || (((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 2) && ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 5))) {
        return lbl_8031E6EC;
    }
    return M2C_FIELD(arg0, f32 *, 0x4A8);
}
