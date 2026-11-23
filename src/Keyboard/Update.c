/* Keyboard__Update @ 0x801D638C (size: 0x178, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Keyboard__ClearAxis(void *, void *, s32, s32);
void Keyboard__ClearButton(void *, s32, s32);
void Keyboard__Update(void *arg0) {
    void *temp_r29;

    temp_r29 = arg0 + 0x200;
    Keyboard__ClearAxis(arg0, arg0 + 0xA0, M2C_FIELD(temp_r29, s32 *, 0x10), M2C_FIELD(temp_r29, s32 *, 0x14));
    Keyboard__ClearAxis(arg0, arg0 + 0x9C, M2C_FIELD(temp_r29, s32 *, 0x1C), M2C_FIELD(temp_r29, s32 *, 0x18));
    Keyboard__ClearAxis(arg0, arg0 + 0xA8, M2C_FIELD(temp_r29, s32 *, 0x24), M2C_FIELD(temp_r29, s32 *, 0x28));
    Keyboard__ClearAxis(arg0, arg0 + 0xA4, M2C_FIELD(temp_r29, s32 *, 0x30), M2C_FIELD(temp_r29, s32 *, 0x2C));
    Keyboard__ClearButton(arg0, 2, M2C_FIELD(temp_r29, s32 *, 4));
    Keyboard__ClearButton(arg0, 4, M2C_FIELD(arg0, s32 *, 0x200));
    Keyboard__ClearButton(arg0, 1, M2C_FIELD(temp_r29, s32 *, 8));
    Keyboard__ClearButton(arg0, 3, M2C_FIELD(temp_r29, s32 *, 0xC));
    Keyboard__ClearButton(arg0, 5, M2C_FIELD(temp_r29, s32 *, 0x44));
    Keyboard__ClearButton(arg0, 6, M2C_FIELD(temp_r29, s32 *, 0x38));
    Keyboard__ClearButton(arg0, 7, M2C_FIELD(temp_r29, s32 *, 0x3C));
    Keyboard__ClearButton(arg0, 8, M2C_FIELD(temp_r29, s32 *, 0x40));
    Keyboard__ClearButton(arg0, 9, M2C_FIELD(temp_r29, s32 *, 0x48));
    Keyboard__ClearButton(arg0, 0xA, M2C_FIELD(temp_r29, s32 *, 0x4C));
    Keyboard__ClearButton(arg0, 0xB, M2C_FIELD(temp_r29, s32 *, 0x50));
    Keyboard__ClearButton(arg0, 0xC, M2C_FIELD(temp_r29, s32 *, 0x54));
    Keyboard__ClearButton(arg0, 0xF, M2C_FIELD(temp_r29, s32 *, 0x20));
    Keyboard__ClearButton(arg0, 0x10, M2C_FIELD(temp_r29, s32 *, 0x34));
    Keyboard__ClearButton(arg0, 0xD, M2C_FIELD(temp_r29, s32 *, 0x58));
    Keyboard__ClearButton(arg0, 0xE, M2C_FIELD(temp_r29, s32 *, 0x5C));
}
