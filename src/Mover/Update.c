/* Mover__Update @ 0x802B611C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Simple__Update(void *);
void *Protagonist__GetHomeParent(void *);
void Simple__ApplyStateFlags(void *);

void Mover__Update(void *arg0) {
    void *self = arg0;
    Simple__Update(arg0);
    if (*(void **)((char *)self + 600) != NULL) {
        void *hp = Protagonist__GetHomeParent(self);
        s32 a = *(s32 *)((char *)self + 1364);
        s32 b = *(s32 *)((char *)self + 1336);
        *(void **)((char *)self + 940) = hp;
        if (b != a) {
            *(s32 *)((char *)self + 1336) = a;
            Simple__ApplyStateFlags(self);
        }
    }
}
