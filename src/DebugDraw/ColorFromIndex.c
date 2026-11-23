/* DebugDraw__ColorFromIndex @ 0x801874D4 (size: 0x198, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 memset(void *, int, u32);
void DebugDraw__ColorFromIndex(s32 arg0, u8 *arg1) {
    s8 var_r9;

    memset(arg1, 0, 4U);
    var_r9 = 0xFF;
    M2C_FIELD(arg1, s8 *, 3) = 0xFF;
    switch (arg0) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg1, s8 *, 0) = 0xFF;
        return;
    case 3:
        M2C_FIELD(arg1, s8 *, 1) = 0xFF;
        /* fallthrough */
    case 2:
        M2C_FIELD(arg1, s8 *, 2) = 0xFF;
        return;
    case 4:
        M2C_FIELD(arg1, s8 *, 2) = 0xFF;
        M2C_FIELD(arg1, s8 *, 0) = 0xFF;
        return;
    case 7:
        M2C_FIELD(arg1, s8 *, 0) = 0;
        M2C_FIELD(arg1, s8 *, 2) = 0;
        M2C_FIELD(arg1, s8 *, 1) = 0;
        return;
    case 8:
        M2C_FIELD(arg1, s8 *, 3) = 0x40;
        M2C_FIELD(arg1, s8 *, 0) = 0xFF;
        return;
    case 9:
        var_r9 = 0xFF;
block_35:
        M2C_FIELD(arg1, s8 *, 3) = 0x40;
    case 1:
        M2C_FIELD(arg1, s8 *, 1) = var_r9;
        return;
    case 10:
        M2C_FIELD(arg1, s8 *, 2) = 0xFF;
        M2C_FIELD(arg1, s8 *, 3) = 0x40;
        return;
    case 11:
        M2C_FIELD(arg1, s8 *, 1) = 0xFF;
        M2C_FIELD(arg1, s8 *, 3) = 0x40;
        M2C_FIELD(arg1, s8 *, 2) = 0xFF;
        return;
    case 12:
        M2C_FIELD(arg1, s8 *, 2) = 0xFF;
        M2C_FIELD(arg1, s8 *, 0) = 0xFF;
        M2C_FIELD(arg1, s8 *, 3) = 0x40;
        return;
    case 13:
        M2C_FIELD(arg1, s8 *, 0) = 0xFF;
        goto block_35;
    case 14:
        M2C_FIELD(arg1, s8 *, 3) = 0x40;
        M2C_FIELD(arg1, s8 *, 2) = 0xFF;
    case 5:
        M2C_FIELD(arg1, s8 *, 1) = var_r9;
        M2C_FIELD(arg1, s8 *, 0) = var_r9;
        return;
    case 15:
        var_r9 = 0;
        M2C_FIELD(arg1, s8 *, 3) = 0x40;
        /* fallthrough */
    case 6:
        M2C_FIELD(arg1, s8 *, 0) = var_r9;
        M2C_FIELD(arg1, s8 *, 1) = var_r9;
        M2C_FIELD(arg1, s8 *, 2) = var_r9;
        return;
    case 16:
        M2C_FIELD(arg1, s8 *, 0) = 0;
        M2C_FIELD(arg1, s8 *, 1) = 0;
        M2C_FIELD(arg1, s8 *, 2) = 0;
        M2C_FIELD(arg1, s8 *, 3) = 0;
        return;
    }
}
