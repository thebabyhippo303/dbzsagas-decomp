/* Avatar__StopFireShield2 @ 0x80033188 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Avatar__StopFireShield2 @ 0x80033188 (0x4C). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Avatar__StopFireShield2Impl(void *avatar, int shield_id);

void Avatar__StopFireShield2(void *script, void *context) {
    void *avatar = Script__PopInt(script, context);
    int shield_id = (int)Script__PopInt(script, context);
    Avatar__StopFireShield2Impl(avatar, shield_id);
}
