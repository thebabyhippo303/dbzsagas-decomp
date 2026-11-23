/* EnvSoundSource__CheckTriggerTime @ 0x8019A370 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Random__IntBelow(s32);
typedef s32 (*CheckFn)(void *);

s32 EnvSoundSource__CheckTriggerTime(void *self, u32 now) {
    void *o;
    CheckFn fn;
    void *base;
    s16 adj;
    s32 ok;
    u32 nx;
    s32 iv;

    o = M2C_FIELD(self, void **, 0x30);
    base = (char *) self + 0x2C;
    adj = M2C_FIELD(o, s16 *, 0x28);
    fn = M2C_FIELD(o, CheckFn *, 0x2C);
    if (fn((char *) base + adj) == 0) {
        return 0;
    }
    ok = 0;
    if (M2C_FIELD(self, s32 *, 0x54) != 0) {
        if (M2C_FIELD(self, s32 *, 0x58) != 0) {
            ok = 1;
        }
    }
    if (ok != 0) {
        nx = M2C_FIELD(self, u32 *, 0x5C);
        iv = M2C_FIELD(self, s32 *, 0x58);
        if (now > nx + (u32) (iv + iv)) {
            M2C_FIELD(self, u32 *, 0x5C) = now + Random__IntBelow(iv);
            return 0;
        }
    }
    return now >= M2C_FIELD(self, u32 *, 0x5C);
}
