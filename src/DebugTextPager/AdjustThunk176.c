/* DebugTextPager__AdjustThunk176 @ 0x802737F0 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type *)((char *)(expr) + (offset)))
#define NULL 0
typedef void (*ThunkFn)(void *);
void DebugTextPager__AdjustThunk176(void *arg0) {
    ThunkFn fn;
    void *sub;
    s16 adj;
    sub = M2C_FIELD(arg0, void *, 8);
    adj = M2C_FIELD(sub, s16, 176);
    fn = M2C_FIELD(sub, ThunkFn, 180);
    fn((char *)arg0 + adj);
}
