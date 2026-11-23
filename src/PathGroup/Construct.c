/* PathGroup__Construct @ 0x801FD324 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

char * Mem__NewArray(s32);
char * strcpy(char *, const char *);
int strlen(const char *);
void *PathGroup__Construct(void *arg0, s8 *arg1, s32 arg2, s32 arg3) {
    s8 *temp_r3;

    temp_r3 = Mem__NewArray(strlen(arg1) + 1);
    strcpy(temp_r3, arg1);
    M2C_FIELD(arg0, s8 **, 0) = temp_r3;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}
