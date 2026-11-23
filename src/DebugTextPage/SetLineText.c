/* DebugTextPage__SetLineText @ 0x8026F6F4 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
typedef void (*Func876)(void *, void *);

void DebugTextPage__SetLineText(void *arg0, s32 arg1, void *arg2) {
    void *text = arg2;
    s32 off = arg1 * 500;
    void *l = (void *)(off + (s32)arg0);
    s32 off2 = off + 436;
    void *inner = M2C_FIELD(l, void **, 848);
    void *a = (char *)arg0 + off2 + M2C_FIELD(inner, short *, 872);

    ((Func876)M2C_FIELD(inner, void **, 876))(a, text);
}
