/* AnimScript__OpReturn @ 0x80239028 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AnimScript__OpReturn(void *arg0, s32 arg1, s32 *arg2) {
    u32 off = (u32)(arg1 << 2);
    u32 base = (u32)arg0 + 0xF0;
    void *e = *(void **)(base + off);
    u8 idx;
    s32 *table;

    if ((e != NULL) && ((s32)M2C_FIELD(M2C_FIELD(e, void **, 0x1C), s32 *, 0x38) != 0))
        *arg2 += 4;
    idx = *(u8 *)((char *)e + 9);
    table = *(s32 **)((char *)e + 56);
    *(u8 *)((char *)e + 9) = idx - 1;
    *arg2 = table[(s8)idx];
    return 0;
}
