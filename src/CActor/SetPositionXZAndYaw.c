/* CActor__SetPositionXZAndYaw @ 0x801DC9A8 (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

float cosf(float);
float sinf(float);
extern f32 lbl_80343B60 __attribute__((section(".data")));
extern f32 lbl_80343B64 __attribute__((section(".data")));

void CActor__SetPositionXZAndYaw(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    f32 zero;
    f32 yaw;
    f32 s;
    f32 c;
    f32 b;
    void *p38;
    void *p44;
    void *p68;
    void *p74;
    void *vt;

    zero = lbl_80343B60;
    yaw = farg2;
    p38 = arg0 + 0x38;
    M2C_FIELD(arg0, f32 *, 0x38) = farg0;
    M2C_FIELD(p38, f32 *, 8) = farg1;
    M2C_FIELD(p38, f32 *, 4) = zero;
    p44 = arg0 + 0x44;
    s = sinf(yaw);
    c = cosf(yaw);
    M2C_FIELD(arg0, f32 *, 0x44) = c;
    M2C_FIELD(p44, f32 *, 8) = -s;
    M2C_FIELD(p44, f32 *, 4) = zero;
    p68 = arg0 + 0x68;
    M2C_FIELD(p44, f32 *, 12) = zero;
    p74 = arg0 + 0x74;
    b = lbl_80343B64;
    M2C_FIELD(p44, f32 *, 32) = c;
    M2C_FIELD(p44, f32 *, 16) = b;
    M2C_FIELD(p44, f32 *, 24) = s;
    M2C_FIELD(p44, f32 *, 28) = zero;
    M2C_FIELD(p44, f32 *, 20) = zero;
    M2C_FIELD(arg0, f32 *, 104) = zero;
    M2C_FIELD(p68, f32 *, 4) = zero;
    M2C_FIELD(p68, f32 *, 8) = zero;
    M2C_FIELD(arg0, f32 *, 116) = zero;
    M2C_FIELD(p74, f32 *, 4) = zero;
    M2C_FIELD(p74, f32 *, 8) = zero;
    vt = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(vt, M2C_UNK (**)(void *), 0x94)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x90));
    vt = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(vt, M2C_UNK (**)(void *), 0xAC)((char *)arg0 + M2C_FIELD(vt, s16 *, 0xA8));
}
