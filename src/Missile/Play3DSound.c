/* Missile__Play3DSound @ 0x800DD1CC (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sound__Play3DAtActor(s32, s32, s32);
void Missile__Play3DSound(s32 arg0, s32 arg1) {
    Sound__Play3DAtActor(arg1, arg0, 0);
}
