/* MainMenu__DestroySaveConfirmationWidgets @ 0x80159D30 (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef short s16;
typedef struct Meth {
    char pad[8];
    s16 adj;
    char pad2[2];
    void (*fn)(void *self, int mode);
} Meth;
extern char lbl_8032C878[];
extern char lbl_803106B8[];
extern void *const lbl_803DC650 __attribute__((section(".sdata")));
extern void PointerArray__Remove(void *arr, void *item);
extern void UIList__Destroy(void *w, int mode);
extern void Sphere__DestroyCore(void *w, int mode);
extern void fn_802704BC(void *w, int mode);
extern void fn_80267A1C(void *menu, int arg);
void MainMenu__DestroySaveConfirmationWidgets(char *menu, int arg) {
    char *t;
    char *base1;
    char *base2;
    *(char **)(menu + 412) = lbl_8032C878;
    PointerArray__Remove(lbl_803DC650, menu);
    base1 = menu + 0x10000;
    base2 = base1 - 20844;
    UIList__Destroy(base1 - 14316, 2);
    Sphere__DestroyCore(base1 - 14732, 2);
    fn_802704BC(base1 - 15232, 2);
    fn_802704BC(base1 - 15732, 2);
    fn_802704BC(base1 - 16232, 2);
    *(char **)(base2 + 412) = lbl_803106B8;
    if ((t = base1 - 18096) != 0) {
        char *p;
        p = base1 - 16304;
        if (t != p) {
            base1 = t;
            t = 0;
            do {
                Meth *m;
                p -= 448;
                m = *(Meth **)(p + 412);
                m->fn(p + m->adj, 0);
            } while (base1 != p);
        }
    }
    Sphere__DestroyCore(base2 + 2332, 2);
    Sphere__DestroyCore(base2 + 1916, 2);
    fn_802704BC(base2 + 1416, 2);
    fn_802704BC(base2 + 916, 2);
    fn_802704BC(base2 + 416, 2);
    Sphere__DestroyCore(base2, 2);
    fn_80267A1C(menu, arg);
}
