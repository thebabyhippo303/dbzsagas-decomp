/* AnimeFootToHead__Update @ 0x800BA7EC (size: 0x280, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Camera__GetActorHeadOffset(void *, void *, void *);
f32 Camera__GetSmoothTransitionWeight(void *, ...);
M2C_UNK Camera__ComputeActorUpVector(s32, s32, s32);
extern f32 lbl_803215BC __attribute__((section(".data")));
extern f32 lbl_803215C0 __attribute__((section(".data")));
extern f32 lbl_803215C4 __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void AnimeFootToHead__Update(void *arg0) {
    union { f32 value; unsigned char bytes[96]; } sp8;
    union { f32 value; unsigned char bytes[16]; } sp68;
    volatile mt_vec3_f32 sp18;
    volatile mt_vec3_f32 sp28;
    volatile mt_vec3_f32 sp38;
    volatile mt_vec3_f32 sp48;
    volatile mt_vec3_f32 sp58;
    union { f32 value; unsigned char bytes[16]; } sp78;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f11_3;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f31;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 temp_f9_3;
    void *temp_r5;
    void *temp_r8;
    void *temp_r9;

    temp_r5 = M2C_FIELD(arg0, void **, 0x40);
    temp_r9 = temp_r5 + 0x38;
    sp8.value = M2C_FIELD(temp_r5, f32 *, 0x38);
    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) = (f32) M2C_FIELD(temp_r9, f32 *, 4);
    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) = (f32) M2C_FIELD(temp_r9, f32 *, 8);
    Camera__GetActorHeadOffset(&sp28, arg0, temp_r5);
    sp18.v0 = sp8.value + sp28.v0;
    sp48.v0 = lbl_803215BC;
    sp18.v1 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) + sp28.v1;
    sp18.v2 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) + sp28.v2;
    sp48.v2 = (f32) lbl_803215BC;
    sp48.v1 = (f32) lbl_803215C0;
    sp38.v1 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) + sp48.v1;
    sp38.v0 = sp8.value + sp48.v0;
    sp38.v2 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) + sp48.v2;
    Camera__ComputeActorUpVector((s32) ((f32 *)sp68.bytes), (s32) arg0, (s32) M2C_FIELD(arg0, void **, 0x40));
    temp_f31 = lbl_803215C4;
    temp_f9 = sp68.value * temp_f31;
    temp_f10 = M2C_FIELD(((f32 *)sp68.bytes), f32 *, 0x4) * temp_f31;
    temp_f11 = M2C_FIELD(((f32 *)sp68.bytes), f32 *, 0x8) * temp_f31;
    sp28.v0 = sp38.v0 + temp_f9;
    sp28.v1 = sp38.v1 + temp_f10;
    sp28.v2 = sp38.v2 + temp_f11;
    sp58.v0 = temp_f9;
    sp58.v1 = temp_f10;
    sp58.v2 = temp_f11;
    Camera__ComputeActorUpVector((s32) &sp58, (s32) arg0, (s32) M2C_FIELD(arg0, void **, 0x40));
    temp_f9_2 = sp58.v0 * temp_f31;
    temp_f11_2 = sp58.v1 * temp_f31;
    temp_f10_2 = sp58.v2 * temp_f31;
    temp_f13 = sp18.v0 + temp_f9_2;
    temp_f12 = sp18.v1 + temp_f11_2;
    sp38.v0 = temp_f13;
    temp_f0 = sp18.v2 + temp_f10_2;
    sp38.v1 = temp_f12;
    sp38.v2 = temp_f0;
    sp48.v0 = temp_f9_2;
    sp48.v1 = temp_f11_2;
    sp48.v2 = temp_f10_2;
    temp_f1 = Camera__GetSmoothTransitionWeight(arg0);
    temp_r8 = arg0 + 0xC;
    temp_f9_3 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8);
    temp_f11_3 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4);
    sp58.v0 = ((sp18.v0 - sp8.value) * temp_f1) + sp8.value;
    sp58.v1 = (f32) (((sp18.v1 - temp_f11_3) * temp_f1) + temp_f11_3);
    sp58.v2 = (f32) (((sp18.v2 - temp_f9_3) * temp_f1) + temp_f9_3);
    sp78.value = ((temp_f13 - sp28.v0) * temp_f1) + sp28.v0;
    sp48 = sp58;
    M2C_FIELD(((f32 *)sp78.bytes), f32 *, 8) = (f32) (((temp_f0 - sp28.v2) * temp_f1) + sp28.v2);
    M2C_FIELD(((f32 *)sp78.bytes), f32 *, 4) = (f32) (((temp_f12 - sp28.v1) * temp_f1) + sp28.v1);
    sp58.v0 = sp78.value;
    sp58.v2 = M2C_FIELD(((f32 *)sp78.bytes), f32 *, 8);
    sp58.v1 = M2C_FIELD(((f32 *)sp78.bytes), f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0) = sp78.value;
    M2C_FIELD(arg0, f32 *, 4) = (f32) sp58.v1;
    M2C_FIELD(arg0, f32 *, 0xC) = sp48.v0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) sp58.v2;
    M2C_FIELD(temp_r8, f32 *, 8) = (f32) sp48.v2;
    M2C_FIELD(temp_r8, f32 *, 4) = (f32) sp48.v1;
}
