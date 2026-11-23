/* Avatar__ClampPointToLocalZUpperBound @ 0x8008D440 (size: 0x244, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

float sqrtf(float);
extern f32 lbl_8031F798 __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
f32 Avatar__ClampPointToLocalZUpperBound(void *arg0, f32 farg0) {
    mt_vec3_f32 sp18;
    mt_vec3_f32 sp28;
    mt_vec3_f32 sp38;
    mt_vec3_f32 sp48;
    mt_vec3_f32 sp58;
    union { f32 value; unsigned char bytes[92]; } sp8;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f13;
    f32 temp_f1_2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    f32 temp_r0;
    f32 temp_r8;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r6;
    void *temp_r7;
    void *temp_r7_2;
    void *temp_r9;

    temp_f10 = M2C_FIELD(arg0, f32 *, 0x728);
    temp_r10 = arg0 + 0x728;
    temp_r9 = arg0 + 0x140;
    temp_r7 = arg0 + 0x14C;
    sp28.v0 = temp_f10 + M2C_FIELD(arg0, s32 *, 0x140);
    sp28.v1 = M2C_FIELD(temp_r10, f32 *, 4) + M2C_FIELD(temp_r9, f32 *, 4);
    sp28.v2 = M2C_FIELD(temp_r10, f32 *, 8) + M2C_FIELD(temp_r9, f32 *, 8);
    sp8.value = sp28.v0;
    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) = sp28.v1;
    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) = sp28.v2;
    sp28.v2 = M2C_FIELD(temp_r10, f32 *, 8) + M2C_FIELD(temp_r7, f32 *, 8);
    sp28.v0 = temp_f10 + M2C_FIELD(arg0, f32 *, 0x14C);
    sp28.v1 = M2C_FIELD(temp_r10, f32 *, 4) + M2C_FIELD(temp_r7, f32 *, 4);
    sp18 = sp28;
    if ((farg0 != sp18.v2) && (temp_f0 = M2C_FIELD(arg0, f32 *, 0x6A0), ((farg0 >= temp_f0) == 0))) {
        if (!(sp18.v2 < temp_f0)) {
            sp18.v2 = temp_f0;
            goto block_5;
        }
    } else {
        sp18.v2 = farg0;
block_5:
        temp_r6 = arg0 + 0x728;
        temp_r10_2 = arg0 + 0x14C;
        temp_f4 = sp8.value + sp18.v0;
        temp_f6 = sp18.v0 - sp8.value;
        temp_r7_2 = arg0 + 0x140;
        sp38.v0 = temp_f4 * lbl_8031F798;
        temp_f5 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) + sp18.v1;
        temp_f7 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) + sp18.v2;
        sp38.v2 = temp_f7 * lbl_8031F798;
        sp38.v1 = temp_f5 * lbl_8031F798;
        temp_f9 = sp18.v2 - M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8);
        temp_r0 = sp38.v2;
        temp_f8 = sp18.v1 - M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4);
        temp_r8 = sp38.v0;
        sp38.v0 = temp_f6 * lbl_8031F798;
        sp38.v1 = temp_f8 * lbl_8031F798;
        sp38.v2 = temp_f9 * lbl_8031F798;
        M2C_FIELD(arg0, f32 *, 0x728) = temp_r8;
        M2C_FIELD(temp_r6, f32 *, 8) = temp_r0;
        M2C_FIELD(temp_r6, f32 *, 4) = sp38.v1;
        *(mt_vec3_f32 *)((char *)arg0 + 0x14C) = sp38;
        sp48.v0 = temp_f4;
        sp48.v1 = temp_f5;
        sp48.v2 = temp_f7;
        sp58.v0 = temp_f6;
        sp58.v1 = temp_f8;
        sp58.v2 = temp_f9;
        sp38.v0 = -M2C_FIELD(arg0, f32 *, 0x14C);
        sp38.v1 = -M2C_FIELD(temp_r10_2, f32 *, 4);
        sp38.v2 = -M2C_FIELD(temp_r10_2, f32 *, 8);
        *(mt_vec3_f32 *)((char *)arg0 + 0x140) = sp38;
        temp_f10 = M2C_FIELD(arg0, f32 *, 0x14C);
        temp_f6 = M2C_FIELD(temp_r10_2, f32 *, 8);
        temp_f13 = M2C_FIELD(temp_r10_2, f32 *, 4);
        temp_f1_2 = temp_f10 * temp_f10;
        sp38.v0 = temp_f1_2;
        sp38.v2 = temp_f6 * temp_f6;
        sp38.v1 = temp_f13 * temp_f13;
        M2C_FIELD((arg0 + 0x13C), f32 *, 0x1C) = sqrtf(temp_f1_2 + sp38.v1 + sp38.v2);
    }
    return sp18.v2;
}
