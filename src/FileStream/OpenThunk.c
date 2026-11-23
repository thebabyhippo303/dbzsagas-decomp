/* FileStream__OpenThunk @ 0x8017F09C (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * FileStream__Open(const char *, int, int, int);
void FileStream__OpenThunk(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    FileStream__Open(arg0, arg1, arg2, arg3);
}
