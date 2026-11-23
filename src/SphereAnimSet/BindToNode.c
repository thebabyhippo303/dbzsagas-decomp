/* SphereAnimSet__BindToNode @ 0x8026AC74 (size: 0x264, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
void UiIntAnimator__SetTarget(void *, s32);
void UiAnimator__SetFloatTarget(void *, s32);
void SphereAnimSet__BindToNode(void *arg0, s32 arg1) {
    void *sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r4;
    s32 var_r15;
    s32 var_r17;
    s32 var_r19;
    s32 var_r21;
    s32 var_r23;
    s32 var_r25;
    s32 var_r27;
    s32 var_r29;
    s32 var_r30;
    void *temp_r3;
    void *temp_r3_2;
    void *var_r14;
    void *var_r16;
    void *var_r18;
    void *var_r20;
    void *var_r22;
    void *var_r24;
    void *var_r26;
    void *var_r28;
    void *var_r31;
    if (arg1 != 0) {
        UiIntAnimator__SetTarget(arg0, arg1 + 0x18);
        var_r15 = arg1 + 0xF0;
        spC = arg1 + 0x70;
        UiAnimator__SetFloatTarget(arg0 + 0x34, arg1 + 0x24);
        var_r17 = arg1 + 0x8C;
        sp10 = arg0 + 0x3C4;
        UiAnimator__SetFloatTarget(arg0 + 0x64, arg1 + 0x28);
        var_r19 = arg1 + 0x88;
        sp8 = arg1 + 0xF4;
        UiAnimator__SetFloatTarget(arg0 + 0x94, arg1 + 0x2C);
        var_r21 = arg1 + 0x84;
        UiAnimator__SetFloatTarget(arg0 + 0xC4, arg1 + 0x30);
        var_r23 = arg1 + 0x80;
        UiAnimator__SetFloatTarget(arg0 + 0xF4, arg1 + 0x34);
        var_r25 = arg1 + 0x7C;
        UiAnimator__SetFloatTarget(arg0 + 0x124, arg1 + 0x38);
        var_r27 = arg1 + 0x78;
        UiAnimator__SetFloatTarget(arg0 + 0x244, arg1 + 0x50);
        var_r29 = arg1 + 0x74;
        UiAnimator__SetFloatTarget(arg0 + 0x274, arg1 + 0x54);
        var_r14 = arg0 + 0x9F4;
        UiAnimator__SetFloatTarget(arg0 + 0x2A4, arg1 + 0x58);
        var_r16 = arg0 + 0x9C4;
        UiAnimator__SetFloatTarget(arg0 + 0x2D4, arg1 + 0x5C);
        var_r18 = arg0 + 0x514;
        UiAnimator__SetFloatTarget(arg0 + 0x304, arg1 + 0x60);
        var_r20 = arg0 + 0x4E4;
        UiAnimator__SetFloatTarget(arg0 + 0x334, arg1 + 0x64);
        var_r22 = arg0 + 0x4B4;
        UiAnimator__SetFloatTarget(arg0 + 0x364, arg1 + 0x68);
        var_r24 = arg0 + 0x484;
        UiAnimator__SetFloatTarget(arg0 + 0x394, arg1 + 0x6C);
        var_r26 = arg0 + 0x454;
        UiAnimator__SetFloatTarget(arg0 + 0x214, arg1 + 0x4C);
        var_r28 = arg0 + 0x424;
        UiAnimator__SetFloatTarget(arg0 + 0x154, arg1 + 0x3C);
        UiAnimator__SetFloatTarget(arg0 + 0x184, arg1 + 0x40);
        UiAnimator__SetFloatTarget(arg0 + 0x1B4, arg1 + 0x44);
        var_r31 = arg0 + 0x3F4;
        UiAnimator__SetFloatTarget(arg0 + 0x1E4, arg1 + 0x48);
        var_r30 = 4;
        do {
            UiAnimator__SetFloatTarget(sp10, spC);
            temp_r3 = var_r31;
            temp_r4 = var_r29;
            var_r31 += 0x180;
            var_r29 += 0x20;
            spC += 0x20;
            UiAnimator__SetFloatTarget(temp_r3, temp_r4);
            UiAnimator__SetFloatTarget(var_r28, var_r27);
            var_r27 += 0x20;
            UiAnimator__SetFloatTarget(var_r26, var_r25);
            var_r25 += 0x20;
            UiAnimator__SetFloatTarget(var_r24, var_r23);
            var_r23 += 0x20;
            UiAnimator__SetFloatTarget(var_r22, var_r21);
            var_r21 += 0x20;
            UiAnimator__SetFloatTarget(var_r20, var_r19);
            var_r19 += 0x20;
            UiAnimator__SetFloatTarget(var_r18, var_r17);
            var_r17 += 0x20;
            UiAnimator__SetFloatTarget(var_r16, var_r15);
            var_r15 += 8;
            temp_r3_2 = var_r14;
            var_r14 += 0x60;
            var_r16 += 0x60;
            UiAnimator__SetFloatTarget(temp_r3_2, sp8);
            var_r18 += 0x180;
            var_r20 += 0x180;
            var_r22 += 0x180;
            var_r24 += 0x180;
            var_r26 += 0x180;
            sp8 += 8;
            var_r28 += 0x180;
            var_r30 -= 1;
            sp10 += 0x180;
        } while (var_r30 != 0);
    }
}
