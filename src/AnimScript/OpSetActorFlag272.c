/* AnimScript__OpSetActorFlag272 @ 0x802356BC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AnimScript__OpSetActorFlag272(void *arg0, s32 arg1, u8 **arg2) {
    void *self = arg0;
    void *tbl = (char *)self + 240;
    void *act = *(void **)((char *)tbl + (arg1 << 2));
    s32 ret = (s32)arg0;

    if (act == NULL) {
        goto doflag;
    }
    if (M2C_FIELD(M2C_FIELD(act, void **, 28), s32 *, 56) == 0) {
        goto doflag;
    }
    *arg2 += 4;
doflag:
    ret = 0;
    M2C_FIELD(self, s32 *, 272) |= 1;
    return ret;
}
