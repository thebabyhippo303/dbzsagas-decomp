/* SaveMenu__HideDialogAndShowSlotPanel @ 0x80050F6C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void MenuPanel__Hide(void *, s32, f32);
void MenuPanel__Show(void *, s32, f32);
extern f32 lbl_80319D74 __attribute__((section(".data")));

void SaveMenu__HideDialogAndShowSlotPanel(void *arg0) {
    MenuPanel__Hide((char *)arg0 + 0x3DA28, 0, lbl_80319D74);
    MenuPanel__Show((char *)arg0 + 0x18834, 0, lbl_80319D74);
}
