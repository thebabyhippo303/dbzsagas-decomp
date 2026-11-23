/* Game__PreloadCharacterSdb @ 0x80007CE4 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * dblLoad(const char *, void *, int);
void fn_80205E08(void *, int);
M2C_UNK fn_80234054(M2C_UNK *, M2C_UNK, s8 *, M2C_UNK, M2C_UNK); /* extern */

void Game__PreloadCharacterSdb(void *arg0, s8 *arg1) {
    char sp8[0x1D0];

    fn_80205E08(dblLoad(arg1, NULL, 0), 1);
    fn_80234054(&sp8, 0, arg1, 0x26, 0);
}
