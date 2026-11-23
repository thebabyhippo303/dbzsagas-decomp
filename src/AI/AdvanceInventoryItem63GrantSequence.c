/* AI__AdvanceInventoryItem63GrantSequence @ 0x80068490 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { s32 x, y, z; } V3;
void AI__ComputeTargetingInfo(void *, void *);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__SetState(void *, s32);
extern f32 lbl_8031EA84 __attribute__((section(".data")));
extern M2C_UNK lbl_80391DC0 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceInventoryItem63GrantSequence(void *arg0) {
    s32 ld_38;
    union { M2C_UNK value; unsigned char bytes[32]; } sp8;
    void *temp_r11;

    AI__ComputeTargetingInfo(((M2C_UNK *)sp8.bytes), arg0);
    temp_r11 = M2C_FIELD(arg0, void **, 0x390);
    *(V3 *)&lbl_80391DC0 = *(V3 *)((char *)temp_r11 + 0x38);
    switch (M2C_FIELD(arg0, s32 *, 0x7C)) {                              /* irregular */
    case 0:
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2C;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0x3F;
        AI__SetState(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 2:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EA84) != 0) {
            ld_38 = M2C_FIELD(arg0, s32 *, 0x560);
            if (ld_38 == 0) {
                M2C_FIELD(arg0, s32 *, 0x380) = ld_38;
                AI__SetState(arg0, 3);
            }
        }
        return;
    }
}
