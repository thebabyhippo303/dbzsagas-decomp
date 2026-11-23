/* Avatar__StopAnimationChannelIfId @ 0x80092F24 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void *AnimationTable__GetById(void *, int);
void Instance__StopAnimationChannel(void *, s32);

void Avatar__StopAnimationChannelIfId(void *self, s32 id, s32 arg2) {
    void *controller;
    void *animationState;
    void *table;
    s32 current;
    void *requested;
    if (id < 0) goto stop;
    controller = M2C_FIELD(self, void **, 0x84);
    table = M2C_FIELD(controller, void **, 0x168);
    animationState = (char *)controller + 264;
    requested = AnimationTable__GetById(table, id);
    current = M2C_FIELD(animationState, s32 *, 0xC);
    if (current != (s32)requested) return;
stop:
    Instance__StopAnimationChannel(M2C_FIELD(self, void **, 0x84), arg2);
}
