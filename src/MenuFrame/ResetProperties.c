/* MenuFrame__ResetProperties @ 0x80266C64 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__ResetProperties(void *);
void MenuPanelBox__ResetProperties(void *);
extern float lbl_80349D40 __attribute__((section(".rodata")));
extern float lbl_80349D44 __attribute__((section(".rodata")));
extern float lbl_80349D48 __attribute__((section(".rodata")));

typedef struct {
    char pad[0x388];
    short adjustA;
    short unusedA;
    void *fnA;
    short adjustB;
    short unusedB;
    void *fnB;
    short adjustC;
    short unusedC;
    void *fnC;
} Sub3VT;

void MenuFrame__ResetProperties(void *arg0) {
    Sub3VT *subA;
    Sub3VT *subB;
    Sub3VT *subC;
    Sphere__ResetProperties(arg0);
    MenuPanelBox__ResetProperties((char *)arg0 + 420);
    MenuPanelBox__ResetProperties((char *)arg0 + 12168);
    subA = *(Sub3VT **)((char *)arg0 + 412);
    ((void (*)(void *, float, float, float, float))subA->fnA)((char *)arg0 + subA->adjustA, lbl_80349D40, lbl_80349D40, lbl_80349D40, lbl_80349D40);
    subB = *(Sub3VT **)((char *)arg0 + 412);
    ((void (*)(void *, float, float, float))subB->fnB)((char *)arg0 + subB->adjustB, lbl_80349D44, lbl_80349D44, lbl_80349D48);
    subC = *(Sub3VT **)((char *)arg0 + 412);
    ((void (*)(void *, int, int, int, int))subC->fnC)((char *)arg0 + subC->adjustC, 0, 255, 2, 2);
}
