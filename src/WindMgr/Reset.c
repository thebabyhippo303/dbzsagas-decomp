/* WindMgr__Reset @ 0x80217668 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct WindNode {
    s32 f0;
    s32 f4;
    char pad[0x84 - 8];
    struct WindNode *next;
} WindNode;

typedef struct {
    WindNode *head;
    char pad[0x24 - 4];
    s32 f24;
    s16 f28;
    char pad2[0x34 - 0x2A];
    s32 f34;
} WindState;

void WindMgr__FreeAll(void);
extern WindState lbl_803ADCB0 __attribute__((section(".data")));

void WindMgr__Reset(void) {
    WindNode *p;

    WindMgr__FreeAll();
    p = lbl_803ADCB0.head;
    lbl_803ADCB0.f34 = 0;
    lbl_803ADCB0.f28 = 0x9000;
    lbl_803ADCB0.f24 = 0;
    if (p != NULL) {
        do {
            p->f4 = 0;
            p = p->next;
        } while (p != NULL);
    }
}
