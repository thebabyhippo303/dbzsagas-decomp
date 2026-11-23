/* RenderState__ApplyCullMode @ 0x8024B1F8 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 RenderState__Get(s32);
void GXCallDisplayList(s32, s32);
extern void *lbl_803DCDF4;

void RenderState__ApplyCullMode(void) {
    s32 mode;
    s32 g;
    s32 which;
    void *d;

    mode = RenderState__Get(2);
    switch (mode) {
    case 0:
        g = RenderState__Get(1);
        which = 2;
        if (g != 0)
            goto join;
        which = 1;
        goto join;
    case 1:
        g = RenderState__Get(1);
        which = 1;
        if (g != 0)
            goto join;
        goto set_two;
    case 2:
        which = 0;
        goto join;
    default:
    set_two:
        which = 2;
        break;
    }
join:
    d = lbl_803DCDF4;
    if (which == 1)
        goto call1;
    if (which <= 1)
        goto call0;
    if (which == 2)
        goto call2;
    goto call0;
call1:
    GXCallDisplayList(M2C_FIELD(d, s32 *, 68), M2C_FIELD(d, s32 *, 72));
    goto end;
call2:
    GXCallDisplayList(M2C_FIELD(d, s32 *, 76), M2C_FIELD(d, s32 *, 80));
    goto end;
call0:
    GXCallDisplayList(M2C_FIELD(d, s32 *, 84), M2C_FIELD(d, s32 *, 88));
end:;
}
