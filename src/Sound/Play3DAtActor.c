/* Sound__Play3DAtActor @ 0x80188D94 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sound__Play3D(s32, s32, s32, s32);
void Sound__Play3DAtActor(s32 arg0, s32 arg1, s32 arg2) {
    Sound__Play3D(arg0, arg1 + 0x38, arg1 + 0x68, arg2);
}
