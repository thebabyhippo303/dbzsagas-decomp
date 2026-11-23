/* DebugTextPage__GetLineText @ 0x8026F73C (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
typedef void *(*Func940)(void *);

void *DebugTextPage__GetLineText(void *arg0, s32 arg1) {
    s32 off = arg1 * 500;
    void *r9 = (void *)(off + (s32)arg0);
    void *r11 = M2C_FIELD(r9, void **, 848);
    void *a = (char *)arg0 + (arg1 * 500 + 436) + M2C_FIELD(r11, short *, 936);

    return ((Func940)M2C_FIELD(r11, void **, 940))(a);
}
