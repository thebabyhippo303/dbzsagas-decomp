/* UIListInput__MoveUp @ 0x801021CC (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Sound__Play2DWithVolumePitch(char *, void *, f32, f32);
extern s8 lbl_803251CC __attribute__((section(".data")));
extern f32 lbl_803251D4 __attribute__((section(".data")));
extern f32 lbl_803251D8 __attribute__((section(".data")));

void UIListInput__MoveUp(void *arg0) {
    u8 temp_r10;

    temp_r10 = M2C_FIELD(arg0, u8 *, 0xA2C);
    if ((s8) temp_r10 > 0) {
        M2C_FIELD(arg0, s32 *, 0xA30) = 1;
        M2C_FIELD(arg0, u8 *, 0xA2C) = (u8) (temp_r10 - 1);
        Sound__Play2DWithVolumePitch(&lbl_803251CC, NULL, lbl_803251D4, lbl_803251D8);
    }
}

