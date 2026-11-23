/* SplinePath__BuildSegments @ 0x801FF010 (size: 0x2F0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Path__IsLooped(void *);
float sqrtf(float);
extern f32 lbl_803454DC;
extern f32 lbl_803454E0 __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void SplinePath__BuildSegments(void *arg0) {
    volatile mt_vec3_f32 sp8;
    volatile mt_vec3_f32 sp18;
    volatile mt_vec3_f32 sp28;
    void *temp_r11;
    s32 temp_r9_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f13;
    f32 temp_f31;
    f32 var_f13;
    f32 *var_r26;
    s32 var_r10;
    s32 var_r10_2;
    s32 var_r10_3;
    s32 var_r11;
    s32 var_r11_2;
    s32 var_r28;
    s32 var_r29;
    s32 var_r29_2;
    s32 var_r29_3;
    s32 var_r29_4;
    s32 var_r8;
    s32 var_r8_2;
    void *temp_r10;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_4;

    if (Path__IsLooped(arg0) != 0) {
        var_r29 = 0;
        var_r26 = (f32 *)0x80340000;
        if ((M2C_FIELD(arg0, s32 *, 0x20) - 1) > 0) {
            var_r8 = 0xC;
            var_r10 = 0;
            var_r11 = 0;
            do {
                var_r29 += 1;
                *(s32 *)(var_r11 + M2C_FIELD(arg0, s32 *, 0x24)) = M2C_FIELD(arg0, s32 *, 0x1C) + var_r10;
                var_r10 += 0xC;
                temp_r9 = var_r11 + M2C_FIELD(arg0, s32 *, 0x24);
                var_r11 += 0x1C;
                M2C_FIELD(temp_r9, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + var_r8);
                var_r8 += 0xC;
            } while (var_r29 < (s32) (M2C_FIELD(arg0, s32 *, 0x20) - 1));
        }
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x20) * 0x1C) + M2C_FIELD(arg0, s32 *, 0x24)), s32 *, -0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + ((M2C_FIELD(arg0, u32 *, 0x18) * 0xC) - 0xC));
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x20) * 0x1C) + M2C_FIELD(arg0, s32 *, 0x24)), s32 *, -0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    } else {
        var_r29_2 = 0;
        var_r26 = &lbl_803454DC;
        if (0 < (s32) M2C_FIELD(arg0, s32 *, 0x20)) {
            var_r8_2 = 0xC;
            var_r10_2 = 0;
            var_r11_2 = 0;
            do {
                var_r29_2 += 1;
                *(s32 *)(var_r11_2 + M2C_FIELD(arg0, s32 *, 0x24)) = M2C_FIELD(arg0, s32 *, 0x1C) + var_r10_2;
                var_r10_2 += 0xC;
                temp_r9_2 = var_r11_2 + M2C_FIELD(arg0, s32 *, 0x24);
                var_r11_2 += 0x1C;
                M2C_FIELD(temp_r9_2, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + var_r8_2);
                var_r8_2 += 0xC;
            } while (var_r29_2 < (s32) M2C_FIELD(arg0, s32 *, 0x20));
        }
    }
    var_r29_3 = 0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_803454DC;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) > 0) {
        var_r28 = 0;
        temp_f31 = lbl_803454E0;
        do {
            temp_r9_3 = M2C_FIELD(arg0, s32 *, 0x24);
            temp_r8 = *(void * *)(var_r28 + temp_r9_3);
            temp_r10 = M2C_FIELD((var_r28 + temp_r9_3), void **, 4);
            temp_f0 = M2C_FIELD(temp_r10, f32 *, 0) - M2C_FIELD(temp_r8, f32 *, 0);
            sp8.v2 = M2C_FIELD(temp_r10, f32 *, 8) - M2C_FIELD(temp_r8, f32 *, 8);
            temp_f11 = temp_f0 * temp_f0;
            sp8.v0 = temp_f0;
            sp8.v1 = M2C_FIELD(temp_r10, f32 *, 4) - M2C_FIELD(temp_r8, f32 *, 4);
            temp_f0_2 = sp8.v1;
            temp_f13 = sp8.v2;
            sp18.v0 = temp_f11;
            sp18.v1 = temp_f0_2 * temp_f0_2;
            sp18.v2 = temp_f13 * temp_f13;
            M2C_FIELD((var_r28 + M2C_FIELD(arg0, s32 *, 0x24)), f32 *, 0x14) = sqrtf(temp_f11 + sp18.v1 + sp18.v2);
            temp_r11 = var_r28 + M2C_FIELD(arg0, s32 *, 0x24);
            M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(temp_r11, f32 *, 0x14));
            temp_f11_2 = M2C_FIELD(temp_r11, f32 *, 0x14);
            if (temp_f11_2 != *var_r26) {
                temp_f11 = temp_f31 / temp_f11_2;
                sp28.v0 = sp8.v0 * temp_f11;
                sp28.v2 = sp8.v2 * temp_f11;
                sp28.v1 = sp8.v1 * temp_f11;
                sp8 = sp28;
                sp18 = sp28;
            }
            var_r29_3 += 1;
            temp_r9_4 = var_r28 + M2C_FIELD(arg0, s32 *, 0x24);
            M2C_FIELD(temp_r9_4, f32 *, 8) = sp8.v0;
            var_r28 += 0x1C;
            M2C_FIELD(temp_r9_4, f32 *, 0x10) = (f32) sp8.v2;
            M2C_FIELD(temp_r9_4, f32 *, 0xc) = (f32) sp8.v1;
        } while (var_r29_3 < (s32) M2C_FIELD(arg0, s32 *, 0x20));
    }
    var_r29_4 = 0;
    var_f13 = lbl_803454DC;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) > 0) {
        var_r10_3 = 0;
        do {
            var_r29_4 += 1;
            M2C_FIELD((var_r10_3 + M2C_FIELD(arg0, s32 *, 0x24)), f32 *, 0x18) = var_f13;
            temp_f0_3 = M2C_FIELD((var_r10_3 + M2C_FIELD(arg0, s32 *, 0x24)), f32 *, 0x14);
            var_r10_3 += 0x1C;
            var_f13 += temp_f0_3;
        } while (var_r29_4 < (s32) M2C_FIELD(arg0, s32 *, 0x20));
    }
}
