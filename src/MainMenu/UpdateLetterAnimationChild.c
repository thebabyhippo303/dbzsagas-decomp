/* MainMenu__UpdateLetterAnimationChild @ 0x80114C9C (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Rand__RangeInt(void *, s32, s32);
f32 Rand__RangeFloat(void *, f32, f32);
void Sphere__SetColor(void *, f32, f32, f32, f32);
void Sphere__Render(void *);
extern u32 lbl_803A35AC __attribute__((section(".data")));
extern s32 lbl_803DD634;

void MainMenu__UpdateLetterAnimationChild(void *arg0) {
    void *temp_r29;
    void *temp_r30;
    s32 temp_r3;
    f32 temp_f13;
    f32 temp_f31;

    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        temp_f13 = M2C_FIELD(arg0, f32 *, 0x1C) - (f32) (f64) lbl_803A35AC * 0.001f;
        temp_f31 = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x1C) = temp_f13;
        if (!(temp_f13 > temp_f31)) {
            temp_r3 = Rand__RangeInt(&lbl_803DD634, 0, 2);
            if (temp_r3 <= 1) {
                if (temp_r3 >= 0) {
                M2C_FIELD(arg0, s32 *, 0x24) = Rand__RangeInt(&lbl_803DD634, 0, M2C_FIELD(arg0, s32 *, 0x3B0) - 1);
                M2C_FIELD(arg0, f32 *, 0x14) = temp_f31;
                if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3C4) = 5;
                    M2C_FIELD(arg0, f32 *, 0x28) = 2.0f;
                    M2C_FIELD(arg0, f32 *, 0x10) = temp_f31;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x3C4) = 4;
                    M2C_FIELD(arg0, f32 *, 0x20) = 1.0f;
                }
                }
            }
            M2C_FIELD(arg0, f32 *, 0x1C) = Rand__RangeFloat(&lbl_803DD634, M2C_FIELD(arg0, f32 *, 0x2C), M2C_FIELD(arg0, f32 *, 0x30));
        }
    }
    temp_r30 = arg0 + 0x6C;
    Sphere__SetColor(temp_r30, 1.0f, 1.0f, 1.0f, 0.0f);
    Sphere__Render(temp_r30);
    temp_r29 = arg0 + 0x20C;
    Sphere__SetColor(temp_r29, 1.0f, 1.0f, 1.0f, 0.0f);
    Sphere__Render(temp_r29);
}
