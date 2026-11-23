/* MessagePanel__ResetProperties @ 0x80269CF4 (size: 0x1E0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void MenuFrame__ResetProperties(void *);
void SphereText__ResetProperties(void *);
void Sphere__SetColor(void *, f32, f32, f32, f32);
extern f32 lbl_80349E64 __attribute__((section(".data")));
extern f32 lbl_80349E68 __attribute__((section(".data")));
extern f32 lbl_80349E6C __attribute__((section(".data")));
extern f32 lbl_80349E70 __attribute__((section(".data")));
extern f32 lbl_80349E74 __attribute__((section(".data")));
extern f32 lbl_80349E78 __attribute__((section(".data")));
extern f32 lbl_80349E7C __attribute__((section(".data")));
extern f32 lbl_80349E80 __attribute__((section(".data")));
extern f32 lbl_80349E84 __attribute__((section(".data")));
extern f32 lbl_80349E88 __attribute__((section(".data")));
typedef void (*SetFF)(void *, f32, f32);
typedef void (*SetFFFF)(void *, f32, f32, f32, f32);
typedef void (*SetFFFFF)(void *, f32, f32, f32);
typedef void (*SetIIIII)(void *, s32, s32, s32, s32);
void MessagePanel__ResetProperties(void *arg0) {
    void *t2, *t3, *t4, *t5, *t6, *t7, *t8, *t9, *t10, *t11;
    MenuFrame__ResetProperties(arg0);
    SphereText__ResetProperties((char *)arg0 + 23916);
    t2 = *(void **)((char *)arg0 + 412);
    ((SetFF)*(void **)((char *)t2 + 140))((char *)arg0 + *(s16 *)((char *)t2 + 136), lbl_80349E64, lbl_80349E68);
    t3 = *(void **)((char *)arg0 + 412);
    ((SetFF)*(void **)((char *)t3 + 236))((char *)arg0 + *(s16 *)((char *)t3 + 232), lbl_80349E6C, lbl_80349E6C);
    t4 = *(void **)((char *)arg0 + 412);
    ((SetFF)*(void **)((char *)t4 + 188))((char *)arg0 + *(s16 *)((char *)t4 + 184), lbl_80349E6C, lbl_80349E6C);
    t5 = *(void **)((char *)arg0 + 412);
    ((SetFFFF)*(void **)((char *)t5 + 268))((char *)arg0 + *(s16 *)((char *)t5 + 264), lbl_80349E70, lbl_80349E70, lbl_80349E74, lbl_80349E78);
    {
        f32 a = lbl_80349E7C;
        f32 b = a;
        f32 w = lbl_80349E80;
        Sphere__SetColor((char *)arg0 + 12168, a, b, w, b);
    }
    t6 = *(void **)((char *)arg0 + 412);
    ((SetFFFF)*(void **)((char *)t6 + 908))((char *)arg0 + *(s16 *)((char *)t6 + 904), lbl_80349E7C, lbl_80349E7C, lbl_80349E80, lbl_80349E7C);
    t7 = *(void **)((char *)arg0 + 412);
    ((SetFFFFF)*(void **)((char *)t7 + 916))((char *)arg0 + *(s16 *)((char *)t7 + 912), lbl_80349E84, lbl_80349E70, lbl_80349E6C);
    t8 = *(void **)((char *)arg0 + 412);
    ((SetIIIII)*(void **)((char *)t8 + 924))((char *)arg0 + *(s16 *)((char *)t8 + 920), 1, 255, 2, 2);
    t9 = *(void **)((char *)arg0 + 412);
    ((SetFFFF)*(void **)((char *)t9 + 948))((char *)arg0 + *(s16 *)((char *)t9 + 944), lbl_80349E7C, lbl_80349E7C, lbl_80349E80, lbl_80349E7C);
    t10 = *(void **)((char *)arg0 + 412);
    ((SetFF)*(void **)((char *)t10 + 956))((char *)arg0 + *(s16 *)((char *)t10 + 952), lbl_80349E88, lbl_80349E70);
    t11 = *(void **)((char *)arg0 + 412);
    ((SetIIIII)*(void **)((char *)t11 + 964))((char *)arg0 + *(s16 *)((char *)t11 + 960), 0, 255, 2, 2);
}
