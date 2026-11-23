/* AnimScript__OpJumpIfStackEqual @ 0x80238780 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
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
    unsigned char sp;
    unsigned char depth;
    char pad2[0x1C - 10];
    ThreadCode *code;
    char pad3[0x30 - 0x20];
    int *stack;
    char pad4[4];
    int *callstack;
} AnimThread;
typedef struct { char pad[240]; AnimThread *threads[1]; } AnimState;
int AnimScript__OpJumpIfStackEqual(AnimState *script, int threadIndex, int **pc) {
    AnimThread *thread;
    unsigned char sp;
    int sp2;
    int a;
    int b;
    int npc;
    thread = script->threads[threadIndex];
    if (thread != 0 && thread->code->skipsOperand != 0) {
        (*pc)++;
    }
    sp = thread->sp;
    sp2 = sp - 1;
    thread->sp = sp2;
    a = thread->stack[(signed char)sp];
    thread->sp = sp2 - 1;
    b = thread->stack[(signed char)sp2];
    if (b == 0) {
        if (script->threads[threadIndex] != 0) {
            npc = *(int *)((char *)script->threads[threadIndex]->code + 0x20) + a;
        } else {
            npc = a;
        }
        *pc = (int *)npc;
    }
    return 0;
}
