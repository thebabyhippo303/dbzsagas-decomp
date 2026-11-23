/* ActorList__DestroyExpired @ 0x801DF538 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void ActorList__DestroyExpired(void **arg0) {
    s32 var_r9;
    void *temp_r11;
    void *temp_r9;
    void *var_r31;

    var_r31 = *arg0;
loop_1:
    if (var_r31 != NULL) {
        temp_r11 = M2C_FIELD(var_r31, void **, 0);
        var_r9 = 0;
        var_r31 = M2C_FIELD(var_r31, void **, 0x14);
        if (((s32) M2C_FIELD(temp_r11, s32 *, 0x90) != 0) && ((s32) M2C_FIELD(temp_r11, s32 *, 0x94) <= 0)) {
            var_r9 = 1;
        }
        if ((var_r9 != 0) && (temp_r11 != NULL)) {
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x34);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38), 3);
        }
        goto loop_1;
    }
}
