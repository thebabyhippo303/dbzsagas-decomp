/* FileHandle__GetSize @ 0x801805DC (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 DvdFile__GetSize(void *);
int FileStream__GetSize(void *);
s32 FileHandle__GetSize(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0) == 1)
        return FileStream__GetSize(M2C_FIELD(arg0, void **, 4));
    return DvdFile__GetSize(M2C_FIELD(arg0, void **, 4));
}
