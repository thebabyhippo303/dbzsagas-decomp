/* EffectHandle__SetFlags @ 0x8022F474 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern s32 lbl_803ADD8C __attribute__((section(".data")));

s32 EffectHandle__SetFlags(u32 arg0, s32 arg1) {
    void *temp_r11;

    temp_r11 = lbl_803ADD8C + ((arg0 >> 0x10U) * 0x94);
    if ((s32) M2C_FIELD(temp_r11, s32 *, 0x18) != (s32) arg0) {
        return 0;
    }
    M2C_FIELD(temp_r11, s32 *, 8) = arg1;
    return 1;
}
