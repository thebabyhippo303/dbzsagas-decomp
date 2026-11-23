/* StaticCam__Initialize @ 0x8003272C (size: 0x1E8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
typedef struct { s32 x, y, z; } V3i;
typedef struct { f32 x, y, z; } V3;
void *CameraBag__SetTop(void *, char *);
void *NamedPoint__FindByName(void *, char *, int);
s32 Script__PopInt(void *, void *);
char *Script__PopString(void *, void *, int *);
void Mem__DeleteArray(void *);
void CCameraStatic__Initialize(void *, void *, void *, s32);
extern char lbl_80311650[] __attribute__((section(".data")));
extern f32 lbl_80311800 __attribute__((section(".data")));
extern f32 lbl_80311804 __attribute__((section(".data")));
extern f32 lbl_80311808 __attribute__((section(".data")));
extern char lbl_803B1E84[] __attribute__((section(".data")));
extern void *lbl_803DC5B4;

void StaticCam__Initialize(void *arg0, void *arg1) {
    struct { V3i A; int p0; V3i B; int p1; V3 t; int p2; V3i c; int p3; int flag; } L;
    V3i *pa;
    V3i *pb;
    V3 *tp;
    char *s1;
    char *s2;
    s32 v;
    void *p;
    void *q;
    void *bag;

    v = 1;
    s1 = Script__PopString(arg0, arg1, &L.flag);
    s2 = Script__PopString(arg0, arg1, &L.flag);
    if (Script__PopInt(arg0, arg1) == 0) {
        v = 0;
    }
    p = NamedPoint__FindByName(lbl_803B1E84, s1, 0);
    q = NamedPoint__FindByName(lbl_803B1E84, s2, 0);
    if (p != 0 && q != 0) {
        L.A = *(V3i *)p;
        L.B = *(V3i *)q;
    } else {
        tp = &L.t;
        tp->x = lbl_80311800;
        tp->z = lbl_80311804;
        tp->y = lbl_80311800;
        L.A = *(V3i *)tp;
        tp->x = lbl_80311800;
        tp->y = lbl_80311808;
        tp->z = lbl_80311800;
        L.B = *(V3i *)tp;
    }
    pa = &L.A;
    pb = &L.B;
    bag = CameraBag__SetTop(lbl_803DC5B4, lbl_80311650);
    if (bag != 0) {
        *(V3i *)&L.t = *pa;
        L.c = *pb;
        CCameraStatic__Initialize(bag, &L.t, &L.c, v);
    }
    if (L.flag != 0) {
        if (s1 != 0) {
            Mem__DeleteArray(s1);
        }
        if (s2 != 0) {
            Mem__DeleteArray(s2);
        }
    }
}
