/* Script__StopMusic @ 0x8002E31C (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 StreamQueue__Stop(void *, f32);
void StreamQueue__ClearPending(void *);
extern f32 lbl_8031167C __attribute__((section(".data")));
extern void *lbl_803DCC20;

void Script__FadeOutAndClearMusicQueue(void) {
    StreamQueue__Stop(lbl_803DCC20, lbl_8031167C);
    StreamQueue__ClearPending(lbl_803DCC20);
}
