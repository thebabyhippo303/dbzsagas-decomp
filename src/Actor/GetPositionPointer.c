/* Actor__GetPositionPointer @ 0x802AC494 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Actor__GetPositionPointer @ 0x802AC494 (0x44). ProDG -O2. */
extern void *Script__PopActor(void *script, void *context, int flag);
extern void Script__PushInt(void *script, void *context, int value);

void Actor__GetPositionPointer(void *script, void *context) {
    char *actor = (char *)Script__PopActor(script, context, 0);
    Script__PushInt(script, context, (int)(actor + 0x38));
}
