/* Actor__FindTargetToLookAt @ 0x800314C8 (size: 0x24C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Script__PushInt(void *, s32, s32);
extern f32 lbl_80311770 __attribute__((section(".data")));
extern f32 lbl_80311774 __attribute__((section(".data")));
extern f32 lbl_80311778 __attribute__((section(".data")));
extern M2C_UNK lbl_803945E4 __attribute__((section(".data")));
extern M2C_UNK lbl_803946B4 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern void *lbl_803DCCB8 __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void Actor__FindTargetToLookAt(void *arg0, void *arg1) {
    volatile mt_vec3_f32 sp18;
    volatile mt_vec3_f32 sp28;
    volatile mt_vec3_f32 sp38;
    union { f32 value; unsigned char bytes[60]; } sp8;
    s32 flag;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 var_f9;
    s32 temp_r0;
    s32 temp_r9;
    s32 var_r31;
    void **var_r4;
    void *temp_r10_2;
    void *temp_r12;
    void *temp_r28;
    void *temp_r9_2;
    void *var_r25;

    temp_r12 = M2C_FIELD(arg0, void **, 0xC8);
    temp_r28 = temp_r12 + 0x38;
    var_f9 = lbl_80311770;
    var_r25 = NULL;
    sp18.v0 = M2C_FIELD(temp_r12, f32 *, 0x5c);
    var_r4 = NULL;
    flag = var_r4 != NULL;
    sp18.v1 = M2C_FIELD(temp_r12, f32 *, 0x60);
    sp18.v2 = M2C_FIELD(temp_r12, f32 *, 0x64);
loop_15:
    if (flag) {
        var_r4 = M2C_FIELD(var_r4, void ***, 0x14);
    } else {
        var_r4 = M2C_FIELD(lbl_803DCCB8, void ***, 0x2C);
    }
    if (flag) {
        temp_r10_2 = *var_r4;
        if ((temp_r10_2 != NULL) && ((temp_r9 = M2C_FIELD(temp_r10_2, s32 *, 0), (((s32) (M2C_FIELD(&lbl_803945E4, s32 *, 4) & temp_r9) == (s32) M2C_FIELD(&lbl_803945E4, s32 *, 0)) != 0)) || ((s32) (temp_r9 & M2C_FIELD(&lbl_803946B4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803946B4, s32 *, 0)))) {
            temp_r9_2 = temp_r10_2 + 0x38;
            var_r31 = 1;
            sp28.v0 = M2C_FIELD(temp_r10_2, f32 *, 0x38) - M2C_FIELD(temp_r12, f32 *, 0x38);
            sp28.v1 = M2C_FIELD(temp_r9_2, u32 *, 4) - M2C_FIELD(temp_r28, f32 *, 4);
            sp28.v2 = M2C_FIELD(temp_r9_2, f32 *, 8) - M2C_FIELD(temp_r28, f32 *, 8);
            sp8.value = sp28.v0;
            M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) = (f32) sp28.v1;
            M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) = (f32) sp28.v2;
            temp_f0 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4);
            temp_f12 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8);
            sp38.v1 = temp_f0 * temp_f0;
            temp_f13 = sp8.value * sp8.value;
            sp38.v2 = temp_f12 * temp_f12;
            sp38.v0 = temp_f13;
            temp_f13_2 = temp_f13 + sp38.v1 + sp38.v2;
            if ((s32) (M2C_FIELD(temp_r10_2, s32 *, 0) & M2C_FIELD(&lbl_803945E4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945E4, s32 *, 0)) {
                temp_r0 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
                if ((temp_r0 != 0x11) && (temp_r0 != 0x13) && ((s32) M2C_FIELD(temp_r12, s32 *, 0x7E4) == (s32) M2C_FIELD(temp_r10_2, s32 *, 0x7E4))) {
                    var_r31 = 0;
                }
            }
            if ((temp_r10_2 != temp_r12) && (var_r31 != 0)) {
                temp_f12_2 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4);
                if (!(__builtin_fabsf(temp_f12_2) >= lbl_80311774) && !(temp_f13_2 >= lbl_80311778) && !(temp_f13_2 >= var_f9)) {
                    temp_f13_3 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8);
                    var_r25 = temp_r10_2;
                    sp28.v1 = temp_f12_2 * temp_f12_2;
                    temp_f0_2 = sp8.value * sp8.value;
                    sp28.v2 = temp_f13_3 * temp_f13_3;
                    sp28.v0 = temp_f0_2;
                    var_f9 = temp_f0_2 + sp28.v1 + sp28.v2;
                }
            }
        }
        goto loop_15;
    }
    Script__PushInt(arg0, arg1, (s32) var_r25);
}
