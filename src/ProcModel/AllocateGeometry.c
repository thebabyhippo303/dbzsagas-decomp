/* ProcModel__AllocateGeometry @ 0x8024D088 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Mem__New(u32);
u32 Mem__NewArray(u32);

s32 ProcModel__AllocateGeometry(void *arg0, s32 arg1) {
    void *p;
    void *q;
    s32 c30;
    s32 c100;
    s32 z;
    s32 *r9;
    s16 *r11;
    s32 ctr;
    s32 ret;

    z = 0;
    *(s32 *)((char *)arg0 + 12) = arg1;
    p = Mem__New(136);
    c30 = 30;
    c100 = 100;
    q = (char *)p + 24;
    *(u32 *)p = Mem__NewArray(240);
    *((s32 *)p + 1) = z;
    *((s32 *)p + 2) = c30;
    *((s32 *)p + 3) = c30;
    *((s32 *)p + 4) = z;
    *((s32 *)p + 5) = z;
    *(u32 *)((char *)p + 24) = Mem__NewArray(200);
    ctr = 8;
    *((s32 *)q + 1) = z;
    *((s32 *)q + 2) = c100;
    *((s32 *)q + 4) = z;
    r11 = (s16 *)((char *)p + 80);
    *((s32 *)q + 3) = c100;
    r9 = (s32 *)((char *)p + 48);
    *((s32 *)q + 5) = z;
    *((s32 *)p + 32) = z;
    do {
        *r9 = 0;
        *r11 = 0;
        r9++;
        r11++;
        ctr--;
    } while (ctr != 0);
    *(void **)((char *)arg0 + 20) = p;
    ret = 1;
    if (p == NULL) {
        ret = 0;
    }
    return ret;
}
