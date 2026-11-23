/* Script__PushString @ 0x8023A2A4 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct {
    char pad[8];
    u8 b8;
    char pad2[48 - 9];
    s32 *values;
    u8 *kinds;
} ScriptThread;

typedef struct {
    char pad[240];
    ScriptThread *lanes[1];
} ScriptVM;

void Script__PushString(ScriptVM *vm, s32 lane, s32 value, s32 c4, s32 c5) {
    ScriptThread *t = vm->lanes[lane];
    u8 *kp;
    u8 b;
    u8 b2;
    register s32 kind;
    if (c4 != 0) {
        b = t->b8;
        kind = 4;
    } else if (c5 != 0) {
        b = t->b8;
        kind = 5;
    } else {
        b = t->b8;
        kind = 3;
    }
    kp = t->kinds;
    {
        s32 nb = b + 1;
        t->b8 = (u8)nb;
        kp[(s32)(s8)nb] = kind;
    }
    b2 = t->b8;
    t->values[(s32)(s8)b2] = value;
}
