/* FullScreenEffect__HandleEventIfPresent @ 0x800E1950 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void FullScreenEffect__HandleEvent(s32);             /* extern */

void FullScreenEffect__HandleEventIfActive(s32 *arg0) {
    if ((s32) *arg0 != 0) {
        FullScreenEffect__HandleEvent(*arg0);
    }
}
