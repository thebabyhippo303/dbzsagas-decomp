/* HUD__UpdateSimpleHud @ 0x8010D044 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void HUD__UpdateSimpleHudWidgets(void *, void *);
void HUD__UpdateSimpleHudPosition(void *, void *);
void HUD__UpdateMeterWidgetGroup(void *, void *, int, f32, f32);
extern f32 lbl_80326304 __attribute__((section(".data")));
extern f32 lbl_80326308 __attribute__((section(".data")));

void HUD__UpdateSimpleHud(void *arg0, f32 farg0) {
    f32 temp_f1;
    void *temp_r30;

    temp_f1 = farg0 * lbl_80326304;
    if (!(temp_f1 < lbl_80326308)) {
        temp_r30 = arg0 + 0x2698;
        HUD__UpdateMeterWidgetGroup(arg0, arg0 + 0x269C, 1, temp_f1, lbl_80326308);
        HUD__UpdateSimpleHudWidgets(arg0, temp_r30);
        HUD__UpdateSimpleHudPosition(arg0, temp_r30);
    }
}
