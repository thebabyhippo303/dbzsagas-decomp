/* AvatarMovement__HandleWallImpactFromCollisionQuery @ 0x800A1D30 (size: 0x3C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 atan2f(f32, f32);
void AvatarMovement__HandleWallImpact(void *, char *, void *, f32);
float cosf(float);
int fn_8025C17C(void *, void *, void *);
float sinf(float);
extern f32 lbl_80320128 __attribute__((section(".data")));
extern f32 lbl_8032012C __attribute__((section(".data")));
extern f32 lbl_80320130 __attribute__((section(".data")));
extern f32 lbl_80320134 __attribute__((section(".data")));
extern f32 lbl_80320138 __attribute__((section(".data")));
extern f32 lbl_8032013C __attribute__((section(".data")));
extern f32 lbl_80320140 __attribute__((section(".data")));
extern M2C_UNK lbl_803945C4 __attribute__((section(".data")));
extern M2C_UNK lbl_803946B4 __attribute__((section(".data")));
extern f32 lbl_803DE500;

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void AvatarMovement__HandleWallImpactFromCollisionQuery(char *arg0, s8 *arg1, void *arg2, f32 farg0) {
    volatile mt_vec3_f32 sp28;
    volatile mt_vec3_f32 sp48;
    volatile mt_vec3_f32 sp58;
    f32 sp40;
    f32 sp3C;
    union { f32 value; unsigned char bytes[16]; } sp8;
    volatile mt_vec3_f32 sp68;
    union { f32 value; unsigned char bytes[32]; } sp18;
    union { f32 value; unsigned char bytes[12]; } sp38;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f11_3;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f8;
    f64 temp_f9;
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_cr0_eq;
    s32 temp_r8;
    s32 temp_ret;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r10_3;
    void *temp_r29;
    void *temp_r30;
    void *temp_r7;
    void *temp_r8_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    var_f1 = farg0;
    temp_r8 = *arg1;
    if (((s32) (temp_r8 & M2C_FIELD(&lbl_803946B4, s32 *, 4)) != (s32) M2C_FIELD(&lbl_803946B4, s32 *, 0)) && ((s32) (temp_r8 & M2C_FIELD(&lbl_803945C4, s32 *, 4)) != (s32) M2C_FIELD(&lbl_803945C4, s32 *, 0)) && ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s32 *, 0x58C) == 0)) {
        temp_ret = fn_8025C17C(arg2, ((f32 *)sp8.bytes), ((f32 *)sp18.bytes));
        var_f1 = M2C_BITWISE(f32, temp_ret);
        if ((temp_ret != 0) && !(M2C_FIELD(((f32 *)sp18.bytes), f32 *, 0x4) <= lbl_80320128) && !(M2C_FIELD(((f32 *)sp18.bytes), f32 *, 0x4) >= lbl_8032012C)) {
            temp_r7 = M2C_FIELD(arg0, void **, 0);
            var_f1 = sp18.value;
            temp_r9 = temp_r7 + 0x68;
            temp_f0 = var_f1 * M2C_FIELD(temp_r7, f32 *, 0x68);
            sp28.v0 = temp_f0;
            sp28.v1 = M2C_FIELD(((f32 *)sp18.bytes), f32 *, 0x4) * M2C_FIELD(temp_r9, f32 *, 4);
            sp28.v2 = M2C_FIELD(((f32 *)sp18.bytes), f32 *, 0x8) * M2C_FIELD(temp_r9, f32 *, 8);
            if (!((temp_f0 + sp28.v1 + sp28.v2) >= lbl_80320130)) {
                temp_r10 = temp_r7 + 0x38;
                temp_r9_2 = temp_r7 + 0x44;
                temp_f5 = -var_f1;
                temp_f2 = -M2C_FIELD(((f32 *)sp18.bytes), f32 *, 0x8);
                temp_f12 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) - M2C_FIELD(temp_r10, f32 *, 4);
                temp_f10 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) - M2C_FIELD(temp_r10, f32 *, 8);
                sp3C = temp_f12;
                temp_f11 = sp8.value - M2C_FIELD(temp_r7, f32 *, 0x38);
                sp40 = temp_f10;
                sp38.value = temp_f11;
                var_f1_2 = lbl_80320134;
                sp28.v2 = (temp_f10 * M2C_FIELD(temp_r9_2, f32 *, 0x20)) + ((temp_f11 * M2C_FIELD(temp_r9_2, f32 *, 0x18)) + (temp_f12 * M2C_FIELD(temp_r9_2, f32 *, 0x1C)));
                sp28.v0 = (temp_f10 * M2C_FIELD(temp_r9_2, f32 *, 8)) + ((temp_f11 * M2C_FIELD(temp_r7, f32 *, 0x44)) + (temp_f12 * M2C_FIELD(temp_r9_2, f32 *, 4)));
                sp28.v1 = (temp_f10 * M2C_FIELD(temp_r9_2, f32 *, 0x14)) + ((temp_f11 * M2C_FIELD(temp_r9_2, f32 *, 0xC)) + (temp_f12 * M2C_FIELD(temp_r9_2, f32 *, 0x10)));
                if (temp_f2 != var_f1_2) {
                    var_f1_2 = atan2f(temp_f5, temp_f2);
                } else {
                    temp_cr0_eq = temp_f5 == var_f1_2;
                    if (temp_cr0_eq == 0) {
                        if (temp_cr0_eq == 0) {
                            var_f1_2 = lbl_803DE500 * lbl_80320138;
                        } else {
                            var_f1_2 = -lbl_803DE500 * lbl_80320138;
                        }
                    }
                }
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x75C) = var_f1_2;
                temp_r29 = M2C_FIELD(arg0, void **, 0);
                temp_f31 = M2C_FIELD(temp_r29, f32 *, 0x75C);
                temp_r30 = temp_r29 + 0x44;
                temp_f30 = sinf(temp_f31);
                var_f1 = cosf(temp_f31);
                M2C_FIELD(temp_r29, f32 *, 0x44) = var_f1;
                M2C_FIELD(temp_r30, f32 *, 8) = (f32) -temp_f30;
                M2C_FIELD(temp_r30, f32 *, 4) = (f32) lbl_80320134;
                M2C_FIELD(temp_r30, f32 *, 0xC) = (f32) lbl_80320134;
                M2C_FIELD(temp_r30, f32 *, 0x20) = var_f1;
                M2C_FIELD(temp_r30, f32 *, 0x10) = (f32) lbl_8032013C;
                M2C_FIELD(temp_r30, f32 *, 0x18) = temp_f30;
                M2C_FIELD(temp_r30, f32 *, 0x1C) = (f32) lbl_80320134;
                M2C_FIELD(temp_r30, f32 *, 0x14) = (f32) lbl_80320134;
                temp_r10_2 = M2C_FIELD(arg0, void **, 0);
                temp_r9_3 = temp_r10_2 + 0x44;
                temp_r8_2 = temp_r10_2 + 0x38;
                temp_f8 = (sp28.v2 * M2C_FIELD(temp_r9_3, f32 *, 0x20)) + ((M2C_FIELD(temp_r9_3, f32 *, 8) * sp28.v0) + (sp28.v1 * M2C_FIELD(temp_r9_3, f32 *, 0x14)));
                temp_f6 = (sp28.v2 * M2C_FIELD(temp_r9_3, f32 *, 0x18)) + ((sp28.v0 * M2C_FIELD(temp_r10_2, f32 *, 0x44)) + (sp28.v1 * M2C_FIELD(temp_r9_3, f32 *, 0xC)));
                temp_f0 = (sp28.v2 * M2C_FIELD(temp_r9_3, f32 *, 0x1C)) + ((sp28.v0 * M2C_FIELD(temp_r9_3, f32 *, 4)) + (sp28.v1 * M2C_FIELD(temp_r9_3, f32 *, 0x10)));
                sp38.value = sp8.value - temp_f6;
                sp40 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) - temp_f8;
                sp3C = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) - temp_f0;
                sp48.v1 = temp_f0;
                sp48.v0 = temp_f6;
                sp48.v2 = temp_f8;
                M2C_FIELD(temp_r10_2, f32 *, 0x38) = sp38.value;
                M2C_FIELD(temp_r8_2, s32 *, 8) = (s32) M2C_FIELD(((f32 *)sp38.bytes), s32 *, 8);
                M2C_FIELD(temp_r8_2, s32 *, 4) = (s32) M2C_FIELD(((f32 *)sp38.bytes), s32 *, 4);
                temp_f11_3 = sp18.value * lbl_80320140;
                temp_f10_2 = M2C_FIELD(((f32 *)sp18.bytes), f32 *, 0x4) * lbl_80320140;
                sp58.v0 = temp_f11_3;
                temp_f9 = M2C_FIELD(((f32 *)sp18.bytes), f32 *, 0x8) * lbl_80320140;
                sp58.v1 = temp_f10_2;
                sp58.v2 = temp_f9;
                temp_r10_3 = M2C_FIELD(arg0, void **, 0);
                temp_r9_4 = temp_r10_3 + 0x38;
                sp68.v0 = M2C_FIELD(temp_r10_3, f32 *, 0x38) + temp_f11_3;
                sp68.v1 = M2C_FIELD(temp_r9_4, f32 *, 4) + temp_f10_2;
                sp68.v2 = M2C_FIELD(temp_r9_4, f32 *, 8) + temp_f9;
                M2C_FIELD(temp_r10_3, f32 *, 0x38) = sp68.v0;
                M2C_FIELD(temp_r9_4, f32 *, 8) = sp68.v2;
                M2C_FIELD(temp_r9_4, f32 *, 4) = sp68.v1;
                sp38.value = sp68.v0;
                sp3C = sp68.v1;
                sp40 = sp68.v2;
            }
        }
    }
    AvatarMovement__HandleWallImpact(M2C_FIELD(arg0, void **, 0x7C), arg1, arg2, var_f1);
}
