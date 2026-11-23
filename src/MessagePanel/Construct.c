/* MessagePanel__Construct @ 0x80269C84 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern char lbl_8034AAA8[];
void MenuFrame__Construct(void *);
void SphereText__Construct(void *);
void IconLabel__Construct(void *);
void Sphere__AddChild(void *, void *);
void *MessagePanel__Construct(void *arg0) {
    void *t;
    void *a;
    void *b;
    void *c;
    t = arg0;
    a = (char *)t + 23916;
    MenuFrame__Construct(t);
    b = (char *)t + 24416;
    *(void **)((char *)t + 412) = lbl_8034AAA8;
    c = (char *)t + 420;
    SphereText__Construct(a);
    IconLabel__Construct(b);
    Sphere__AddChild(c, a);
    Sphere__AddChild(c, b);
    return t;
}
