/* CmdCon__ExecuteFileInContext @ 0x8018A310 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 CmdCon__ExecuteFile(void *, char *);
M2C_UNK CmdCon__FindContext(s32, s32);
void CmdCon__ExecuteFileInContext(s32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r4;

    temp_r3 = CmdCon__FindContext(arg0, arg1);
    var_r4 = arg1;
    if (temp_r3 != 0) {
        var_r4 = M2C_FIELD(temp_r3, s32 *, 0x24);
    }
    CmdCon__ExecuteFile((void *) arg0, (s8 *) var_r4);
}
