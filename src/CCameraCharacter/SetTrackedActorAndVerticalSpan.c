/* CCameraCharacter__SetTrackedActorAndVerticalSpan @ 0x800BCB4C (size: 0x150, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 CCameraCharacter__MovePlayerToTrackedActor(void *, ...);
void CCameraCharacter__PlayTrackedActorAnimation(void *);
extern f32 lbl_803216B8 __attribute__((section(".data")));
extern f32 lbl_803216BC __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
s32 CCameraCharacter__SetTrackedActorAndVerticalSpan(void *arg0, s32 arg1, f32 farg0) {
    volatile mt_vec3_f32 sp8;
    union { f32 value; unsigned char bytes[28]; } sp18;
    volatile mt_vec3_f32 sp28;
    f32 temp_f11;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_r10_2;
    void *temp_r10;
    u8 *temp_r11;
    char *temp_r29;
    char *temp_r9;

    temp_f31 = lbl_803216B8;
    M2C_FIELD(((f32 *)sp18.bytes), f32 *, 4) = (f32) lbl_803216BC;
    sp18.value = temp_f31;
    M2C_FIELD(((f32 *)sp18.bytes), f32 *, 8) = temp_f31;
    temp_r10 = arg1 + 0x38;
    M2C_FIELD(arg0, void **, 0x40) = arg1;
    M2C_FIELD(arg0, f32 *, 0x44) = farg0;
    temp_r29 = arg0 + 0xC;
    sp8.v0 = sp18.value + M2C_FIELD(arg1, f32 *, 0x38);
    temp_f11 = M2C_FIELD(temp_r10, f32 *, 8) + M2C_FIELD(((f32 *)sp18.bytes), f32 *, 8);
    sp8.v2 = temp_f11;
    sp8.v1 = (M2C_FIELD(temp_r10, f32 *, 4) + M2C_FIELD(((f32 *)sp18.bytes), f32 *, 4));
    temp_r10_2 = sp8.v2;
    M2C_FIELD(arg0, f32 *, 0xC) = sp8.v0;
    M2C_FIELD(temp_r29, f32 *, 8) = temp_r10_2;
    M2C_FIELD(temp_r29, f32 *, 4) = (f32) sp8.v1;
    temp_r11 = M2C_FIELD(arg0, void **, 0x40);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x34);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK, void *, f32, f32, f32, f32), 0x64)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x60), 0, temp_r9, temp_r10_2, M2C_FIELD(((f32 *)sp18.bytes), f32 *, 8), temp_f11, M2C_FIELD(((f32 *)sp18.bytes), f32 *, 4));
    sp28.v1 = temp_f31;
    temp_f30 = -farg0;
    sp28.v0 = temp_f31;
    sp8.v2 = M2C_FIELD(temp_r29, f32 *, 8) - temp_f30;
    sp8.v1 = M2C_FIELD(temp_r29, f32 *, 4) - temp_f31;
    sp8.v0 = M2C_FIELD(arg0, f32 *, 0xC) - temp_f31;
    sp28.v2 = temp_f30;
    *(mt_vec3_f32 *)((char *)arg0 + 0) = sp8;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, u32 *, 0x4C) = 0;
    CCameraCharacter__MovePlayerToTrackedActor(arg0);
    CCameraCharacter__PlayTrackedActorAnimation(arg0);
    return 1;
}
