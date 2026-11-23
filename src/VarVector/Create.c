/* VarVector__Create @ 0x8018B0D8 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 CmdCon__GetOrCreateContext(u8 *, u8 *);
s32 Mem__New(s32);
void * VarVector__Init(void *, int, int, void *, void *, int, int);
s32 VariableContext__AddVariable(s32, void *);
M2C_UNK VariableContext__FindBinaryVariable(s32, void *, s32); /* extern */
extern s32 lbl_803DCC18;

s32 VarVector__Create(u8 *arg0, u8 *arg1, s32 arg2, void *arg3, void *arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_r3;
    s32 var_r3;
    s32 var_r9;
    void *temp_r3_2;
    void *temp_r9;

    temp_r3 = CmdCon__GetOrCreateContext(arg0, arg1);
    var_r3 = 0;
    if (temp_r3 == 0) {
        return var_r3;
    } else {
        VariableContext__FindBinaryVariable(temp_r3, arg3, arg2);
        var_r9 = 1;
        if ((s32) lbl_803DCC18 == 0) {
            var_r9 = 0;
        }
        var_r3 = 1;
        if (var_r9 == 0) {
            temp_r3_2 = VarVector__Init(Mem__New(0x48), arg5, arg2, arg3, arg4, arg6, arg7);
            var_r3 = 0;
            if (temp_r3_2 != NULL) {
                if (VariableContext__AddVariable(temp_r3, temp_r3_2) == 0) {
                    temp_r9 = M2C_FIELD(temp_r3_2, void **, 4);
                    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r3_2 + M2C_FIELD(temp_r9, s16 *, 8), 3);
                    return 0;
                }
                var_r3 = 1;
                /* Duplicate return node #8. Try simplifying control flow for better match */
                return var_r3;
            }
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return var_r3;
    }
}
