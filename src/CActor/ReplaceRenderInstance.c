/* CActor__ReplaceRenderInstance @ 0x801DC828 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_8022AB9C(void *, int);
M2C_UNK fn_8022A674(void *, M2C_UNK, M2C_UNK);      /* extern */
void fn_8022D22C(void *, void *);

void *CActor__ReplaceRenderInstance(void *arg0, void *arg1) {
    void *temp_r28;

    fn_8022AB9C(M2C_FIELD(arg0, void **, 0x84), 0);
    temp_r28 = M2C_FIELD(arg0, void **, 0x84);
    M2C_FIELD(arg0, void **, 0x84) = arg1;
    fn_8022A674(arg1, 0, 0);
    fn_8022D22C(temp_r28, arg1);
    return temp_r28;
}
