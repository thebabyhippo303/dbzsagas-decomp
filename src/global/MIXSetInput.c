/* MIXSetInput @ 0x802D6DC4 (size: 0x28, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

typedef struct {
    char pad[4];
    u32 f4;
    u32 f8;
    char pad2[84];
} MIXEntry;

extern MIXEntry lbl_803D89C0[] __attribute__((section(".data")));

void MIXSetInput(void *voice, u32 input) {
    volatile MIXEntry *e = &lbl_803D89C0[*(s32 *)((char *)voice + 24)];
    e->f8 = input;
    e->f4 |= 0x10000000;
}
