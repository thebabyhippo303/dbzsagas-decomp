/* LetterBox__Update @ 0x8011A22C (size: 0x19C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef short s16;
typedef float f32;

void *fn_8022A3E4(s32);

extern f32 lbl_80327074 __attribute__((section(".rodata")));
extern f32 lbl_80327078 __attribute__((section(".rodata")));
extern f32 lbl_8032707C __attribute__((section(".rodata")));
extern f32 lbl_80327080 __attribute__((section(".rodata")));
extern f32 lbl_80327084 __attribute__((section(".rodata")));
extern f32 lbl_803A35C4 __attribute__((section(".bss")));

extern s32 lbl_803DD998;
extern f32 lbl_803DD974;
extern f32 lbl_803DD978;
extern f32 lbl_803DD97C;
extern f32 lbl_803DD980;
extern f32 lbl_803DD984;
extern f32 lbl_803DD988;
extern f32 lbl_803DD98C;
extern void *lbl_803DD990;
extern void *lbl_803DD994;
extern f32 lbl_803DD168;
extern f32 lbl_803DD16C;

void LetterBox__Update(void) {
    f32 limit;
    f32 t;
    f32 span;
    f32 eased;
    f32 y;
    f32 k;
    void *obj2;
    void *obj2_b;
    void *vt2;
    void *vt2_b;
    void *node;
    void *obj;
    void *vt;

    if (lbl_803DD998 == 0) {
        return;
    }
    limit = lbl_80327074;
    t = (lbl_803A35C4 - lbl_803DD97C) / lbl_803DD980;
    if (!(t <= limit)) {
        lbl_803DD998 = 0;
        t = limit;
    }
    span = lbl_80327078 - (t + t);
    eased = ((lbl_803DD978 - lbl_803DD974) * span * t * t) + lbl_803DD974;
    node = (char *)fn_8022A3E4(0) + 12;
    if (*(f32 *)((char *)node + 8) != eased) {
        *(f32 *)((char *)node + 8) = eased;
        *(s32 *)((char *)node + 136) = 1;
        *(s32 *)((char *)node + 104) = 1;
    }
    obj = lbl_803DD990;
    y = ((lbl_803DD988 - lbl_803DD984) * span * t * t) + lbl_803DD984;
    vt = *(void **)((char *)obj + 412);
    (*(void (**)(void *, f32, f32))((char *)vt + 172))((char *)obj + *(s16 *)((char *)vt + 168), lbl_8032707C, y - lbl_803DD98C);
    obj = lbl_803DD990;
    vt = *(void **)((char *)obj + 412);
    (*(void (**)(void *))((char *)vt + 60))((char *)obj + *(s16 *)((char *)vt + 56));
    k = lbl_80327080;
    obj2 = lbl_803DD994;
    vt2 = *(void **)((char *)obj2 + 412);
    (*(void (**)(void *, f32, f32))((char *)vt2 + 172))((char *)obj2 + *(s16 *)((char *)vt2 + 168), lbl_8032707C, k - y);
    obj2_b = lbl_803DD994;
    vt2_b = *(void **)((char *)obj2_b + 412);
    (*(void (**)(void *))((char *)vt2_b + 60))((char *)obj2_b + *(s16 *)((char *)vt2_b + 56));
    lbl_803DD168 = limit;
    lbl_803DD16C = (k - (y + y)) * lbl_80327084;
}
