/* AI__AdvanceRangeGatedAimAction3Sequence @ 0x8006B528 (size: 0x164, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { s32 x, y, z; } V3i;
void AI__SetState(void *, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void Avatar__ClearPurpleSpiralEffects(void *);
void AI__ComputeTargetingInfo(void *, void *);
void AI__UpdateAimingIndicator(void *, void *, s32);
extern f32 lbl_8031EC94 __attribute__((section(".data")));
extern f32 lbl_8031EC98 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceRangeGatedAimAction3Sequence(char *self) {
    char info[32];
    V3i pos;
    f32 f31;
    char *tgt;

    AI__ComputeTargetingInfo(info, self);
    f31 = M2C_FIELD(self, f32 *, 0xE8);
    switch (M2C_FIELD(self, s32 *, 0x7C)) {
    case 0:
        tgt = M2C_FIELD(self, char **, 0x390);
        pos = *(V3i *) (tgt + 0x38);
        AI__UpdateAimingIndicator(self, &pos, 1);
        if ((!(f31 >= M2C_FIELD(info, f32 *, 0x18)) && M2C_FIELD(self, s32 *, 0xC8) != 7) || (!((f31 * f31) >= M2C_FIELD(info, f32 *, 0x18)) && M2C_FIELD(self, s32 *, 0xC8) == 7)) {
            M2C_FIELD(self, s32 *, 0x380) = 3;
            M2C_FIELD(self, f32 *, 0xDC) = lbl_803A35C0;
            AI__SetState(self, 1);
            return;
        }
        M2C_FIELD(self, s32 *, 0x380) = 0;
        AI__SetState(self, 3);
        return;
    case 1:
        if (AI__HasPrimaryTimerElapsed(self, lbl_8031EC94) != 0 || !(M2C_FIELD(info, f32 *, 0x18) >= lbl_8031EC98)) {
            AI__SetState(self, 2);
            return;
        }
        return;
    case 2:
        Avatar__ClearPurpleSpiralEffects(self);
        AI__SetState(self, 3);
        break;
    }
}
