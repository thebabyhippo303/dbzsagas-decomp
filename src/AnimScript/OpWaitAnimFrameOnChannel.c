/* AnimScript__OpWaitAnimFrameOnChannel @ 0x80239520 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { char pad[32]; s32 w32; char pad2[20]; s32 f56; } Aux;
typedef struct {
    char pad[8];
    u8 b8;
    u8 b9;
    char pad2[18];
    Aux *aux;
    char pad3[16];
    s32 *vals;
    char pad4[4];
    s32 *table;
} Thread;
typedef struct { char pad[240]; Thread *threads[1]; } AnimState;

s32 Animation__IsFinished(void *);
s32 Animation__TryLoop(void *);
s32 Animation__GetFrame(void *);

s32 AnimScript__OpWaitAnimFrameOnChannel(AnimState *script, s32 idx, s32 *pc) {
    Thread *t = script->threads[idx];
    s32 waited = 0;
    void *anim;
    u32 target;
    s32 e;
    s32 i;
    s32 tmp;
    s32 ret;

    if (t != NULL && t->aux->f56 != 0) {
        waited = 1;
        *pc += 4;
    }
    i = (s8)t->b8;
    e = t->vals[i];
    target = (u32)t->vals[i - 1];
    anim = (char *)script + (e * 20 + 264);
    if (Animation__IsFinished(anim) != 0) {
        goto advance;
    }
    if (Animation__TryLoop(anim) == 0 || (u32)Animation__GetFrame(anim) < target) {
        goto rewind;
    }
advance:
    t->b8 = t->b8 - 2;
    ret = 0;
    goto end;
rewind:
    tmp = *pc - 4;
    *pc = tmp;
    if (waited != 0) {
        *pc = tmp - 4;
    }
    ret = 1;
end:
    return ret;
}
