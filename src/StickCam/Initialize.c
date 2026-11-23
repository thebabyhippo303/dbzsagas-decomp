/* StickCam__Initialize @ 0x8003255C (size: 0x1D0, .text, ProDG 3.9.3 -O2) - MATCHED */
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
float Script__PopFloat(void *, void *);
char *Script__PopString(void *, void *, int *);
void Mem__DeleteArray(void *);
void CCameraStick__Initialize(void *, V3 *, f32);
extern char lbl_803117EC[] __attribute__((section(".data")));
extern f32 lbl_803117F4 __attribute__((section(".data")));
extern f32 lbl_803117F8 __attribute__((section(".data")));
extern f32 lbl_803117FC __attribute__((section(".data")));
extern char lbl_803B1E84[] __attribute__((section(".data")));
extern void *lbl_803DC5B4;

void StickCam__Initialize(void *arg0, void *arg1) {
    int flag;
    V3i A;
    V3i B;
    V3 tmp;
    V3i *pa;
    V3 *t;
    f32 ax, ay, az;
    char *s1;
    char *s2;
    f32 f31;
    void *p;
    void *q;
    void *bag;

    s1 = Script__PopString(arg0, arg1, &flag);
    s2 = Script__PopString(arg0, arg1, &flag);
    f31 = Script__PopFloat(arg0, arg1);
    p = NamedPoint__FindByName(lbl_803B1E84, s1, 0);
    q = NamedPoint__FindByName(lbl_803B1E84, s2, 0);
    if (p != 0 && q != 0) {
        A = *(V3i *)p;
        B = *(V3i *)q;
    } else {
        t = &tmp;
        t->x = lbl_803117F4;
        t->z = lbl_803117F8;
        t->y = lbl_803117F4;
        A = *(V3i *)t;
        t->x = lbl_803117F4;
        t->y = lbl_803117FC;
        t->z = lbl_803117F4;
        B = *(V3i *)t;
    }
    pa = &A;
    bag = CameraBag__SetTop(lbl_803DC5B4, lbl_803117EC);
    if (bag != 0) {
        ay = *(f32 *)&pa->y;
        az = *(f32 *)&pa->z;
        ax = *(f32 *)&A.x;
        tmp.x = ax - *(f32 *)&B.x;
        tmp.y = ay - *(f32 *)&B.y;
        tmp.z = az - *(f32 *)&B.z;
        CCameraStick__Initialize(bag, &tmp, f31);
    }
    if (flag != 0) {
        if (s1 != 0) {
            Mem__DeleteArray(s1);
        }
        if (s2 != 0) {
            Mem__DeleteArray(s2);
        }
    }
}
