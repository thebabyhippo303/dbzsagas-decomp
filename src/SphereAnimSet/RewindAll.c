/* SphereAnimSet__RewindAll @ 0x8026B2B0 (size: 0x170, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void UiAnimator__Rewind(void *);
void SphereAnimSet__RewindAll(void *arg0) {
    s32 var_r20;
    void *var_r21;
    void *var_r22;
    void *var_r23;
    void *var_r24;
    void *var_r25;
    void *var_r26;
    void *var_r27;
    void *var_r28;
    void *var_r29;
    void *var_r31;

    var_r20 = 4;
    var_r21 = arg0 + 0x3C4;
    UiAnimator__Rewind(arg0);
    var_r22 = arg0 + 0x9F4;
    var_r23 = arg0 + 0x9C4;
    UiAnimator__Rewind(arg0 + 0x34);
    var_r24 = arg0 + 0x514;
    var_r25 = arg0 + 0x4E4;
    UiAnimator__Rewind(arg0 + 0x64);
    var_r26 = arg0 + 0x4B4;
    var_r27 = arg0 + 0x484;
    UiAnimator__Rewind(arg0 + 0x94);
    var_r28 = arg0 + 0x454;
    var_r29 = arg0 + 0x424;
    UiAnimator__Rewind(arg0 + 0xC4);
    var_r31 = arg0 + 0x3F4;
    UiAnimator__Rewind(arg0 + 0xF4);
    UiAnimator__Rewind(arg0 + 0x124);
    UiAnimator__Rewind(arg0 + 0x244);
    UiAnimator__Rewind(arg0 + 0x274);
    UiAnimator__Rewind(arg0 + 0x2A4);
    UiAnimator__Rewind(arg0 + 0x2D4);
    UiAnimator__Rewind(arg0 + 0x304);
    UiAnimator__Rewind(arg0 + 0x334);
    UiAnimator__Rewind(arg0 + 0x364);
    UiAnimator__Rewind(arg0 + 0x394);
    UiAnimator__Rewind(arg0 + 0x214);
    UiAnimator__Rewind(arg0 + 0x154);
    UiAnimator__Rewind(arg0 + 0x184);
    UiAnimator__Rewind(arg0 + 0x1B4);
    UiAnimator__Rewind(arg0 + 0x1E4);
    do {
        UiAnimator__Rewind(var_r21);
        var_r21 += 0x180;
        UiAnimator__Rewind(var_r31);
        var_r31 += 0x180;
        UiAnimator__Rewind(var_r29);
        var_r29 += 0x180;
        UiAnimator__Rewind(var_r28);
        var_r28 += 0x180;
        UiAnimator__Rewind(var_r27);
        var_r27 += 0x180;
        UiAnimator__Rewind(var_r26);
        var_r26 += 0x180;
        UiAnimator__Rewind(var_r25);
        var_r25 += 0x180;
        UiAnimator__Rewind(var_r24);
        var_r24 += 0x180;
        UiAnimator__Rewind(var_r23);
        var_r23 += 0x60;
        UiAnimator__Rewind(var_r22);
        var_r22 += 0x60;
        var_r20 -= 1;
    } while (var_r20 != 0);
}