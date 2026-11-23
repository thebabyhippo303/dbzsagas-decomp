/* AI__UpdateKneeCollisionSequence @ 0x80066820 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
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
int Avatar__GetAnimScriptVarInt(void *, void *, void *);
extern M2C_UNK lbl_8031E9BC __attribute__((section(".data")));
extern f32 lbl_8031E9CC __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceKneeCollisionSequence(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[32]; } sp8;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        AI__ComputeTargetingInfo(((M2C_UNK *)sp8.bytes), arg0);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2C;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0x10;
        temp_r0 = 1;
        AI__SetState(arg0, temp_r0);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 1:
        if (Avatar__GetAnimScriptVarInt(M2C_FIELD(arg0, void **, 0x390), &lbl_8031E9BC, (void *)1) != 0) {
            M2C_FIELD(arg0, s32 *, 0x380) = 0;
            AI__SetState(arg0, 2);
            M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        }
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031E9CC) != 0) {
            temp_r0 = 2;
            AI__SetState(arg0, temp_r0);
            M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
            return;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x54C) == 0) {
            AI__SetState(arg0, 3);
        }
        break;
    }
}
