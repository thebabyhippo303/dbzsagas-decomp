/* MessagePanel__SetIcon @ 0x80269FD4 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Candidate: MessagePanel__SetIcon @ 0x80269FD4 (0x48). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
#define NULL 0

void IconLabel__Set(void *, s32, s32, s32, s32);
void Sphere__SetAnchor(void *, f32, f32);
extern f32 lbl_80349E8C __attribute__((section(".data")));

void MessagePanel__SetIcon(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    IconLabel__Set(arg0 + 0x5F60, arg1, arg2, arg3, arg3);
    Sphere__SetAnchor(arg0 + 0x5F60, lbl_80349E8C, lbl_80349E8C);
}
