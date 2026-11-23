/* Voice2D__ApplyPan @ 0x8019BDA4 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 SoundChannel__SetPan(void *, f32);
void Voice2D__ApplyPan(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 != NULL) {
        SoundChannel__SetPan(temp_r0, M2C_FIELD(arg0, f32 *, 0x58));
    }
}
