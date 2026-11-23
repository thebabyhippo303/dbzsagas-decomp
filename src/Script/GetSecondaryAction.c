/* Script__GetSecondaryAction @ 0x802B161C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

s32 Script__PopInt(void *, s32);
void Script__PushInt(void *, s32, s32);

typedef struct ScriptObj {
    char pad[0xF0];
    void *table[1];
} ScriptObj;

void Script__GetSecondaryAction(void *script, s32 lane) {
    s32 idx = Script__PopInt(script, lane);
    void *entry = ((ScriptObj *)script)->table[idx];
    Script__PushInt(script, lane, M2C_FIELD(entry, s16 *, 10));
}
