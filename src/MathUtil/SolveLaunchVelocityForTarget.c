/* MathUtil__SolveLaunchVelocityForTarget @ 0x8017D950 (size: 0x2D8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 sqrtf(f32);
int MathUtil__BuildBallisticPath(int, int, int, int, int, f32);
extern f32 lbl_8033D054 __attribute__((section(".data")));
extern f32 lbl_8033D058 __attribute__((section(".data")));
extern f32 lbl_8033D05C __attribute__((section(".data")));
extern f32 lbl_8033D060 __attribute__((section(".data")));
extern f32 lbl_8033D064 __attribute__((section(".data")));
extern f32 lbl_8033D068 __attribute__((section(".data")));

/* WIP 46.7% (id ba639e18). Frame/prologue match; loop/tail structure decoded.
 * WALLS: (1) int/float coloring permuted (arg3->r28 not r29, farg0->f26 not f27,
 * f0/f1/f12 tmps swapped); (2) pA/pB ptr-copy coalesces (mr @174 missing even via
 * &sp18[0] distinct expr); (3) fmr f28/t31-load scheduling; (4) tail eval order.
 * FORMS THAT LAND: sp18 as f32[2] (8B); p8=&sp8 ptr for post-call loads (r30) with
 * direct sp8 stores; t29+t29 (not 2.0f*); }while(--vr30!=0) (addic.+bne); loop guard
 * `if (t15<t26) goto next;` (plain blt); arg4!=0-first (bne polarity); fabs !()<=. */
typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
s32 MathUtil__SolveLaunchVelocityForTarget(s32 *arg0, void *arg1, void *arg2, void *arg3, s32 arg4, s32 arg5, f32 farg0) {
    f32 sp18[2];
    mt_vec3_f32 sp8;
    mt_vec3_f32 *p8 = &sp8;
    f32 *pA;
    f32 *pB;
    f32 t12;
    f32 t13;
    f32 t0;
    f32 t12sq;
    f32 t11;
    f32 t28;
    f32 t31;
    f32 t312;
    f32 t132;
    f32 t1;
    f32 t12b;
    f32 t26;
    f32 t29;
    f32 t313;
    f32 t13b;
    f32 t14;
    f32 t15;
    f32 t16;
    f32 t02;
    f32 t17;
    f32 t112;
    f32 t134;
    f32 vf1;
    f32 vf25;
    f32 vf31;
    s32 vr30;
    s32 vr31;

    t12 = M2C_FIELD(arg3, f32 *, 0);
    t13 = M2C_FIELD(arg3, f32 *, 4);
    t0 = M2C_FIELD(arg3, f32 *, 8);
    t12sq = t12 * t12;
    sp8.v0 = t12sq;
    sp8.v1 = t13 * t13;
    sp8.v2 = t0 * t0;
    t11 = M2C_FIELD(arg1, f32 *, 4);
    t28 = sqrtf(t12sq + p8->v1 + p8->v2);
    t31 = M2C_FIELD(arg2, f32 *, 4);
    t312 = t31 - t11;
    t132 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg2, f32 *, 0);
    sp8.v1 = t11 - t31;
    sp8.v0 = t132;
    sp8.v2 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg2, f32 *, 8);
    t1 = p8->v2;
    t12b = sqrtf((t132 * t132) + (t1 * t1));
    t26 = lbl_8033D05C;
    t29 = (t312 * t312) + (t12b * t12b);
    t313 = -(t28 * t28 * t12b * t12b) - (t312 * farg0 * t12b * t12b);
    t13b = (t313 * t313) - (t29 * (farg0 * farg0 * t12b * t12b * t12b * t12b * lbl_8033D054 * lbl_8033D058));
    if (!(t13b >= t26)) {
        *arg0 = 0;
        return 0;
    }
    t14 = sqrtf(t13b);
    vr31 = 0;
    t13b = -t313;
    t12sq = t29 + t29;
    vf31 = lbl_8033D060;
    vr30 = 2;
    pA = sp18;
    sp18[0] = (t13b + t14) / t12sq;
    pA[1] = (t13b - t14) / t12sq;
    pB = &sp18[0];
    do {
        t15 = *(f32 *)((char *)pB + vr31);
        if (t15 < t26) {
            goto next;
        }
        t16 = sqrtf(t15);
        t02 = t12b / t16;
        *(f32 *)((char *)pB + vr31) = t16;
        if (!(t02 >= vf31)) {
            vf31 = t02;
            vf25 = t16;
        }
next:
        vr31 += 4;
    } while (--vr30 != 0);
    if (vf31 == lbl_8033D060) {
        *arg0 = vr30;
        return 0;
    }
    vf1 = vf25 / t28;
    if (!(vf1 <= lbl_8033D064)) {
        vf1 = lbl_8033D064;
    }
    t17 = t28 * sqrtf(lbl_8033D064 - (vf1 * vf1));
    M2C_FIELD(arg3, f32 *, 4) = t17;
    t112 = -t17;
    t134 = farg0 * vf31 * vf31 * lbl_8033D068;
    M2C_FIELD(arg3, f32 *, 4) = t112;
    if (!(__builtin_fabsf(((t112 * vf31) + M2C_FIELD(arg1, f32 *, 4) + t134) - M2C_FIELD(arg2, f32 *, 4)) <= __builtin_fabsf(((t17 * vf31) + M2C_FIELD(arg1, f32 *, 4) + t134) - M2C_FIELD(arg2, f32 *, 4)))) {
        M2C_FIELD(arg3, f32 *, 4) = t17;
    }
    if (arg4 != 0) {
        M2C_FIELD(arg3, f32 *, 8) = (f32) lbl_8033D05C;
        M2C_FIELD(arg3, f32 *, 0) = (f32) lbl_8033D05C;
        return 1;
    }
    return MathUtil__BuildBallisticPath((s32) arg0, (s32) arg1, (s32) arg2, (s32) arg3, arg5, farg0);
}
