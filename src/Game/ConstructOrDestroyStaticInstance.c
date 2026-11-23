/* Game__ConstructOrDestroyStaticInstance @ 0x80008078 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK Game__Construct(M2C_UNK *);                 /* extern */
M2C_UNK Game__Destroy(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK lbl_8038AAC0 __attribute__((section(".data")));

void Game__ConstructOrDestroyStaticInstance(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            Game__Construct(&lbl_8038AAC0);
            return;
        }
        Game__Destroy(&lbl_8038AAC0, 2);
    }
}
