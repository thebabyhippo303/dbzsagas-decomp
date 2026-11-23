/* Avatar__InitializeMovementTables @ 0x800A0778 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern M2C_UNK lbl_80335140 __attribute__((section(".data")));
extern M2C_UNK lbl_80335518 __attribute__((section(".data")));

void *Avatar__InitializeMovementTables(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void **, 4) = &lbl_80335140;
    M2C_FIELD(arg0, void **, 0x10) = &lbl_80335518;
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, void **, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    return arg0;
}
