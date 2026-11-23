/* MenuFrame__UpdateLayout @ 0x802676DC (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__SetPosition(void *, f32, f32);
void Sphere__SetAnchor(void *, f32, f32);
void Sphere__SetSize(void *, f32, f32);
void Sphere__SetColor(void *, f32, f32, f32, f32);
void Sphere__SetCornerColor(void *, s32, f32, f32, f32, f32);
void MenuPanelBox__ShowBackground(s32);
void Sphere__SetTexture(void *, s32, s32, s32, s32, s32);
void MenuFrame__UpdateLayout(void *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r28;
    void *temp_r30;
    void *var_r29;
    void *var_r30;

    temp_r30 = arg0 + 0x1A4;
    Sphere__SetTexture(temp_r30, M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18), 0, 1, 1);
    var_r28 = 0;
    var_r29 = arg0 + 0x84;
    Sphere__SetPosition(temp_r30, M2C_FIELD(arg0, f32 *, 0x2C) * M2C_FIELD(arg0, f32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0x30) * M2C_FIELD(arg0, f32 *, 0x40));
    Sphere__SetAnchor(temp_r30, M2C_FIELD(arg0, f32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0x40));
    Sphere__SetSize(temp_r30, M2C_FIELD(arg0, f32 *, 0x2C), M2C_FIELD(arg0, f32 *, 0x30));
    Sphere__SetColor(temp_r30, M2C_FIELD(arg0, f32 *, 0x54), M2C_FIELD(arg0, f32 *, 0x58), M2C_FIELD(arg0, f32 *, 0x5C), M2C_FIELD(arg0, f32 *, 0x50));
    do {
        temp_f1 = M2C_FIELD(var_r29, f32 *, -0xC);
        temp_r4 = var_r28;
        temp_f2 = M2C_FIELD(var_r29, f32 *, -8);
        temp_f3 = M2C_FIELD(var_r29, f32 *, -4);
        var_r28 += 1;
        temp_f4 = M2C_FIELD(var_r29, f32 *, 0);
        var_r29 += 0x20;
        Sphere__SetCornerColor(arg0 + 0x1A4, temp_r4, temp_f1, temp_f2, temp_f3, temp_f4);
    } while (var_r28 <= 3);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r5 == 0x12345678) {
        var_r30 = arg0 + 0x2F88;
        Sphere__SetTexture(var_r30, M2C_FIELD(arg0, s32 *, 0x14), 0x12345678, 0, 1, 1);
    } else {
        var_r30 = arg0 + 0x2F88;
        Sphere__SetTexture(var_r30, M2C_FIELD(arg0, s32 *, 0x14), temp_r5 - 9, 0, 1, 1);
    }
    Sphere__SetSize(var_r30, M2C_FIELD(arg0, f32 *, 0x2C), M2C_FIELD(arg0, f32 *, 0x30));
    MenuPanelBox__ShowBackground((s32) var_r30);
}
