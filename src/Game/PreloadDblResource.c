/* Game__PreloadDblResource @ 0x80007C14 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *dblLoad(const char *, void *, int);
void fn_80205E08(void *, int);
void *Game__PreloadDblResource(void *self, s8 *arg1) {
    void *temp_r3;

    temp_r3 = dblLoad(arg1, NULL, 0);
    fn_80205E08(temp_r3, 1);
    return temp_r3;
}
