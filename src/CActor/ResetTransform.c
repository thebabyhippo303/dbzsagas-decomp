/* CActor__ResetTransform @ 0x801DC8E8 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef double f64;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32; typedef float f32; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define VF32 volatile f32 *
extern f32 lbl_80343B58 __attribute__((section(".data")));
extern f32 lbl_80343B5C __attribute__((section(".data")));
void CActor__ResetTransform(void *arg0) {
    f32 a;
    f32 b;
    void *p38;
    void *p44;
    void *p68;
    void *p74;
    void *vt;
    a = lbl_80343B58;
    p38 = arg0 + 0x38;
    p44 = arg0 + 0x44;
    M2C_FIELD(arg0, VF32, 0x38) = a;
    p68 = arg0 + 0x68;
    M2C_FIELD(p38, VF32, 8) = a;
    p74 = arg0 + 0x74;
    M2C_FIELD(p38, VF32, 4) = a;
    b = lbl_80343B5C;
    M2C_FIELD(arg0, VF32, 0x44) = b;
    M2C_FIELD(p44, VF32, 0x20) = b;
    M2C_FIELD(p44, VF32, 4) = a;
    M2C_FIELD(p44, VF32, 8) = a;
    M2C_FIELD(p44, VF32, 0xC) = a;
    M2C_FIELD(p44, VF32, 0x10) = b;
    M2C_FIELD(p44, VF32, 0x14) = a;
    M2C_FIELD(p44, VF32, 0x18) = a;
    M2C_FIELD(p44, VF32, 0x1C) = a;
    M2C_FIELD(arg0, VF32, 0x68) = a;
    M2C_FIELD(p68, VF32, 8) = a;
    M2C_FIELD(p68, VF32, 4) = a;
    M2C_FIELD(arg0, VF32, 0x74) = a;
    M2C_FIELD(p74, VF32, 8) = a;
    M2C_FIELD(p74, VF32, 4) = a;
    vt = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(vt, M2C_UNK (**)(void *), 0x94)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x90));
    vt = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(vt, M2C_UNK (**)(void *), 0xAC)((char *)arg0 + M2C_FIELD(vt, s16 *, 0xA8));
}
