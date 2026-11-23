/* AvatarVoice__Construct @ 0x80250D04 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
extern f32 lbl_80347D80 __attribute__((section(".data")));
extern char lbl_80348590[];
typedef struct { s32 f0; f32 f4; s32 f8; s32 fC; s32 f10; s32 f14; void *vt; } AvatarVoice;
AvatarVoice *AvatarVoice__Construct(AvatarVoice *self, s32 arg1) {
    f32 value = lbl_80347D80;
    self->vt = lbl_80348590;
    self->f0 = arg1;
    self->f4 = value;
    self->f8 = 0;
    self->fC = 0;
    return self;
}