/* AI__AdvanceInventoryItem60GrantSequence @ 0x8006858C (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__SetState(void *, s32);
void AI__ComputeTargetingInfo(void *, void *);
typedef struct { s32 x, y, z; } V3;
extern V3 lbl_80391DC0 __attribute__((section(".data")));

void AI__AdvanceInventoryItem60GrantSequence(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[32]; } sp8;
    s32 temp_r0;

    AI__ComputeTargetingInfo(((M2C_UNK *)sp8.bytes), arg0);
    lbl_80391DC0 = *(V3 *)(M2C_FIELD(arg0, char **, 0x390) + 0x38);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2C;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0x3C;
        return;
    case 1:
        AI__SetState(arg0, 2);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        AI__SetState(arg0, 3);
        return;
    }
}
