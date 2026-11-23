/* BaseMenu__SetColumnText @ 0x80263260 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void BaseMenu__SetColumnText(void *arg0, s32 arg1, s32 arg2) {
    s32 off = arg1 * 12;
    s32 base;
    void *obj;

    arg1 = arg2;
    base = off + (s32)arg0;
    obj = M2C_FIELD((void *)base, void **, 32);
    M2C_FIELD(obj, M2C_UNK (**)(s32, s32), 52)((char *)arg0 + (off + 24) + M2C_FIELD(obj, s16 *, 48), arg1);
}
