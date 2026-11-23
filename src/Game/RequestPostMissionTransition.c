/* Game__RequestPostMissionTransition @ 0x800232B0 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern f32 lbl_80310694 __attribute__((section(".rodata")));
extern s32 lbl_803946C8 __attribute__((section(".bss")));
extern void *lbl_803DC368 __attribute__((section(".sdata")));
extern s32 lbl_803DC374 __attribute__((section(".sdata")));
void Game__RequestLevelTransition(void *, s32, s32);
void Game__RequestPostMissionTransition(void *game) {
    char *g;
    f32 v;
    v = lbl_80310694;
    g = (char *)lbl_803DC368;
    *(s32 *)(g + 180) = 0;
    *(f32 *)(g + 176) = v;
    lbl_803DC374 = 0;
    Game__RequestLevelTransition(game, lbl_803946C8, 0);
}
