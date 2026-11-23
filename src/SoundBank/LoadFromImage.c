/* SoundBank__LoadFromImage @ 0x80192C98 (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void Render__CallLoadProgressCallback(void);
s32 SoundBank__LoadFromImage(void *arg0, void *arg1) {
    void *img;
    void *a0;
    void *vt;
    s32 i;
    s32 off;
    s32 res;
    img = arg1;
    a0 = arg0;
    if (*(s32 *)img != 0x534D4F44) {
        return 0;
    }
    if (*(s32 *)((char *)img + 4) != 0x1004) {
        return 0;
    }
    vt = *(void **)((char *)a0 + 0xC);
    if ((*(s32 (**)(void *, void *, s32))((char *)vt + 12))((char *)a0 + *(s16 *)((char *)vt + 8), img, *(s32 *)((char *)img + 0x20)) == 0) {
        return 0;
    }
    i = 0;
    if (i < *(s32 *)((char *)*(void **)((char *)a0 + 8) + 8)) {
        off = 0;
        do {
            void *a;
            void *o;
            void *base;
            s32 sz;
            s32 word;
            u32 ent;
            void *v2;
            Render__CallLoadProgressCallback();
            i = i + 1;
            a = *(void **)((char *)a0 + 8);
            o = *(void **)a0;
            base = *(void **)((char *)a + 0x14);
            sz = *(s32 *)((char *)a + 0x20);
            word = *(s32 *)((u32)off + (u32)base);
            ent = (u32)off + (u32)base;
            v2 = *(void **)((char *)o + 0x60);
            res = (*(s32 (**)(void *, void *, void *, s32))((char *)v2 + 0x94))((char *)o + *(s16 *)((char *)v2 + 0x90), a0, (char *)img + sz + word, *(s32 *)(ent + 4));
            *(s32 *)((u32)off + (u32)*(void **)((char *)*(void **)((char *)a0 + 8) + 0x14) + 0xC) = res;
            off = off + 16;
        } while (i < *(s32 *)((char *)*(void **)((char *)a0 + 8) + 8));
    }
    return 1;
}
