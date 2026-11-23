/* AvatarVoice__PlayStream @ 0x80251148 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void StreamQueue__EnqueueDialogEx(s32, s32, s32, s32, s32, s32, f32, f32);
extern M2C_UNK AvatarVoice__BeginStream __attribute__((section(".data")));
extern M2C_UNK AvatarVoice__EndStream __attribute__((section(".data")));
extern f32 lbl_80347D90 __attribute__((section(".data")));
extern s32 lbl_803DCC20;

void AvatarVoice__PlayStream(void *arg0, s32 arg1, f32 farg0, f32 farg1) {
    s32 queue = lbl_803DCC20;
    s32 begin = (s32)&AvatarVoice__BeginStream;
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    StreamQueue__EnqueueDialogEx(queue + 0xCC, arg1, begin, (s32)&AvatarVoice__EndStream, (s32)arg0, 0, lbl_80347D90, farg1);
}
