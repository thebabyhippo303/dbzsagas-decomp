/* AvatarVoice__BeginStream @ 0x80250F48 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 StreamQueue__Volume(void *, f32);
f32 AvatarVoice__ScaleVolume(f32);
extern s32 lbl_803DCC20;

void AvatarVoice__BeginStream(void *arg0) {
    void *temp_r30;

    if (arg0 != NULL) {
        temp_r30 = (void *) lbl_803DCC20;
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
        temp_r30 = (void *) ((char *) temp_r30 + 0xCC);
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(temp_r30, f32 *, 0x48);
        StreamQueue__Volume(temp_r30, AvatarVoice__ScaleVolume(M2C_FIELD(arg0, f32 *, 0x10)));
    }
}
