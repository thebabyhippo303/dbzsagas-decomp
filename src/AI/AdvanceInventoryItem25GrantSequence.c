/* AI__AdvanceInventoryItem25GrantSequence @ 0x80066FA4 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__ComputeTargetingInfo(void *, void *);
void AI__SetState(void *, s32);
void AI__AdvanceInventoryItem25GrantSequence(void *arg0) {
    char sp8[32];
    s32 temp_r0;

    AI__ComputeTargetingInfo(&sp8, arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2C;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0x19;
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
