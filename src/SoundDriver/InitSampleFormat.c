/* SoundDriver__InitSampleFormat @ 0x801926FC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern s32 lbl_803DE4B0;
extern s32 lbl_803DE4B4;
extern s32 lbl_803DE4B8;

void SoundFlags__Set(s32 *, s32, s32);

void SoundDriver__InitSampleFormat(void *arg0, void *arg1) {
    s32 v = M2C_FIELD(arg1, s32 *, 8);
    s32 g = lbl_803DE4B4;

    M2C_FIELD(arg0, s32 *, 4) = v;
    SoundFlags__Set(arg0, g, 0);
    SoundFlags__Set(arg0, lbl_803DE4B0, 1);
    SoundFlags__Set(arg0, lbl_803DE4B8, 1);
}
