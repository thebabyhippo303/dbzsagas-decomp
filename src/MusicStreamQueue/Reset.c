/* MusicStreamQueue__Reset @ 0x80191FEC (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void StreamQueue__Reset(s32);
M2C_UNK MusicStreamQueue__ClearTracks(s32);         /* extern */

void MusicStreamQueue__Reset(s32 arg0) {
    StreamQueue__Reset(arg0);
    MusicStreamQueue__ClearTracks(arg0);
}
