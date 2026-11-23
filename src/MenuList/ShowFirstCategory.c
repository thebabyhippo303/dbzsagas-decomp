/* MenuList__ShowFirstCategory @ 0x80014E6C (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK MainMenu__RebuildEntriesForCategory(void *, M2C_UNK); /* extern */
M2C_UNK fn_8026D4A4(void *);                        /* extern */

void MenuList__ShowFirstCategory(void *arg0) {
    MainMenu__RebuildEntriesForCategory(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x1C4) = 0;
    fn_8026D4A4(arg0);
}
