/* SurfacePairMap__GetRowName @ 0x801F8AD4 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *SurfacePairMap__GetRowName(void *arg0, s32 arg1) {
    void *t = M2C_FIELD(arg0, void **, 20);
    s32 off = arg1 * 4;
    void *arr = M2C_FIELD(arg0, void **, 36);
    void *vt = M2C_FIELD(t, void **, 4);
    s32 v = M2C_FIELD((char *)off + (s32)arr, s32 *, 0);
    void *(*fn)(void *, s32);
    s32 adj;
    void *th;
    fn = M2C_FIELD(vt, void *(**)(void *, s32), 12);
    adj = M2C_FIELD(vt, s16 *, 8);
    th = (char *)t + adj;
    return fn(th, v);
}
