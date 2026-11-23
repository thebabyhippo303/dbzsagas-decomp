/* SphereAnimSet__RestartAll @ 0x8026B0C8 (size: 0x1E8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void UiAnimator__Restart(void *, s32);
void SphereAnimSet__RestartAll(void *arg0, s32 arg1) {
    s32 var_r19;
    void *var_r20;
    void *var_r21;
    void *var_r22;
    void *var_r23;
    void *var_r24;
    void *var_r25;
    void *var_r26;
    void *var_r27;
    void *var_r28;
    void *var_r29;

    UiAnimator__Restart(arg0, arg1);
    var_r20 = arg0 + 0x3C4;
    UiAnimator__Restart(arg0 + 0x34, arg1);
    var_r21 = arg0 + 0x9F4;
    UiAnimator__Restart(arg0 + 0x64, arg1);
    var_r22 = arg0 + 0x9C4;
    UiAnimator__Restart(arg0 + 0x94, arg1);
    var_r23 = arg0 + 0x514;
    UiAnimator__Restart(arg0 + 0xC4, arg1);
    var_r24 = arg0 + 0x4E4;
    UiAnimator__Restart(arg0 + 0xF4, arg1);
    var_r25 = arg0 + 0x4B4;
    UiAnimator__Restart(arg0 + 0x124, arg1);
    var_r26 = arg0 + 0x484;
    UiAnimator__Restart(arg0 + 0x244, arg1);
    var_r27 = arg0 + 0x454;
    UiAnimator__Restart(arg0 + 0x274, arg1);
    var_r28 = arg0 + 0x424;
    UiAnimator__Restart(arg0 + 0x2A4, arg1);
    var_r29 = arg0 + 0x3F4;
    UiAnimator__Restart(arg0 + 0x2D4, arg1);
    var_r19 = 4;
    UiAnimator__Restart(arg0 + 0x304, arg1);
    UiAnimator__Restart(arg0 + 0x334, arg1);
    UiAnimator__Restart(arg0 + 0x364, arg1);
    UiAnimator__Restart(arg0 + 0x394, arg1);
    UiAnimator__Restart(arg0 + 0x214, arg1);
    UiAnimator__Restart(arg0 + 0x154, arg1);
    UiAnimator__Restart(arg0 + 0x184, arg1);
    UiAnimator__Restart(arg0 + 0x1B4, arg1);
    UiAnimator__Restart(arg0 + 0x1E4, arg1);
    do {
        UiAnimator__Restart(var_r20, arg1);
        var_r20 += 0x180;
        UiAnimator__Restart(var_r29, arg1);
        var_r29 += 0x180;
        UiAnimator__Restart(var_r28, arg1);
        var_r28 += 0x180;
        UiAnimator__Restart(var_r27, arg1);
        var_r27 += 0x180;
        UiAnimator__Restart(var_r26, arg1);
        var_r26 += 0x180;
        UiAnimator__Restart(var_r25, arg1);
        var_r25 += 0x180;
        UiAnimator__Restart(var_r24, arg1);
        var_r24 += 0x180;
        UiAnimator__Restart(var_r23, arg1);
        var_r23 += 0x180;
        UiAnimator__Restart(var_r22, arg1);
        var_r22 += 0x60;
        UiAnimator__Restart(var_r21, arg1);
        var_r21 += 0x60;
        var_r19 -= 1;
    } while (var_r19 != 0);
}
