/* MenuInput__RemoveComboSequenceEntry @ 0x80101E54 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
u8 *ComboData__GetCurrentValuePointer(void *, s32, s32);
void MenuInput__ShiftComboSequenceEntries(void *, s32, s32, s32, s32);
extern void *lbl_803DC71C;
void MenuInput__RemoveComboSequenceEntry(void *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    u8 *vp = ComboData__GetCurrentValuePointer(lbl_803DC71C, arg1, arg2);
    if ((s8)vp[1] > 0) {
        MenuInput__RemoveComboSequenceEntry(arg0, arg1, (s8)vp[1], arg3);
    }
    if ((s8)vp[0] > 0) {
        MenuInput__RemoveComboSequenceEntry(arg0, arg1, (s8)vp[0], arg3);
    }
    MenuInput__ShiftComboSequenceEntries(arg0, arg1, arg2, (s8)*arg3, -1);
    *arg3 -= 1;
}
