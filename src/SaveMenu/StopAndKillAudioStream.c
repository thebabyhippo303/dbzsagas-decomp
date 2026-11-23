/* SaveMenu__StopAndKillAudioStream @ 0x80050E6C (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void StreamQueue__Kill(void *);
void fn_80267318(void *, int, float);
M2C_UNK StreamQueue__Stop(s32, f32);
extern f32 lbl_80319D64 __attribute__((section(".data")));
extern s32 lbl_803DCC20;

void SaveMenu__StopAndKillAudioStream(s32 arg0) {
    fn_80267318(arg0 + 0x3DA28, 0, lbl_80319D64);
    StreamQueue__Stop(lbl_803DCC20 + 0xCC, lbl_80319D64);
    StreamQueue__Kill(lbl_803DCC20 + 0xCC);
}
