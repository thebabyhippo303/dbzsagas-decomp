/* Script__StartEnvActorAnimation @ 0x802B1A3C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Script__PopInt(void *, void *);
void *Script__PopActor(void *, void *, s32);
void CActor__PlayAnimationOnChannel(void *, s32, s32, s32, s32);
void Script__StartEnvActorAnimation(void *self, void *ctx) {
    s32 id = Script__PopInt(self, ctx);
    void *actor = Script__PopActor(self, ctx, 1);
    if (actor == NULL) {
        return;
    }
    CActor__PlayAnimationOnChannel(actor, id & 0xFFFF, 1, 0, 0);
}
