/* Simple__SetScaleImpl @ 0x802C6D00 (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef void (*ScaleFn)(void *, s32);
typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void Simple__UpdateOBBFromScale(void *);
extern const f32 lbl_8035325C __attribute__((section(".data")));
extern const f32 lbl_80353260 __attribute__((section(".data")));

void Simple__SetScaleImpl(char *arg0, char *arg1) {
    mt_vec3_f32 sp8;
    s32 var_r4;
    char *temp_r9_2;
    char *temp_r10;
    char *temp_r11;
    char *temp_r7;
    char *temp_r7_b;
    char *temp_r9;
    char *temp_r9_3;
    s32 var_r6;
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    f32 f;

    temp_r9 = arg0 + 0x2D8;
    temp_r7 = arg0 + 0x2CC;
    a = M2C_FIELD(arg1, f32 *, 0);
    b = M2C_FIELD(arg0, f32 *, 0x2D8);
    d = M2C_FIELD(temp_r9, f32 *, 4);
    c = M2C_FIELD(temp_r9, f32 *, 8);
    sp8.v0 = a * b;
    f = M2C_FIELD(arg1, f32 *, 4);
    sp8.v2 = M2C_FIELD(arg1, f32 *, 8) * c;
    sp8.v1 = f * d;
    *(mt_vec3_f32 *) (arg0 + 0x2CC) = sp8;
    var_r6 = 0;
    if ((M2C_FIELD(arg0, f32 *, 0x2CC) != lbl_8035325C) || (M2C_FIELD(temp_r7, f32 *, 4) != lbl_8035325C) || (M2C_FIELD(temp_r7, f32 *, 8) != lbl_8035325C)) {
        var_r6 = 1;
    }
    var_r4 = 0;
    temp_r9_2 = arg0 + 0x2CC;
    M2C_FIELD(arg0, s32 *, 0x224) = var_r6;
    if ((M2C_FIELD(arg0, f32 *, 0x2CC) == lbl_80353260) || (M2C_FIELD(temp_r9_2, f32 *, 4) == lbl_80353260) || (M2C_FIELD(temp_r9_2, f32 *, 8) == lbl_80353260)) {
        var_r4 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x228) = var_r4;
    temp_r9_3 = M2C_FIELD(arg0, char **, 0x34);
    M2C_FIELD(temp_r9_3, ScaleFn *, 0x64)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x60), var_r4);
    temp_r11 = arg0 + 0x2F0;
    temp_r10 = 0x2FC + arg0;
    M2C_FIELD(arg0, f32 *, 0x2F0) = lbl_80353260;
    M2C_FIELD(temp_r11, f32 *, 4) = lbl_80353260;
    M2C_FIELD(temp_r11, f32 *, 8) = lbl_80353260;
    M2C_FIELD(arg0, f32 *, 0x2FC) = lbl_80353260;
    M2C_FIELD(temp_r10, f32 *, 4) = lbl_80353260;
    M2C_FIELD(temp_r10, f32 *, 8) = lbl_80353260;
    M2C_FIELD(arg0, s32 *, 0x22C) = 0;
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    Simple__UpdateOBBFromScale(arg0);
    temp_r7_b = M2C_FIELD(arg0, char **, 0x34);
    M2C_FIELD(temp_r7_b, void (**)(void *), 0xAC)(arg0 + M2C_FIELD(temp_r7_b, s16 *, 0xA8));
}
