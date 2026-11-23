/* Sphere__UpdateAllRegistered @ 0x8026B904 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern char lbl_80375778[] __attribute__((section(".data")));
extern void *lbl_803DD918 __attribute__((section(".sdata")));
extern s32 lbl_803DD91C __attribute__((section(".sdata")));

void Sphere__UpdateAllRegistered(void) {
    s32 ctr;
    char *p;
    void *obj;
    void *vtbl;

    ctr = 0xF;
    obj = lbl_803DD918;
    p = lbl_80375778;
    p += 0x3C;
    do {
        M2C_FIELD(p, s32 *, 0) = M2C_FIELD(p, s32 *, -4);
        p -= 4;
        ctr -= 1;
    } while (ctr != 0);
    if (obj != NULL) {
        do {
            M2C_FIELD(obj, s32 *, 0x194) = 0;
            vtbl = M2C_FIELD(obj, void **, 0x19C);
            M2C_FIELD(vtbl, void (**)(void *), 0x44)((char *)obj + M2C_FIELD(vtbl, s16 *, 0x40));
            obj = M2C_FIELD(obj, void **, 0x18C);
        } while (obj != NULL);
    }
    *(s32 *)lbl_80375778 = 0;
    lbl_803DD918 = NULL;
    lbl_803DD91C = 0;
}
