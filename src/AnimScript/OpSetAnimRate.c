/* AnimScript__OpSetAnimRate @ 0x80239E84 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

typedef struct { char pad[0x38]; int skipsOperand; } ThreadCode;
typedef struct {
    char pad[8];
    u8 sp;
    char pad2[0x1C - 9];
    ThreadCode *code;
    char pad3[0x30 - 0x20];
    float *stack;
} AnimThread;
typedef struct { char pad[240]; AnimThread *threads[1]; } AnimState;

void Animation__SetRate(void *, f32);

s32 AnimScript__OpSetAnimRate(AnimState *script, s32 threadIndex, float **pc) {
    AnimThread *thread;
    u8 sp;
    f32 rate;

    thread = script->threads[threadIndex];
    if (thread != NULL) {
        if (thread->code->skipsOperand != 0)
            (*pc)++;
        sp = thread->sp;
        thread->sp = sp - 1;
        rate = thread->stack[(s8)sp];
    } else {
        rate = **pc;
        (*pc)++;
    }
    Animation__SetRate((char *)script + 0x108, rate);
    return 0;
}
