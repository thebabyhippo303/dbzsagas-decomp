/* CActor__GetBoneModelPosition @ 0x801DCED0 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_8023DFD8(s32, s32, s32 *);                /* extern */

void *CActor__GetBoneModelPosition(void *arg0, void *arg1, s32 arg2) {
    union { s32 value; unsigned char bytes[12]; } sp8;
    volatile s32 *p;
    s32 temp_r10;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg1, void **, 0x84);
    fn_8023DFD8(M2C_FIELD(temp_r9, s32 *, 0xC), arg2, (s32 *)sp8.bytes);
    p = (volatile s32 *)sp8.bytes;
    temp_r10 = p[2];
    M2C_FIELD(arg0, s32 *, 0) = sp8.value;
    M2C_FIELD(arg0, s32 *, 4) = p[1];
    M2C_FIELD(arg0, s32 *, 8) = temp_r10;
    return arg0;
}
