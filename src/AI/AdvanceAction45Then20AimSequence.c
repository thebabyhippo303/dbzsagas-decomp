/* AI__AdvanceAction45Then20AimSequence @ 0x8006BB34 (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__SetState(void *, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void Avatar__ClearPurpleSpiralEffects(void *);
void AI__ComputeTargetingInfo(void *, void *);
f32 AI__UpdateAimingIndicator(s32, s32, s32);
extern f32 lbl_8031ECD0 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void AI__AdvanceAction45Then20AimSequence(void *arg0) {
    f32 arg_load;
    union { mt_vec3_f32 v; u8 pad[32]; } sp8u;
    s32 temp_r0;
    f32 x, y, z;
    void *temp_r9;

    AI__ComputeTargetingInfo(&sp8u, arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        temp_r9 = M2C_FIELD(arg0, s32 *, 0x38C) + 0x10;
        x = M2C_FIELD(temp_r9, f32 *, 0x30);
        y = M2C_FIELD(temp_r9, f32 *, 0x34);
        z = M2C_FIELD(temp_r9, f32 *, 0x38);
        sp8u.v.v0 = x;
        sp8u.v.v1 = y;
        sp8u.v.v2 = z;
        AI__UpdateAimingIndicator((s32) arg0, (s32) &sp8u, 1);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x560) = 1;
        return;
    case 1:
        arg_load = lbl_8031ECD0;
        M2C_FIELD(arg0, s32 *, 0x380) = 0x14;
        if (AI__HasPrimaryTimerElapsed(arg0, arg_load) != 0) {
            AI__SetState(arg0, 2);
            return;
        }
        return;
    case 2:
        Avatar__ClearPurpleSpiralEffects(arg0);
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031ECD0) != 0) {
            AI__SetState(arg0, 3);
            M2C_FIELD(arg0, s32 *, 0x380) = 0x16;
            M2C_FIELD(arg0, s32 *, 0x560) = 0;
        }
        break;
    }
}
