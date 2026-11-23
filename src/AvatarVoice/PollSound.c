/* AvatarVoice__PollSound @ 0x80250E50 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
typedef struct { char pad[8]; s32 handle; s32 fC; } AvatarVoice;
s32 Sound__IsHandleVoiceActive(s32);
void Sound__StopHandle(void *);
s32 AvatarVoice__PollSound(AvatarVoice *self) {
    s32 h = self->handle;
    s32 ret;
    if (h != 0 && Sound__IsHandleVoiceActive(h) == 0) {
        Sound__StopHandle(&self->handle);
    }
    ret = 0;
    if (self->handle != 0 || self->fC != 0) {
        ret = 1;
    }
    return ret;
}
