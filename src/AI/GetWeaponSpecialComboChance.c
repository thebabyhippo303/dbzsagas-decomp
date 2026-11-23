/* AI__GetWeaponSpecialComboChance @ 0x80063930 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern f32 lbl_8031E6F0 __attribute__((section(".data")));
extern f32 lbl_8031E6F4 __attribute__((section(".data")));

f32 AI__GetWeaponSpecialComboChance(void *arg0) {
    s32 var_r11;
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg0, void **, 0x390);
    if (!((M2C_FIELD(temp_r11, f32 *, 0x288) / M2C_FIELD(temp_r11, f32 *, 0x28C)) < lbl_8031E6F0)) {
        var_r11 = 0;
        if ((s32) M2C_FIELD(M2C_FIELD(temp_r11, void **, 0x159C), s32 *, 0xD80) != 0) {
            var_r11 = 1;
        }
        if (var_r11 == 0) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return lbl_8031E6F4;
        }
        return M2C_FIELD(arg0, f32 *, 0x4A4);
    }
    return lbl_8031E6F4;
}

