/* Xml__ArenaAlloc @ 0x803067F8 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK Xml__AllocArenaBlock(void);
extern void *lbl_803DD900;

void *Xml__ArenaAlloc(s32 arg0) {
    s32 temp_r3;
    s32 temp_r9;
    void *temp_arena;
    char *ret;

    if ((s32) (M2C_FIELD(lbl_803DD900, s32 *, 0) - M2C_FIELD(lbl_803DD900, s32 *, 4)) < arg0) {
        Xml__AllocArenaBlock();
    }
    temp_arena = lbl_803DD900;
    temp_r3 = M2C_FIELD(temp_arena, s32 *, 4);
    temp_r9 = temp_r3 + arg0 + 3;
    ret = (char *)temp_arena + temp_r3;
    M2C_FIELD(temp_arena, s32 *, 4) = temp_r9 & 0xFFFFFFFC;
    return ret;
}
