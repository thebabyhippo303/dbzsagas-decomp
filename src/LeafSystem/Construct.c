/* LeafSystem__Construct @ 0x802879A0 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void LeafSystem__SetFadeDistances(void *, f32, f32, f32);
extern f32 lbl_8034F39C __attribute__((section(".data")));
extern f32 lbl_8034F3A0 __attribute__((section(".data")));
extern f32 lbl_8034F3A4 __attribute__((section(".data")));

void *LeafSystem__Construct(void *arg0) {
    s32 var_ctr = 8;
    void *temp_r9;
    void *temp_r11;
    f32 f1;
    f32 f2;
    f32 f3;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    do {
        var_ctr -= 1;
    } while (var_ctr != 0);
    temp_r9 = arg0 + 0x238;
    M2C_FIELD(temp_r9, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x238) = 0;
    temp_r11 = arg0 + 0x254;
    M2C_FIELD(temp_r9, s32 *, 8) = 0;
    M2C_FIELD(temp_r9, s32 *, 0xC) = 0;
    M2C_FIELD(temp_r11, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x254) = 0;
    M2C_FIELD(temp_r11, s32 *, 8) = 0;
    M2C_FIELD(temp_r11, s32 *, 0xC) = 0;
    f1 = lbl_8034F39C;
    f2 = lbl_8034F3A0;
    f3 = lbl_8034F3A4;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
    LeafSystem__SetFadeDistances(arg0, f1, f2, f3);
    return arg0;
}
