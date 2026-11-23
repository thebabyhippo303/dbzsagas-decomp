/* UiSpriteResources__Update @ 0x8000E858 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_8026BF14(void *);
M2C_UNK UiSpriteResources__UpdateBossIntroSequence(void *); /* extern */

void UiSpriteResources__Update(s32 arg0) {
    void *temp_r30;

    temp_r30 = arg0 + 0x8C;
    UiSpriteResources__UpdateBossIntroSequence(temp_r30);
    fn_8026BF14(temp_r30);
}
