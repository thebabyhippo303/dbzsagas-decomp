/* HUD__RefreshTrackedPlayerWidgets @ 0x80109890 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void HUD__DestroyTrackedWidgetSlots(void *, void *);
M2C_UNK HUD__BuildTrackedPlayerWidgets(s32, s32);
extern f32 lbl_80325B50 __attribute__((section(".data")));

void HUD__RefreshTrackedPlayerWidgets(void *arg0, void *arg1) {
    s32 temp_r10;
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg1, void **, 0);
    if (temp_r11 != NULL) {
        temp_r10 = M2C_FIELD(temp_r11, s32 *, 0x290);
        if (temp_r10 > 0) {
            if ((((s32) M2C_FIELD(arg1, s32 *, 0x2C4) == 0) && (M2C_FIELD(temp_r11, f32 *, 0x288) > lbl_80325B50)) || ((s32) M2C_FIELD(arg1, s32 *, 0x504) != temp_r10)) {
                HUD__DestroyTrackedWidgetSlots(arg0, arg1);
                HUD__BuildTrackedPlayerWidgets((s32) arg0, (s32) arg1);
            }
        } else if ((temp_r10 == 0) && ((s32) M2C_FIELD(arg1, s32 *, 0x2C4) != 0)) {
            HUD__DestroyTrackedWidgetSlots(arg0, arg1);
        }
    }
}
