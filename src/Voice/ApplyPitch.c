/* Voice__ApplyPitch @ 0x8019D2D4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK SoundChannel__SetPitch(s32);                /* extern */

void Voice__ApplyPitch(void *arg0) {
    s32 temp_r31;
    void *temp_r9;

    temp_r31 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r31 != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x54);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x44)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x40));
        SoundChannel__SetPitch(temp_r31);
    }
}
