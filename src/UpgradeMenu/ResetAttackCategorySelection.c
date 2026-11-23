/* UpgradeMenu__ResetAttackCategorySelection @ 0x80017734 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SphereText__SetText(s32, char *);
void Sphere__HideTree(void *);
void *SphereText__GetTextEffect(void *);
void UpgradeMenu__RefreshSelectedUpgradeDisplay(void *);

extern char lbl_8030DAC0[] __attribute__((section(".data")));
extern char *lbl_803DC3B4 __attribute__((section(".sdata")));

#define VT_OF(o, vtoff) (*(char **)((char *)(o) + (vtoff)))
#define SLOT(vt, off) (*(void **)((vt) + (off)))
#define ADJ(vt, off) (*(short *)((vt) + (off)))

typedef void (*Fn6)(void *, int, int, int, int, int);

void UpgradeMenu__ResetAttackCategorySelection(char *self) {
    char *vt;
    char *p;
    char *o;
    char *vt2;

    *(int *)(self + 0x3D48) = 0;
    SphereText__SetText(self + 0x1C14, lbl_8030DAC0);
    o = self + 0x6F4;
    vt = *(char **)(self + 0x890);
    {
        Fn6 f = (Fn6)SLOT(vt, 0x6C);

        f(o + ADJ(vt, 0x68), *(int *)(lbl_803DC3B4 + 0x88), 0, 0, 1, 1);
    }
    o = self + 0x894;
    vt = *(char **)(self + 0xA30);
    {
        Fn6 f = (Fn6)SLOT(vt, 0x6C);

        f(o + ADJ(vt, 0x68), *(int *)(lbl_803DC3B4 + 0x88), 1, 0, 1, 1);
    }
    Sphere__HideTree(self);
    p = SphereText__GetTextEffect(self + 0x3B54);
    vt2 = *(char **)(p + 8);
    ((void (*)(void *))SLOT(vt2, 0x1C))(p + ADJ(vt2, 0x18));
    UpgradeMenu__RefreshSelectedUpgradeDisplay(self);
}
