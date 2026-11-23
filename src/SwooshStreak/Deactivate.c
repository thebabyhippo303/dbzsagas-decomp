/* SwooshStreak__Deactivate @ 0x80233A94 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern s32 lbl_803ADE94 __attribute__((section(".data")));

void SwooshStreak__Deactivate(u32 arg0, s32 arg1) {
    s32 temp_r9;
    void *temp_r11;

    temp_r9 = (arg0 >> 0x10U) * 0x98;
    temp_r11 = lbl_803ADE94 + temp_r9;
    if ((s32) *(s32 *)(lbl_803ADE94 + temp_r9) == (s32) arg0) {
        if (arg1 != 0) {
            M2C_FIELD(temp_r11, u16 *, 8) = (u16) (M2C_FIELD(temp_r11, u16 *, 8) & 0xFFFB);
            return;
        }
        M2C_FIELD(temp_r11, u16 *, 8) = (u16) (M2C_FIELD(temp_r11, u16 *, 8) & 0xFFEF);
    }
}

