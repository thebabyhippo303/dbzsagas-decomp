/* AI__UpdatePlayerAnchorReleaseSequence @ 0x80067AEC (size: 0x114, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__ComputeTargetingInfo(void *, void *);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__SetState(void *, s32);
void Avatar__SetAnchorActor(void *, void *);
s32 Game__GetConfiguredPlayerCount(void *);
void * Game__GetPlayerImpl(void *, int);
extern f32 lbl_8031EA58 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));
extern void *lbl_803DC3C0 __attribute__((section(".sdata")));

void AI__UpdatePlayerAnchorReleaseSequence(void *arg0) {
    s32 temp_r0;
    s32 var_r30;
    void *temp_r3;
    char sp8[32];

    AI__ComputeTargetingInfo(sp8, arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2C;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0x2B;
        var_r30 = 0;
        AI__SetState(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        while (var_r30 < Game__GetConfiguredPlayerCount(lbl_803DC3C0)) {
            temp_r3 = Game__GetPlayerImpl(lbl_803DC3C0, var_r30);
            if (*(s32 *)((char *)temp_r3 + 0x2BC) == *(s32 *)((char *)arg0 + 0x390)) {
                Avatar__SetAnchorActor(temp_r3, 0);
            }
            var_r30 += 1;
        }
        return;
    case 2:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EA58) != 0) {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x560);
            if (temp_r0 == 0) {
                M2C_FIELD(arg0, s32 *, 0x380) = temp_r0;
                AI__SetState(arg0, 3);
            }
        }
        return;
    }
}
