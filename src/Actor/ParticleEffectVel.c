/* Actor__ParticleEffectVel @ 0x802AD6E8 (size: 0x1F0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

char *Script__PopString(void *, void *, int *);
void fn_8021CDC8(void *, void *, void *, int, int, int, int, int, f32, f32, f32, f32, int, int);
float sqrtf(float);
void Mem__DeleteArray(void *);
extern f32 lbl_80351D74 __attribute__((section(".data")));
extern f32 lbl_80351D78 __attribute__((section(".data")));

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

void Actor__ParticleEffectVel(void *arg0, void *arg1) {
    void *inner;
    char *s;
    Vec3 v;
    Vec3 w;
    Vec3 t;
    Vec3 *pv;
    int owned;
    f32 len;
    f32 one;
    u32 lb;
    u32 el;
    u32 ob;
    u32 eo;
    int c;
    int ok;

    s = Script__PopString(arg0, arg1, &owned);
    inner = M2C_FIELD(arg0, void **, 0xC8);
    pv = &v;
    v = *(Vec3 *)((char *)inner + 0x68);
    w.y = pv->y * pv->y;
    w.z = pv->z * pv->z;
    w.x = v.x * v.x;
    len = sqrtf((&w)->y + (&w)->z + w.x);
    one = lbl_80351D74;
    lb = *(u32 *)&len;
    el = (lb >> 23) & 0xFF;
    if (el == 0) {
        c = 1;
    } else {
        ob = *(u32 *)&one;
        eo = (ob >> 23) & 0xFF;
        c = (eo >= el + 127u);
    }
    if (c == 0) {
        f32 inv = lbl_80351D74 / len;
        t.x = pv->x * inv;
        t.y = pv->y * inv;
        t.z = pv->z * inv;
        *pv = t;
        w = t;
        ok = 1;
    } else {
        ok = 0;
    }
    if (ok != 0) {
        fn_8021CDC8(s, (char *)inner + 0x38, &v, 0, 0, 0, 0, -1, lbl_80351D78, lbl_80351D74, lbl_80351D74, lbl_80351D74, 0, 0);
    } else {
        fn_8021CDC8(s, (char *)inner + 0x38, 0, 0, 0, 0, 0, -1, lbl_80351D78, lbl_80351D74, lbl_80351D74, lbl_80351D74, 0, 0);
    }
    if (owned != 0 && s != NULL) {
        Mem__DeleteArray(s);
    }
}
