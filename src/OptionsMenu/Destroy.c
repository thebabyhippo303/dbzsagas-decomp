/* OptionsMenu__Destroy @ 0x8001AB98 (size: 0x210, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32;
void Sphere__DestroyCore(void *, s32);
void fn_802704BC(void *, int);
void MenuWidgetArray__Destroy(void *, s32);
void UIList__Destroy(void *, s32);
extern char lbl_8030DEB8[] __attribute__((section(".data")));

void OptionsMenu__Destroy(char *self, s32 arg1) {
    char *p;
    void *vt;

    *(char **)(self + 0x19C) = lbl_8030DEB8;
    UIList__Destroy(self + 0x4E18, 2);
    if ((self + 0x3E78) != 0) {
        p = self + 0x4E18;
        if ((self + 0x3E78) != p) {
            do {
                p -= 0x1F4;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while ((self + 0x3E78) != p);
        }
    }
    if ((self + 0x37F8) != 0) {
        p = self + 0x3E78;
        if ((self + 0x37F8) != p) {
            do {
                p -= 0x1A0;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while ((self + 0x37F8) != p);
        }
    }
    if ((self + 0x3178) != 0) {
        p = (self + 0x37F8);
        if ((self + 0x3178) != p) {
            do {
                p -= 0x1A0;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while ((self + 0x3178) != p);
        }
    }
    if ((self + 0x2AF8) != 0) {
        p = (self + 0x3178);
        if ((self + 0x2AF8) != p) {
            do {
                p -= 0x1A0;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while ((self + 0x2AF8) != p);
        }
    }
    if ((self + 0x2478) != 0) {
        p = (self + 0x2AF8);
        if ((self + 0x2478) != p) {
            do {
                p -= 0x1A0;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while ((self + 0x2478) != p);
        }
    }
    fn_802704BC(self + 0x2284, 2);
    fn_802704BC(self + 0x2090, 2);
    fn_802704BC(self + 0x1E9C, 2);
    fn_802704BC(self + 0x1CA8, 2);
    fn_802704BC(self + 0x1AB4, 2);
    MenuWidgetArray__Destroy(self + 0x1258, 2);
    MenuWidgetArray__Destroy(self + 0x9FC, 2);
    MenuWidgetArray__Destroy(self + 0x1A0, 2);
    Sphere__DestroyCore(self, arg1);
}
