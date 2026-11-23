/* SaveMenu__HideSlotSelectionContainer @ 0x80050574 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
extern f32 lbl_80319CD8 __attribute__((section(".data")));
void MenuPanel__Hide(void *, s32, f32);
s32 MenuPanel__IsShown(void *);
typedef void (*HideFn)(void *);
void SaveMenu__HideSlotSelectionContainer(void *arg0) {
    void *panel = (char *)arg0 + 100404;
    void *ops;
    if (MenuPanel__IsShown(panel)) {
        MenuPanel__Hide(panel, 0, lbl_80319CD8);
    }
    ops = *(void **)((char *)arg0 + 412);
    ((HideFn)*(void **)((char *)ops + 876))((char *)arg0 + *(s16 *)((char *)ops + 872));
}
