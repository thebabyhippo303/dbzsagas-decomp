/* AI__ConstructPlayerBase @ 0x80075B18 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * AI__ConstructBase(void *);
extern M2C_UNK lbl_803316C8 __attribute__((section(".data")));

void *AI__ConstructPlayerBase(void *arg0) {
    AI__ConstructBase(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x57C) = &lbl_803316C8;
    return arg0;
}
