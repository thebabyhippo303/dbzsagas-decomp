/* Archive__OpenBackingSource @ 0x8017F9F4 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 FileStream__OpenThunk(char *, s32, s32, s32);
char * App__MakeGcnDataPath(char *);
s32 DvdFile__Open(s32, void *, s32);
char * App__MakeDataPath(char *);
extern s32 lbl_803DCB60;

s32 Archive__OpenBackingSource(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r30;
    s32 temp_r3;
    void *temp_r30_2;

    temp_r30 = lbl_803DCB60;
    lbl_803DCB60 = 2;
    temp_r3 = FileStream__OpenThunk(NULL, arg1, arg2, 0);
    M2C_FIELD(arg0, s32 *, 8) = temp_r3;
    lbl_803DCB60 = temp_r30;
    if (temp_r3 != 0) {
        M2C_FIELD(arg0, s32 *, 0) = 2;
        goto block_6;
    }
    temp_r30_2 = arg0 + 8;
    if ((DvdFile__Open(App__MakeGcnDataPath((s8 *) arg1), temp_r30_2, 2) == 0) && (DvdFile__Open(App__MakeDataPath((s8 *) arg1), temp_r30_2, 2) == 0)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0) = 1;
block_6:
    return 1;
}

