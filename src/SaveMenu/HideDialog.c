/* SaveMenu__HideDialog @ 0x80050648 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
extern f32 lbl_80319CDC __attribute__((section(".data")));
void MenuPanel__Hide(void *, s32, f32);
typedef void (*HideFn)(void *);
void SaveMenu__HideDialog(void *arg0) {
    void *ops;
    MenuPanel__Hide((char *)arg0 + 252456, 0, lbl_80319CDC);
    ops = *(void **)((char *)arg0 + 412);
    ((HideFn)*(void **)((char *)ops + 876))((char *)arg0 + *(s16 *)((char *)ops + 872));
}
