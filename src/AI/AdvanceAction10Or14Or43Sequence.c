/* AI__AdvanceAction10Or14Or43Sequence @ 0x80064BB4 (size: 0x1A8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16;
typedef int s32; typedef float f32; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__SetState(void *, s32);
s32 Rand__RangeInt(void *, s32, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__ComputeTargetingInfo(void *, void *);
void * Game__FindNearestEligibleAvatar(void *);
int fn_8023A97C(void *, int);
extern f32 lbl_8031E7C8 __attribute__((section(".data")));
extern f32 lbl_8031E7CC __attribute__((section(".data")));
extern f32 lbl_8031E7D0 __attribute__((section(".data")));
extern f32 lbl_8031E7D4 __attribute__((section(".data")));
extern f32 lbl_8031E7D8 __attribute__((section(".data")));
extern f32 lbl_8031E7DC __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));
extern s32 lbl_803DD634;

void AI__AdvanceAction10Or14Or43Sequence(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[32]; } sp8;
    void *temp_r3;
    register s32 temp_r0;
    f32 zf;
    f32 fa;
    f32 fb;
    f32 fc;
    f32 fd;

    AI__ComputeTargetingInfo(((M2C_UNK *)sp8.bytes), arg0);
    temp_r3 = Game__FindNearestEligibleAvatar(M2C_FIELD(arg0, void **, 0x390));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        return;
    case 1:
        if ((temp_r3 != NULL) && ((s16) fn_8023A97C(M2C_FIELD(temp_r3, void **, 0x84), 0) == 0x500) && ((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2B;
            AI__SetState(arg0, 3);
        } else if (((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 2)) {
            if (Rand__RangeInt(&lbl_803DD634, 0, 0x64) <= 0x4F) {
                zf = lbl_8031E7C8;
                M2C_FIELD(arg0, s32 *, 0x380) = 0xE;
                M2C_FIELD(arg0, f32 *, 0x174) = zf;
                M2C_FIELD(arg0, f32 *, 0x178) = zf;
                M2C_FIELD(arg0, f32 *, 0x17C) = zf;
                M2C_FIELD(arg0, f32 *, 0x180) = zf;
            } else {
                fa = lbl_8031E7CC;
                fb = lbl_8031E7D0;
                fc = lbl_8031E7D4;
                fd = lbl_8031E7D8;
                M2C_FIELD(arg0, s32 *, 0x380) = 0xA;
                M2C_FIELD(arg0, f32 *, 0x174) = fa;
                M2C_FIELD(arg0, f32 *, 0x178) = fb;
                M2C_FIELD(arg0, f32 *, 0x17C) = fc;
                M2C_FIELD(arg0, f32 *, 0x180) = fd;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x380) = 0xA;
        }
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        AI__SetState(arg0, 2);
        return;
    case 2:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031E7DC) != 0) {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x550);
            if (0 == temp_r0) {
                M2C_FIELD(arg0, s32 *, 0x380) = temp_r0;
                AI__SetState(arg0, 3);
            }
        }
        return;
    }
}
