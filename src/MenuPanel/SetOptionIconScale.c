/* MenuPanel__SetOptionIconScale @ 0x802689C4 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void MenuPanel__SetOptionIconScale(void *arg0, f32 sx, f32 sy) {
    void *vt;
    void *w;
    void *t;
    char *arr;
    char *base;
    int i;

    vt = *(void **)((char *)arg0 + 0x19C);
    t = (*(void *(**)(void *))((char *)vt + 0x4E4))((char *)arg0 + *(s16 *)((char *)vt + 0x4E0));
    if (t != NULL) {
        base = (char *)t + 0x20C;
        arr = (char *)t + 0x3A8;
        i = 2;
        do {
            w = *(void **)arr;
            arr += 0x1A0;
            (*(void (**)(void *, f32, f32))((char *)w + 0xCC))((char *)base + *(s16 *)((char *)w + 0xC8), sx, sy);
            base += 0x1A0;
            i--;
        } while (i != 0);
    }
}
