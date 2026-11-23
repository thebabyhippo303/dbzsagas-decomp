/* VoiceReclaim__IsFarther @ 0x8019BCB4 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 VoiceReclaim__IsFarther(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    if (arg2 == 0) {
        return 1;
    }
    return farg0 > farg1;
}
