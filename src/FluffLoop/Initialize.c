/* FluffLoop__Initialize @ 0x8004CF08 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8;
typedef float f32;
typedef struct { u8 r, g, b, a; } Color;

extern void fn_80243670(Color *);
extern void fn_80243680(int);
extern void fn_80260E34(char *);
extern void SaveMenu__InitializeMainScreen(void *);
extern int fn_8004F0C4(void *);
extern char lbl_8031970C[];
extern f32 lbl_80319994 __attribute__((section(".data")));
extern f32 lbl_80319998 __attribute__((section(".data")));
typedef struct {
    char pad0[0x2318];
    f32 f2318;
    char pad1[4];
    f32 f2320;
    char pad2[4];
    f32 f2328;
} Globals;
extern Globals lbl_803B325C;

int FluffLoop__Initialize(char *self) {
    Color color;
    char *menu;
    int zero = 0;

    *(u8 *)(self + 0x4915F) = 255;
    *(u8 *)(self + 0x4915C) = zero;
    *(u8 *)(self + 0x4915D) = zero;
    menu = self + 0xC;
    *(u8 *)(self + 0x4915E) = zero;
    color = *(Color *)(self + 0x4915C);
    fn_80243670(&color);
    fn_80243680(1);
    fn_80260E34(lbl_8031970C);
    lbl_803B325C.f2318 = lbl_80319994;
    lbl_803B325C.f2328 = lbl_80319998;
    lbl_803B325C.f2320 = lbl_80319994;
    SaveMenu__InitializeMainScreen(menu);
    fn_8004F0C4(menu);
    return 1;
}
