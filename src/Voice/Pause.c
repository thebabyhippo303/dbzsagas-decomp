/* Voice__Pause @ 0x8019D010 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 SoundChannel__Pause(void *);
void Voice__Pause(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
        SoundChannel__Pause(M2C_FIELD(arg0, void **, 8));
    }
    M2C_FIELD(arg0, s32 *, 0x44) = 1;
}
