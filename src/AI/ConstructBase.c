/* AI__ConstructBase @ 0x80058AFC (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_80073350(void *);
extern f32 lbl_8031E0B8 __attribute__((section(".data")));
extern M2C_UNK lbl_80334758 __attribute__((section(".data")));

typedef struct { f32 x, y, z, w; } CbVec4;

void *AI__ConstructBase(void *arg0) {
    s32 i;
    s32 j;
    CbVec4 *p;
    CbVec4 *row;

    M2C_FIELD(arg0, M2C_UNK **, 0x57C) = &lbl_80334758;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    fn_80073350((char *)arg0 + 0x90);
    row = (CbVec4 *)((char *)arg0 + 0x194);
    i = 4;
    do {
        p = row;
        j = 5;
        i--;
        row = (CbVec4 *)((char *)p + 0x50);
        do {
            p->w = lbl_8031E0B8;
            p->z = lbl_8031E0B8;
            p->y = lbl_8031E0B8;
            p->x = lbl_8031E0B8;
            p++;
            j--;
        } while (j != 0);
    } while (i != -1);
    M2C_FIELD(arg0, s32 *, 0x38C) = 0;
    M2C_FIELD(arg0, s32 *, 0x390) = 0;
    return arg0;
}
