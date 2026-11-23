/* ProcModel__Construct @ 0x8024CF94 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type *)((char *)(expr) + (offset)))
#define NULL 0
extern M2C_UNK lbl_803479B0 __attribute__((section(".rodata")));
void *ProcModel__Construct(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_803479B0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    return arg0;
}
