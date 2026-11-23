/* Script__PauseMusic @ 0x8002E2E4 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 StreamQueue__SetPaused(void *, u32);
void * Script__PopInt(void *, void *);
extern void *lbl_803DCC20;

void Script__SetMusicEnabled(void *arg0, void *arg1) {
    u32 var_r4;

    var_r4 = Script__PopInt(arg0, arg1) != NULL;
    StreamQueue__SetPaused(lbl_803DCC20, var_r4);
}
