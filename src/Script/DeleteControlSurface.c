/* Script__DeleteControlSurface @ 0x8002E290 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Script__DeleteControlSurface @ 0x8002E290 (0x54). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void ControlSurface__Destroy(void *simple, int flags);
extern void Script__PushInt(void *script, void *context, int value);

void Script__DeleteControlSurface(void *script, void *context) {
    void *simple = Script__PopInt(script, context);

    if (simple != 0) {
        ControlSurface__Destroy(simple, 3);
        simple = 0;
    }
    Script__PushInt(script, context, (int)simple);
}
