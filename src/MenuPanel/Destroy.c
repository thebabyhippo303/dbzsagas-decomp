/* MenuPanel__Destroy @ 0x80267A1C (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef short s16;
typedef struct Meth {
    char pad[8];
    s16 adj;
    char pad2[2];
    void (*fn)(void *self, int mode);
} Meth;
extern char lbl_8034AE88[];
extern void MenuPanel__ClearOptions(void *self);
extern void EzNode__Destroy(void *w, int mode);
extern void Sphere__DestroyCore(void *w, int mode);
extern void SphereText__Destroy(void *w, int mode);
extern void MenuFrame__Destroy(void *w, int mode);

void MenuPanel__Destroy(char *self, s32 arg) {
    char *end;
    char *base1;
    char *base2;
    char *mid;
    char *p;
    char *t;

    *(char **)(self + 412) = lbl_8034AE88;
    MenuPanel__ClearOptions(self);
    base1 = self + 0x10000;
    EzNode__Destroy(base1 - 21020, 2);
    base2 = base1 - 24380;
    Sphere__DestroyCore(base1 - 21452, 2);
    mid = self + 24416;
    Sphere__DestroyCore(base1 - 21868, 2);
    Sphere__DestroyCore(base1 - 22284, 2);
    Sphere__DestroyCore(base1 - 22716, 2);
    Sphere__DestroyCore(base1 - 23132, 2);
    Sphere__DestroyCore(base1 - 23548, 2);
    Sphere__DestroyCore(base1 - 23964, 2);
    Sphere__DestroyCore(base2, 2);
    if ((t = self + 24832) != 0) {
        p = mid + 16736;
        if (t != p) {
            end = t;
            t = 0;
            do {
                Meth *m;
                p -= 0x550;
                m = *(Meth **)(p + 412);
                m->fn(p + m->adj, 0);
            } while (end != p);
        }
    }
    Sphere__DestroyCore(mid, 2);
    SphereText__Destroy(self + 23916, 2);
    MenuFrame__Destroy(self, arg);
}
