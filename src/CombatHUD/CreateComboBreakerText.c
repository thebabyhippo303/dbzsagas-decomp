/* CombatHUD__CreateComboBreakerText @ 0x8010E694 (size: 0x210, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32; typedef float f32; typedef double f64;
void CombatHUD__ClearComboBreakerText(void *);
void CombatHUD__ConfigureComboBreakerText(void *, void *);
void *UI__CreateWidget(void *, f32, f32, f32);
void sprintf(char *, char *, ...);
extern char lbl_803263A8[] __attribute__((section(".data")));
extern char lbl_803263B0[] __attribute__((section(".data")));
extern f32 lbl_803263BC __attribute__((section(".data")));
extern f32 lbl_803263C0 __attribute__((section(".data")));
extern f32 lbl_803263C4 __attribute__((section(".data")));
extern f32 lbl_803263C8 __attribute__((section(".data")));
extern f32 lbl_803263CC __attribute__((section(".data")));
extern f32 lbl_803263D0 __attribute__((section(".data")));
extern f32 lbl_803263D4 __attribute__((section(".data")));

typedef void (*FnS)(char *, char *);
typedef void (*FnFF)(char *, f32, f32);
typedef void (*FnI)(char *, s32);
typedef void (*FnF4)(char *, f32, f64, f64, f32);
typedef void (*Fn0)(char *);

#define VT(o) (*(char **)((char *)(o) + 0x19C))
#define ADJ(o, a) ((char *)(o) + *(s16 *)(VT(o) + (a)))

void CombatHUD__CreateComboBreakerText(char *self) {
    char buf[28];
    char *w2;
    char *w3;
    char *w4;
    char *w5;
    f64 b;
    f64 c;
    f32 a;

    CombatHUD__ClearComboBreakerText(self);
    sprintf(buf, lbl_803263A8);
    *(char **)(self + 0x2BB0) = UI__CreateWidget(self, lbl_803263BC, lbl_803263BC, lbl_803263C0);
    w2 = *(char **)(self + 0x2BB0);
    (*(FnS *)(VT(w2) + 0x36C))(ADJ(w2, 0x368), buf);
    w2 = *(char **)(self + 0x2BB0);
    (*(FnFF *)(VT(w2) + 0xEC))(ADJ(w2, 0xE8), lbl_803263C4, lbl_803263C4);
    w3 = *(char **)(self + 0x2BB0);
    (*(FnI *)(VT(w3) + 0x1B4))(ADJ(w3, 0x1B0), 7552);
    w4 = *(char **)(self + 0x2BB0);
    a = lbl_803263C8;
    b = a;
    c = b;
    (*(FnF4 *)(VT(w4) + 0x10C))(ADJ(w4, 0x108), a, b, c, lbl_803263CC);
    w5 = *(char **)(self + 0x2BB0);
    (*(Fn0 *)(VT(w5) + 0x1FC))(ADJ(w5, 0x1F8));
    CombatHUD__ConfigureComboBreakerText(self, *(char **)(self + 0x2BB0));
    sprintf(buf, lbl_803263B0);
    *(char **)(self + 0x2BB4) = UI__CreateWidget(self, lbl_803263BC, lbl_803263D0, lbl_803263C0);
    w2 = *(char **)(self + 0x2BB4);
    (*(FnS *)(VT(w2) + 0x36C))(ADJ(w2, 0x368), buf);
    w2 = *(char **)(self + 0x2BB4);
    (*(FnFF *)(VT(w2) + 0xEC))(ADJ(w2, 0xE8), lbl_803263C4, lbl_803263C4);
    w3 = *(char **)(self + 0x2BB4);
    (*(FnI *)(VT(w3) + 0x1B4))(ADJ(w3, 0x1B0), 7552);
    w4 = *(char **)(self + 0x2BB4);
    a = lbl_803263C8;
    b = a;
    c = b;
    (*(FnF4 *)(VT(w4) + 0x10C))(ADJ(w4, 0x108), a, b, c, lbl_803263CC);
    w5 = *(char **)(self + 0x2BB4);
    (*(Fn0 *)(VT(w5) + 0x1FC))(ADJ(w5, 0x1F8));
    CombatHUD__ConfigureComboBreakerText(self, *(char **)(self + 0x2BB4));
    *(f32 *)(self + 0x2BB8) = lbl_803263D4;
}
