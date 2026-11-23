/* AvatarMovement__ShouldUpdateMovementState @ 0x800B51F4 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 Avatar__IsFlyingImpl(void *);
s32 AvatarMovement__ShouldUpdateMovementState(void *arg0, s32 arg1) {
    void *r10v;
    s32 ret;
    void *r9v;
    void *r11v;
    s16 v10;
    s16 v11;
    void *r9b;
    void *r3b;
    void *r11b;
    r10v = M2C_FIELD(arg0, void **, 0);
    ret = 0;
    r9v = M2C_FIELD(r10v, void **, 132);
    r11v = M2C_FIELD(r9v, void **, 244);
    v10 = M2C_FIELD(r11v, s16 *, 10);
    if (v10 == 769) {
        return ret;
    }
    if (Avatar__IsFlyingImpl(r10v) != 0) {
        r9b = M2C_FIELD(arg0, void **, 0);
        r3b = M2C_FIELD(r9b, void **, 132);
        r11b = M2C_FIELD(r3b, void **, 244);
        v11 = M2C_FIELD(r11b, s16 *, 10);
        if ((v11 & 0xFF00) != 256 || M2C_FIELD(M2C_FIELD(r3b, void **, 240), s16 *, 10) == 768 || M2C_FIELD(M2C_FIELD(r3b, void **, 240), s16 *, 10) == 769 || M2C_FIELD(M2C_FIELD(r3b, void **, 240), s16 *, 10) == 3072 || M2C_FIELD(M2C_FIELD(r3b, void **, 240), s16 *, 10) == 2304) {
            return 1;
        }
        if (v11 == 3072) {
            return 1;
        }
    }
    return arg1 != 0;
}
