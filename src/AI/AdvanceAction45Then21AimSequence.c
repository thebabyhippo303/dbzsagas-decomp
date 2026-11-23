/* AI__AdvanceAction45Then21AimSequence @ 0x8006BA0C (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
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
void AI__UpdateAimingIndicator(void *, void *, s32);
extern f32 lbl_8031ECCC __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceAction45Then21AimSequence(void *arg0) {
    f32 arg_load;
    union { s32 w[3]; u8 pad[32]; } sp8u;
    s32 temp_r0;
    s32 a, b, c;
    s32 *q;
    void *temp_r10;
    void *temp_r11;

    AI__ComputeTargetingInfo(&sp8u, arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        AI__SetState(arg0, 1);
        temp_r10 = M2C_FIELD(arg0, void **, 0x390);
        temp_r11 = temp_r10 + 0x38;
        a = M2C_FIELD(temp_r10, s32 *, 0x38);
        b = M2C_FIELD(temp_r11, s32 *, 4);
        c = M2C_FIELD(temp_r11, s32 *, 8);
        q = sp8u.w;
        q[0] = a;
        q[1] = b;
        q[2] = c;
        AI__UpdateAimingIndicator(arg0, q, 1);
        M2C_FIELD(arg0, s32 *, 0x560) = 1;
        return;
    case 1:
        arg_load = lbl_8031ECCC;
        M2C_FIELD(arg0, s32 *, 0x380) = 0x15;
        if (AI__HasPrimaryTimerElapsed(arg0, arg_load) != 0) {
            AI__SetState(arg0, 2);
            return;
        }
        return;
    case 2:
        Avatar__ClearPurpleSpiralEffects(arg0);
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031ECCC) != 0) {
            AI__SetState(arg0, 3);
            M2C_FIELD(arg0, s32 *, 0x380) = 0x16;
            M2C_FIELD(arg0, s32 *, 0x560) = 0;
        }
        break;
    }
}
