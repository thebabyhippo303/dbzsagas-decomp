/* Fmv__BinkAramFree @ 0x801D90D8 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK SoundDriver__FreeAram(s32, s32);            /* extern */
extern s32 lbl_803DCC2C;

void Fmv__BinkAramFree(s32 arg0) {
    SoundDriver__FreeAram(lbl_803DCC2C, arg0);
}
