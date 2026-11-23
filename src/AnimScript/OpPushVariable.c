/* AnimScript__OpPushVariable @ 0x80237814 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { char pad[0x38]; int skipsOperand; } ThreadCode;
typedef struct {
    char pad[8];
    u8 b8;
    char pad2[0x1C - 9];
    ThreadCode *code;
    char pad3[44 - 32];
    u8 *table;
    f32 *vals;
    u8 *aux;
} AnimThread;
typedef struct { char pad[240]; AnimThread *threads[1]; } AnimState;
extern f32 *ScriptThread__GetVariableSlot(AnimThread *thread, int name);
s32 AnimScript__OpPushVariable(AnimState *state, s32 idx, s32 **pc) {
    AnimThread *th;
    s32 name;
    f32 *slot;
    s32 b8;
    th = state->threads[idx];
    if ((th != NULL) && (th->code->skipsOperand != 0)) {
        (*pc)++;
    }
    name = *(*pc)++;
    slot = ScriptThread__GetVariableSlot(th, name);
    b8 = th->b8 + 1;
    th->b8 = b8;
    th->vals[(s8)b8] = *slot;
    th->aux[(s8)th->b8] = th->table[name];
    return 0;
}
