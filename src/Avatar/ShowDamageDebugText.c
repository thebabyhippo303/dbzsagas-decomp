/* Avatar__ShowDamageDebugText @ 0x800975E0 (size: 0x20C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32; typedef float f32;
void sprintf(char *, char *, ...);
void *Mem__New(s32);
void *fn_80270450(void *);
extern char lbl_8031FA2C[] __attribute__((section(".data")));
extern f32 lbl_8031FA38 __attribute__((section(".data")));
extern f32 lbl_8031FA3C __attribute__((section(".data")));
extern f32 lbl_8031FA40 __attribute__((section(".data")));
extern f32 lbl_8031FA44 __attribute__((section(".data")));
extern char *lbl_803DC3C0;

typedef void (*FnI)(char *, s32);
typedef void (*FnS)(char *, char *);
typedef void (*FnFF)(char *, f32, f32);
typedef void (*FnF)(char *, f32);
typedef void (*FnIIII)(char *, s32, s32, s32, s32);
typedef void (*Fn0)(char *);

#define VT(o) (*(char **)((char *)(o) + 0x19C))
#define ADJ(o, a) ((char *)(o) + *(s16 *)(VT(o) + (a)))
#define SLOT(s, k) (*(char **)((s) + ((k) << 2)))

void Avatar__ShowDamageDebugText(char *self, s32 flag, f32 dmg) {
    char buf[16];
    f32 *arr;
    f32 *p;
    char *slots;
    f32 best;
    f32 v;
    s32 i;
    s32 idx;
    char *o;
    char *o2;
    char *o3;
    char *o4;
    char *o5;
    char *o6;
    char *o7;

    if (*(s32 *)(lbl_803DC3C0 + 0x1C74) != 0) {
        arr = (f32 *)(self + 0x63C);
        slots = self + 0x61C;
        best = lbl_8031FA38;
        idx = 0;
        i = 0;
        p = arr;
        for (; i < 8; i++) {
            v = *p++;
            if (!(v <= best)) {
                best = v;
                idx = i;
            }
        }
        if (7 == idx++) {
            idx = 0;
        }
        sprintf(buf, lbl_8031FA2C, dmg);
        o = SLOT(slots, idx);
        if (o != 0) {
            (*(FnI *)(VT(o) + 0xC))(ADJ(o, 8), 3);
        }
        o = fn_80270450(Mem__New(500));
        SLOT(slots, idx) = o;
        if (o != 0) {
            (*(FnS *)(VT(o) + 0x36C))(ADJ(o, 0x368), buf);
            o2 = SLOT(slots, idx);
            (*(FnFF *)(VT(o2) + 0xCC))(ADJ(o2, 0xC8), lbl_8031FA3C, lbl_8031FA3C);
            if (flag != 0) {
                o3 = SLOT(slots, idx);
                (*(FnIIII *)(VT(o3) + 0x114))(ADJ(o3, 0x110), 128, 128, 255, 255);
            } else {
                o4 = SLOT(slots, idx);
                (*(FnIIII *)(VT(o4) + 0x114))(ADJ(o4, 0x110), 255, 128, 128, 255);
            }
            o5 = SLOT(slots, idx);
            (*(FnFF *)(VT(o5) + 0xEC))(ADJ(o5, 0xE8), lbl_8031FA3C, lbl_8031FA3C);
            o6 = SLOT(slots, idx);
            (*(FnF *)(VT(o6) + 0x41C))(ADJ(o6, 0x418), lbl_8031FA40);
            o7 = SLOT(slots, idx);
            (*(Fn0 *)(VT(o7) + 0x1FC))(ADJ(o7, 0x1F8));
            *(f32 *)((char *)arr + (idx << 2)) = lbl_8031FA44;
        }
    }
}
