/* DisplayShake__Reset @ 0x8028D5F4 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void Gfx__SetDisplayOffset(s32, s32);
extern f32 lbl_8034F534 __attribute__((section(".data")));

void DisplayShake__Reset(void *arg0) {
    s32 var_ctr;
    void *var_r9;
    f32 c;
    s32 zero;
    s32 three;

    var_ctr = 4;
    c = lbl_8034F534;
    zero = 0;
    three = 3;
    var_r9 = arg0;
    do {
        M2C_FIELD(var_r9, f32 *, 4) = c;
        M2C_FIELD(var_r9, f32 *, 8) = c;
        M2C_FIELD(var_r9, f32 *, 0xC) = c;
        M2C_FIELD(var_r9, s32 *, 0x10) = zero;
        M2C_FIELD(var_r9, s32 *, 0) = three;
        var_r9 += 0x14;
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    Gfx__SetDisplayOffset(0, 0);
}
