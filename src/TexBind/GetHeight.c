/* TexBind__GetHeight @ 0x8024F330 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * TexBind__FindBlock(char *, u32);
M2C_UNK fn_80247E34(void);
M2C_UNK fn_80247E04(void);
M2C_UNK fn_80247E10(void);
extern s8 *lbl_803DCDFC;

u16 TexBind__GetHeight(s32 arg0) {
    s32 temp_r9;
    s32 var_r31;
    s8 *temp_r30;
    void *temp_r3;
    void *var_r0;
    void *var_r3;

    var_r31 = arg0;
    temp_r30 = lbl_803DCDFC;
    if (fn_80247E34() != 0) {
        fn_80247E04();
        if (var_r31 == fn_80247E10()) {
            var_r31 = fn_80247E04();
        }
    }
    temp_r3 = TexBind__FindBlock(temp_r30, (u32) var_r31);
    if (temp_r3 == NULL) {
        var_r3 = NULL;
    } else {
        temp_r9 = M2C_FIELD(temp_r3, s32 *, 4);
        if (temp_r9 == 0) {
            var_r0 = NULL;
        } else {
            var_r0 = temp_r9 + ((var_r31 - M2C_FIELD(temp_r3, u16 *, 0)) * 0xA8);
        }
        var_r3 = var_r0;
    }
    return M2C_FIELD(var_r3, u16 *, 0x9E);
}
