/* MenuPanel__FindOptionById @ 0x80268854 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EzNode__GetFirstChild(void *);
void *MenuPanel__FindOptionById(s32 arg0, s32 arg1) {
    s32 var_r31;
    void *temp_r9;
    void *temp_r9_2;

    var_r31 = EzNode__GetFirstChild(arg0 + 0xADE4);
    if (var_r31 != 0) {
loop_1:
        temp_r9 = M2C_FIELD(var_r31, void **, 0x10);
        if (M2C_FIELD(temp_r9, s32 (**)(s32), 0xA4)(var_r31 + M2C_FIELD(temp_r9, s16 *, 0xA0)) == arg1) {
            return (void *) var_r31;
        }
        temp_r9_2 = M2C_FIELD(var_r31, void **, 0x10);
        var_r31 = M2C_FIELD(temp_r9_2, s32 (**)(s32), 0x54)(var_r31 + M2C_FIELD(temp_r9_2, s16 *, 0x50));
        if (var_r31 == 0) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return NULL;
}
