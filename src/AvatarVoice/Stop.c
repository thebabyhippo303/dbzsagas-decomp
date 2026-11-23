/* AvatarVoice__Stop @ 0x80250EB8 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sound__StopHandle(void *);
s32 StreamQueue__Stop(void *, f32);
int AvatarVoice__PollSound(int);
extern f32 lbl_80347D84 __attribute__((section(".data")));
extern s32 lbl_803DCC20;

s32 AvatarVoice__Stop(s32 arg0) {
    s32 temp_r31;

    temp_r31 = AvatarVoice__PollSound(arg0);
    Sound__StopHandle(arg0 + 8);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        StreamQueue__Stop(lbl_803DCC20 + 0xCC, lbl_80347D84);
    }
    return temp_r31;
}
