/* vprintf @ 0x802CE3FC (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Printf__DispatchByConversion(void *, const char *, void *);
extern void *lbl_803DC9E8;

void vprintf(s8 *arg0, void *arg1) {
    Printf__DispatchByConversion(M2C_FIELD(lbl_803DC9E8, void **, 8), arg0, arg1);
}
