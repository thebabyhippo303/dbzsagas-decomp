/* Camera__SmoothFollowPosition @ 0x800C5664 (size: 0x2BC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern f32 lbl_8032193C __attribute__((section(".data")));

void Camera__SmoothFollowPosition(void *arg0, void *arg1, s32 arg2) {
    f32 v0[4];
    f32 v1[4];
    f32 v2[4];
    f32 v3[4];
    f32 v4[4];
    f32 *b584;
    f32 cur0;
    f32 f6;
    s32 eq;

    if (arg2 == 0) {
        goto else_arg2;
    }
    cur0 = M2C_FIELD(arg0, f32 *, 584);
    eq = 0;
    b584 = (f32 *)((char *)arg0 + 584);
    f6 = cur0;
    if (M2C_FIELD(arg1, f32 *, 0) != cur0) {
        goto main_body;
    }
    if (M2C_FIELD(arg1, f32 *, 4) != M2C_FIELD(b584, f32 *, 4)) {
        goto main_body;
    }
    if (M2C_FIELD(arg1, f32 *, 8) != M2C_FIELD(b584, f32 *, 8)) {
        goto end_fn;
    }
main_body:
    v0[0] = f6 - M2C_FIELD(arg0, f32 *, 560);
    v0[1] = M2C_FIELD(b584, f32 *, 4) - M2C_FIELD(arg0, f32 *, 564);
    v0[2] = M2C_FIELD(b584, f32 *, 8) - M2C_FIELD(arg0, f32 *, 568);
    ((s32 *)v1)[0] = ((s32 *)v0)[0];
    ((s32 *)v1)[1] = ((s32 *)v0)[1];
    ((s32 *)v1)[2] = ((s32 *)v0)[2];
    v0[0] = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 560);
    v0[1] = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg0, f32 *, 564);
    v0[2] = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg0, f32 *, 568);
    ((s32 *)v2)[0] = ((s32 *)v0)[0];
    ((s32 *)v2)[1] = ((s32 *)v0)[1];
    ((s32 *)v2)[2] = ((s32 *)v0)[2];
    v3[0] = v1[0] * v2[0];
    v3[1] = v1[1] * v2[1];
    v3[2] = v1[2] * v2[2];
    if ((v3[0] + v3[1] + v3[2]) > lbl_8032193C) {
        goto end_fn;
    }
    v0[0] = v1[0] - v2[0];
    v0[2] = v1[2] - v2[2];
    v0[1] = v1[1] - v2[1];
    v4[0] = v0[0] * v0[0];
    v4[1] = v0[1] * v0[1];
    v4[2] = v0[2] * v0[2];
    cur0 = v4[0] + v4[1] + v4[2];
    M2C_FIELD(arg0, s32 *, 616) = 9;
    if (cur0 >= M2C_FIELD(arg0, f32 *, 608)) {
        goto end_fn;
    }
    M2C_FIELD(arg0, f32 *, 608) = cur0;
    v0[0] = M2C_FIELD(arg1, f32 *, 0) - f6;
    v0[2] = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(b584, f32 *, 8);
    v0[1] = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(b584, f32 *, 4);
    ((f32 *)((char *)arg0 + 596))[0] = v0[0];
    ((f32 *)((char *)arg0 + 596))[1] = v0[1];
    ((f32 *)((char *)arg0 + 596))[2] = v0[2];
    goto end_fn;
else_arg2:
    v1[1] = M2C_FIELD(arg0, f32 *, 564) - M2C_FIELD(arg1, f32 *, 4);
    v0[0] = M2C_FIELD(arg0, f32 *, 560) - M2C_FIELD(arg1, f32 *, 0);
    v1[2] = M2C_FIELD(arg0, f32 *, 568) - M2C_FIELD(arg1, f32 *, 8);
    v1[0] = v0[0];
    v2[0] = v1[0] * v1[0];
    v2[1] = v1[1] * v1[1];
    v2[2] = v1[2] * v1[2];
    cur0 = v2[0] + v2[1] + v2[2];
    if (cur0 >= M2C_FIELD(arg0, f32 *, 612)) {
        goto end_fn;
    }
    ((f32 *)((char *)arg0 + 572))[0] = v1[0];
    ((f32 *)((char *)arg0 + 572))[1] = v1[1];
    ((f32 *)((char *)arg0 + 572))[2] = v1[2];
    M2C_FIELD(arg0, f32 *, 612) = cur0;
    M2C_FIELD(arg0, f32 *, 584) = M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 592) = M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 588) = M2C_FIELD(arg1, f32 *, 4);
end_fn:
    return;
}
