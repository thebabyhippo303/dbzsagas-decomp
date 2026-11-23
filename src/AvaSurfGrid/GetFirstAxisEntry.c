/* AvaSurfGrid__GetFirstAxisEntry @ 0x8009D268 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int fn_80254BB8(void *, const char *, int);
void AvaSurfGrid__GetFirstAxisEntry(void *arg0, s8 *arg1) {
    fn_80254BB8(M2C_FIELD(arg0, void **, 0x14), arg1, -1);
}

