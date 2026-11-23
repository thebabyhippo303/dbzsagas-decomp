/* SoundChannel__SetEffectSend @ 0x80196F6C (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
typedef struct { char pad[0x14]; void *send; char pad2[4]; void *data; } SoundChannel;
extern f32 lbl_8033F6A0 __attribute__((section(".data")));
extern s32 SoundDriver__ApplyReverbSend(void *, s32, s32, s32);
s32 SoundChannel__SetEffectSend(SoundChannel *self, f32 left, f32 right) {
    f32 zero=lbl_8033F6A0;
    s32 leftOn = left > zero;
    s32 rightOn = right > zero;
    *(s32 *)((char *)self+0x20)=leftOn;
    *(s32 *)((char *)self+0x24)=rightOn;
    SoundDriver__ApplyReverbSend(*(void **)*(void **)self->send,
       *(s32 *)((char *)self->data+8), leftOn, rightOn);
    return 1;
}