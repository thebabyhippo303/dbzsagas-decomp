/* MenuPanel__SelectFirstOption @ 0x8026847C (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EzNode__GetFirstChild(void *);
void MenuPanel__SelectFirstOption(void *arg0) {
    void *temp_r29;
    void *temp_r9;

    temp_r29 = arg0 + 0xADE4;
    if (EzNode__GetFirstChild(temp_r29) != 0) {
        M2C_FIELD(arg0, s32 *, 0xADFC) = (s32) M2C_FIELD(arg0, s32 *, 0xADF8);
        M2C_FIELD(arg0, s32 *, 0xADF8) = EzNode__GetFirstChild(temp_r29);
        temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x534)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x530));
    }
}
