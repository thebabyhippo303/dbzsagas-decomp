/* AvaSurfGrid__Destroy @ 0x8009D184 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80254DF8(void *, unsigned int);
void AvaSurfGrid__ClearDimensions(void *);    /* extern */
extern M2C_UNK lbl_80333700 __attribute__((section(".data")));

void AvaSurfGrid__Destroy(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &lbl_80333700;
    AvaSurfGrid__ClearDimensions(arg0);
    fn_80254DF8(arg0, arg1);
}
