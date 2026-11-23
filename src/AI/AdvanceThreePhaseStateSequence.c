/* AI__AdvanceThreePhaseStateSequence @ 0x8006FFB0 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__SetState(void *, s32);
void AI__AdvanceThreePhaseStateSequence(void *arg0) {
    s32 temp_r0;
    void *temp_r9;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        temp_r9 = M2C_FIELD(arg0, void **, 0x57C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x2C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x28));
        AI__SetState(arg0, 1);
        return;
    case 1:
        AI__SetState(arg0, 2);
        return;
    case 2:
        AI__SetState(arg0, 3);
        return;
    }
}
