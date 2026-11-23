/* Distort__MoveImpl @ 0x8009A2A4 (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { f32 x, y, z; } Vec3;
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Distort__FindById(void *, int);
float sqrtf(float);
M2C_UNK fn_802A1228(s32, void *, f32 *);            /* extern */
extern f32 lbl_8031FBEC __attribute__((section(".data")));
extern void *lbl_803DC5B4;

void Distort__MoveImpl(void *arg0, s32 arg1, u8 *arg2) {
    Vec3 vec_sp28;
    f32 sp60;
    f32 sp50;
    f32 sp48;
    f32 sp3C;
    f32 sp38;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 temp_f13;
    f32 temp_f1;

    if (Distort__FindById(arg0, arg1) != NULL) {
        vec_sp28 = *(Vec3 *)((char *)lbl_803DC5B4 + 0xa0);
        sp18 = sp18 - M2C_FIELD(arg2, f32 *, 0);
        sp1C = sp1C - M2C_FIELD(arg2, f32 *, 4);
        sp20 = sp20 - M2C_FIELD(arg2, f32 *, 8);
        sp38 = sp18;
        sp3C = sp1C;
        sp20 = M2C_FIELD(&sp38, f32 *, 4);
        temp_f13 = M2C_FIELD(&sp38, f32 *, 8);
        temp_f1 = sp38 * sp38;
        sp48 = temp_f1;
        sp20 = sp20 * sp20;
        sp50 = temp_f13 * temp_f13;
        temp_f13 = lbl_8031FBEC / sqrtf(temp_f1 + M2C_FIELD(&sp48, f32 *, 4) + M2C_FIELD(&sp48, f32 *, 8));
        sp60 = temp_f13 * M2C_FIELD(&sp38, f32 *, 8);
        temp_f1 = temp_f13 * sp38;
        temp_f13 = M2C_FIELD(&sp38, f32 *, 4) * temp_f13;
        sp38 = temp_f1;
        M2C_FIELD(&sp38, f32 *, 8) = sp60;
        M2C_FIELD(&sp38, f32 *, 4) = temp_f13;
        sp20 = temp_f13;
        sp50 = sp60;
        sp18 = sp38;
        sp1C = sp3C;
        sp1C = sp20;
        sp48 = sp38;
        fn_802A1228(arg1, arg2, &sp18);
    }
}
