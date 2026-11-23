/* SuspensionBridge__OnActorExit @ 0x800FB6D0 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void TriggerBox__ClearEnteringActor(void *, void *);
void SuspensionBridge__OnActorExit(s32 arg0, void *arg1) {
    s32 var_ctr;
    s32 var_r11;
    void *var_r9;

    TriggerBox__ClearEnteringActor(arg0, arg1);
    if ((arg1 != NULL) && (arg1 == (s32) M2C_FIELD(arg0, s32 *, 0x418))) {
        M2C_FIELD(arg0, void **, 0x41C) = arg1;
        M2C_FIELD(arg0, s32 *, 0x418) = 0;
        var_r11 = 0;
        while (var_r11 <= 1) {
            var_ctr = 2;
            var_r9 = (var_r11 * 0x90) + arg0 + 0x4B8;
loop_4:
            M2C_FIELD(var_r9, f32 *, -8) = (f32) M2C_FIELD(var_r9, f32 *, -0x38);
            M2C_FIELD(var_r9, f32 *, 0) = (f32) M2C_FIELD(var_r9, f32 *, -0x30);
            var_r9 += 4;
            var_ctr -= 1;
            if (var_ctr == 0) {
                var_r11 += 1;
            } else {
                goto loop_4;
            }
        }
    }
}
