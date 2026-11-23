/* SuspensionBridge__AdvanceSpanGeometryState @ 0x800FB804 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK SuspensionBridge__UpdateSpanFromPoint(void *, void *); /* extern */
M2C_UNK SuspensionBridge__UpdateSpanGeometry(void *, void *);  /* extern */

void SuspensionBridge__AdvanceSpanGeometryState(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_ctr;
    s32 var_r11;
    void *var_r9;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x770) < 0) {
        var_r11 = 0;
        do {
            var_ctr = 2;
            var_r9 = (void *)((var_r11 * 0x90) + (s32)arg0 + 0x4D8);
loop_3:
            M2C_FIELD(var_r9, f32 *, -0x18) = (f32) M2C_FIELD(var_r9, f32 *, -0x48);
            M2C_FIELD(var_r9, f32 *, -0x10) = (f32) M2C_FIELD(var_r9, f32 *, -0x40);
            M2C_FIELD(var_r9, f32 *, -8) = (f32) M2C_FIELD(var_r9, f32 *, -0x38);
            M2C_FIELD(var_r9, f32 *, 0) = (f32) M2C_FIELD(var_r9, f32 *, -0x30);
            var_r9 += 4;
            var_ctr -= 1;
            if (var_ctr != 0) {
                goto loop_3;
            }
            var_r11 += 1;
        } while (var_r11 <= 1);
        M2C_FIELD(arg0, f32 *, 0x578) = (f32) M2C_FIELD(arg0, f32 *, 0x570);
        M2C_FIELD(arg0, f32 *, 0x57C) = (f32) M2C_FIELD(arg0, f32 *, 0x574);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x418);
        if (temp_r4 != 0) {
            SuspensionBridge__UpdateSpanGeometry(arg0, temp_r4 + 0x38);
            return;
        }
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x41C);
        if (temp_r4_2 != 0) {
            SuspensionBridge__UpdateSpanFromPoint(arg0, temp_r4_2 + 0x38);
        }
    }
}
