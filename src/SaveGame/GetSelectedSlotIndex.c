/* SaveGame__GetSelectedSlotIndex @ 0x80050350 (size: 0x10, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern void *lbl_803DC368;

s32 SaveGame__GetSelectedSlotIndex(void) {
    return M2C_FIELD(M2C_FIELD(lbl_803DC368, void **, 0x5388), s32 *, 0x48);
}
