/* MenuPanelBox__Destroy @ 0x80273BF8 (size: 0x1A8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef short s16;
#define NULL 0
void Sphere__DestroyCore(void *, s32);
void SphereText__Destroy(void *, s32);
extern char lbl_8034D380[] __attribute__((section(".data")));

void MenuPanelBox__Destroy(char *arg0, s32 arg1) {
    char *p;
    void *vt;

    *(char **)(arg0 + 0x19C) = lbl_8034D380;
    SphereText__Destroy(arg0 + 0x2BE0, 2);
    p = arg0 + 0x2A40;
    Sphere__DestroyCore(p, 2);
    if (arg0 + 0x2220 != NULL) {
        if (arg0 + 0x2220 != p) {
            do {
                p -= 0x1A0;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while (arg0 + 0x2220 != p);
        }
    }
    p = arg0 + 0x2080;
    Sphere__DestroyCore(p, 2);
    if (arg0 + 0x1860 != NULL) {
        if (arg0 + 0x1860 != p) {
            do {
                p -= 0x1A0;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while (arg0 + 0x1860 != p);
        }
    }
    Sphere__DestroyCore(arg0 + 0x16C0, 2);
    if (arg0 + 0xEA0 != NULL) {
        p = arg0 + 0x16C0;
        if (arg0 + 0xEA0 != p) {
            do {
                p -= 0x1A0;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while (arg0 + 0xEA0 != p);
        }
    }
    Sphere__DestroyCore(arg0 + 0xD00, 2);
    if (arg0 + 0x4E0 != NULL) {
        p = arg0 + 0xD00;
        if (arg0 + 0x4E0 != p) {
            do {
                p -= 0x1A0;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while (arg0 + 0x4E0 != p);
        }
    }
    Sphere__DestroyCore(arg0 + 0x340, 2);
    Sphere__DestroyCore(arg0 + 0x1A0, 2);
    Sphere__DestroyCore(arg0, arg1);
}
