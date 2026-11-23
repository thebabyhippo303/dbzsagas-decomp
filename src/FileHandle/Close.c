/* FileHandle__Close @ 0x801807B8 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void DvdFile__Close(s32);
int FileStream__TryClose(void *);
s32 FileHandle__Close(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0) == 1) {
        FileStream__TryClose(M2C_FIELD(arg0, void **, 4));
    } else {
        DvdFile__Close((s32) M2C_FIELD(arg0, void **, 4));
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return 1;
}
