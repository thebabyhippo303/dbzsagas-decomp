/* FileHandle__WaitForCompletion @ 0x80180754 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 DvdFile__WaitForCompletion(void *, s32, void *, void *, void *);
M2C_UNK FileStream__GetUnderlyingHandle(s32);
void FileHandle__WaitForCompletion(void *arg0, s32 arg1, void *arg2, void *arg3, void *arg4) {
    s32 var_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0) != 1) {
        var_r3 = M2C_FIELD(arg0, s32 *, 4);
    } else {
        var_r3 = FileStream__GetUnderlyingHandle(M2C_FIELD(arg0, s32 *, 4));
    }
    DvdFile__WaitForCompletion((void *) var_r3, arg1, arg2, arg3, arg4);
}
