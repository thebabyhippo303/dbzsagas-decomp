/* AI__ChooseActionByTargetDistance @ 0x80075604 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__SetState(void *, s32);
void Avatar__ClearPurpleSpiralEffects(void *);
M2C_UNK AI__ComputeTargetingInfo(s32, s32);
extern f32 lbl_8031F01C __attribute__((section(".data")));
extern f32 lbl_8031F020 __attribute__((section(".data")));

void AI__ChooseActionByTargetDistance(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[32]; } sp8;
    void *temp_r11;
    void *temp_r11_2;

    AI__SetState(arg0, 0);
    Avatar__ClearPurpleSpiralEffects(arg0);
    AI__ComputeTargetingInfo((s32) ((M2C_UNK *)sp8.bytes), (s32) arg0);
    if (!(M2C_FIELD(((M2C_UNK *)sp8.bytes), f32 *, 0x18) >= M2C_FIELD(arg0, f32 *, 0x33C))) {
        temp_r11 = M2C_FIELD(arg0, void **, 0x57C);
        M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_8031F01C;
        M2C_FIELD(temp_r11, M2C_UNK (**)(void *), 0x84)(arg0 + M2C_FIELD(temp_r11, s16 *, 0x80));
        return;
    }
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x57C);
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_8031F020;
    M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *), 0x8C)(arg0 + M2C_FIELD(temp_r11_2, s16 *, 0x88));
}
