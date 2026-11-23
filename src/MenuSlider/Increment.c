/* MenuSlider__Increment @ 0x800157FC (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SphereAnimSet__ClearAll(void *);
void SphereAnimSet__RestartAll(void *, s32);
void UiAnimator__SetKey(void *, f32, f32);
extern f32 lbl_8030DA98 __attribute__((section(".data")));
extern f32 lbl_8030DA9C __attribute__((section(".data")));
extern f32 lbl_8030DAA0 __attribute__((section(".data")));

void MenuSlider__Increment(void *arg0) {
    s32 temp_r9;
    s32 temp_r0;
    s32 var_r29;
    s32 var_r30;
    s32 var_r30_2;
    void *temp_r11;
    void *temp_r28;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x838);
    temp_r11 = arg0 + 0x1A0;
    temp_r9 += 1;
    M2C_FIELD(arg0, s32 *, 0x838) = temp_r9;
    temp_r0 = M2C_FIELD(temp_r11, s32 *, 4);
    if (temp_r9 > temp_r0) {
        M2C_FIELD(arg0, s32 *, 0x838) = temp_r0;
    }
    var_r29 = 0;
    temp_r28 = temp_r11;
    if (var_r29 < (s32) M2C_FIELD(arg0, s32 *, 0x838)) {
        var_r30 = 0;
        do {
            temp_r11 = *(void **)((char *)M2C_FIELD(arg0, void **, 0x1A0) + var_r30);
            var_r29 += 1;
            temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
            var_r30 += 4;
            M2C_FIELD(temp_r9_2, void (**)(void *, s32, s32, s32, s32, s32), 0x6C)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x68), M2C_FIELD(arg0, s32 *, 0x848), M2C_FIELD(arg0, s32 *, 0x850), 0, 1, 1);
        } while (var_r29 < (s32) M2C_FIELD(arg0, s32 *, 0x838));
    }
    if (var_r29 < (s32) M2C_FIELD(temp_r28, s32 *, 4)) {
        var_r30_2 = var_r29 * 4;
        do {
            temp_r11 = *(void **)((char *)M2C_FIELD(arg0, void **, 0x1A0) + var_r30_2);
            var_r29 += 1;
            temp_r9_3 = M2C_FIELD(temp_r11, void **, 0x19C);
            var_r30_2 += 4;
            M2C_FIELD(temp_r9_3, void (**)(void *, s32, s32, s32, s32, s32), 0x6C)(temp_r11 + M2C_FIELD(temp_r9_3, s16 *, 0x68), M2C_FIELD(arg0, s32 *, 0x848), M2C_FIELD(arg0, s32 *, 0x84C), 0, 1, 1);
        } while (var_r29 < (s32) M2C_FIELD(temp_r28, s32 *, 4));
    }
    SphereAnimSet__ClearAll(M2C_FIELD(arg0, void **, 0x7FC));
    UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x7FC) + 0x304, lbl_8030DA98, lbl_8030DA9C);
    UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x7FC) + 0x304, lbl_8030DAA0, lbl_8030DA98);
    SphereAnimSet__RestartAll(M2C_FIELD(arg0, void **, 0x7FC), 0);
}
