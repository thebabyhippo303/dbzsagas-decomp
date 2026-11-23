/* AnimScript__OpJump @ 0x80235AA4 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[0x38]; int skipsOperand; } ThreadCode;
typedef struct {
    char pad[8];
    unsigned char sp;
    char pad2[0x1C - 9];
    ThreadCode *code;
    char pad3[0x30 - 0x20];
    int *stack;
} AnimThread;
typedef struct { char pad[240]; AnimThread *threads[1]; } AnimState;

int AnimScript__OpJump(AnimState *script, int threadIndex, float **pc) {
    AnimThread *thread;
    unsigned char sp;
    int val;
    int npc;
    thread = script->threads[threadIndex];
    if (thread != 0 && thread->code->skipsOperand != 0) {
        (*pc)++;
    }
    sp = thread->sp;
    thread->sp = sp - 1;
    val = thread->stack[(signed char)sp];
    if (script->threads[threadIndex] != 0) {
        npc = *(int *)((char *)script->threads[threadIndex]->code + 0x20) + val;
    } else {
        npc = val;
    }
    *pc = (float *)npc;
    return 0;
}
