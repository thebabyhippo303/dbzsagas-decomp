/* AI__AdvanceInventoryItem46GrantSequence @ 0x800681C4 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__SetState(void *, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__ComputeTargetingInfo(void *, void *);
extern f32 lbl_8031EA78 __attribute__((section(".data")));
typedef struct { s32 x, y, z; } V3;
extern V3 lbl_80391DC0 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceInventoryItem46GrantSequence(u8 *arg0) {
    union { M2C_UNK value; unsigned char bytes[32]; } sp8;
    char *p_380;
    s32 temp_r0;
    s32 temp_r0_2;

    AI__ComputeTargetingInfo(((M2C_UNK *)sp8.bytes), arg0);
    p_380 = (char *)arg0 + 0x380;
    lbl_80391DC0 = *(V3 *)(M2C_FIELD(p_380, char **, 0x10) + 0x38);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(p_380, s32 *, 0x0) = 0x2D;
        AI__SetState(arg0, 1);
        return;
    case 1:
        M2C_FIELD(p_380, s32 *, 0x0) = 0x2C;
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0x2E;
        AI__SetState(arg0, 2);
        return;
    case 2:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EA78) != 0) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x560);
            if (temp_r0_2 == 0) {
                M2C_FIELD(p_380, s32 *, 0x0) = temp_r0_2;
                AI__SetState(arg0, 3);
            }
        }
        return;
    }
}
