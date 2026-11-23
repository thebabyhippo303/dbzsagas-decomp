/* TrackPath__Construct @ 0x801FF444 (size: 0x184, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SplinePath__FindNearestControlPoint(void *, void *);
void *BezierPath__Construct(void *, void *, void *, void *, void *);
extern M2C_UNK lbl_803455B8 __attribute__((section(".data")));

typedef struct { s32 a, b, c; } V3;

void *TrackPath__Construct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    f32 temp_f10;
    V3 sp8;
    f32 temp_f11;
    f32 temp_f12;
    register f32 var_f13;
    s32 temp_r3;
    s32 temp_r9_3;
    s32 var_r11_2;
    s32 var_r7;
    void *temp_r11;
    s32 var_r11;
    void *temp_r9_4;
    char *temp_r9_5;
    void *temp_r9_6;

    BezierPath__Construct(arg0, arg1, arg2, arg3, NULL);
    temp_r11 = M2C_FIELD(arg0, void **, 0x1C);
    M2C_FIELD(arg0, void **, 0x78) = arg4;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &lbl_803455B8;
    sp8 = *(V3 *) temp_r11;
    M2C_FIELD(arg0, s32 *, 0x7C) = SplinePath__FindNearestControlPoint(arg4, (s32) &sp8);
    sp8 = *(V3 *) ((M2C_FIELD(arg0, void **, 0x1C) + (M2C_FIELD(arg0, s32 *, 0x18) * 0xC)) - 0xC);
    temp_r3 = SplinePath__FindNearestControlPoint(M2C_FIELD(arg0, void **, 0x78), (s32) &sp8);
    var_r7 = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = temp_r3;
    temp_r9_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x24);
    temp_f10 = M2C_FIELD(((temp_r3 * 0x1C) + temp_r9_3), f32 *, 0x18);
    temp_f11 = M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x7C) * 0x1C) + temp_r9_3), f32 *, 0x18);
    temp_f12 = temp_f10 - temp_f11;
    if (var_r7 < (s32) M2C_FIELD(arg0, s32 *, 0x20)) {
        var_r11 = 0;
        do {
            var_r7 += 1;
            temp_r9_4 = M2C_FIELD(arg0, s32 *, 0x24) + var_r11;
            var_r11 += 0x1C;
            M2C_FIELD(temp_r9_4, f32 *, 0x14) = (f32) ((M2C_FIELD(temp_r9_4, f32 *, 0x14) / M2C_FIELD(arg0, f32 *, 8)) * temp_f12);
        } while (var_r7 < (s32) M2C_FIELD(arg0, s32 *, 0x20));
    }
    var_f13 = temp_f11;
    var_r7 = 0;
    if (var_r7 < (s32) M2C_FIELD(arg0, s32 *, 0x20)) {
        var_r11_2 = 0;
        do {
            var_r7 += 1;
            temp_r9_5 = M2C_FIELD(arg0, s32 *, 0x24) + var_r11_2;
            M2C_FIELD(temp_r9_5, f32 *, 0x18) = var_f13;
            var_r11_2 += 0x1C;
            var_f13 += M2C_FIELD(temp_r9_5, f32 *, 0x14);
        } while (var_r7 < (s32) M2C_FIELD(arg0, s32 *, 0x20));
    }
    temp_r9_6 = ((M2C_FIELD(arg0, s32 *, 0x20) * 0x1C) + M2C_FIELD(arg0, s32 *, 0x24)) - 0x1C;
    M2C_FIELD(temp_r9_6, f32 *, 0x14) = (f32) (temp_f10 - M2C_FIELD(temp_r9_6, f32 *, 0x18));
    M2C_FIELD(arg0, f32 *, 8) = temp_f12;
    return arg0;
}
