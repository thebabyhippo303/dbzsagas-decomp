/* AmbientMixer__Reset @ 0x80199468 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK AmbientMixer__StopVoices();                 /* extern */
M2C_UNK AmbientTrack__Reset(s32);                   /* extern */

void AmbientMixer__Reset(s32 arg0) {
    AmbientMixer__StopVoices();
    AmbientTrack__Reset(arg0 + 0x70);
}
