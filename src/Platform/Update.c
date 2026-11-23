/* Platform__Update @ 0x801D6150 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Platform__RequestQuit(void *);
M2C_UNK PadManager__CaptureStatus(s32);
M2C_UNK Audio__Update(s32);
M2C_UNK fn_80253004(s32);
M2C_UNK PadManager__ApplyOutputs(s32);
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));
extern void *lbl_803DC364;

void Platform__Update(void *arg0) {
    s32 temp_r30;
    void *temp_r9;

    temp_r30 = arg0 + 0x480;
    PadManager__CaptureStatus(temp_r30);
    Audio__Update(arg0 + 0x500);
    temp_r9 = M2C_FIELD(lbl_803DC364, void **, 0xA8);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x34)(lbl_803DC364 + M2C_FIELD(temp_r9, s16 *, 0x30)) == 0) {
        Platform__RequestQuit(arg0);
    }
    fn_80253004((s32) &lbl_803B1E84);
    PadManager__ApplyOutputs(temp_r30);
}
