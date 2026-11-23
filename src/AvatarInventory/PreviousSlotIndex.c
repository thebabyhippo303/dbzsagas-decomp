/* AvatarInventory__PreviousSlotIndex @ 0x8009B670 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AvatarInventory__PreviousSlotIndex(void *self, s32 index) {
    if (!index) {
        index = 120;
    } else {
        index -= 1;
    }
    return index;
}
