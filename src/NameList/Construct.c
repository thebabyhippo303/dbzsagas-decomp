/* NameList__Construct @ 0x80254888 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct NameList {
    s32 unk0;
    void *vt;
    s32 unk8;
} NameList;
extern char lbl_80348670[] __attribute__((section(".data")));

NameList *NameList__Construct(NameList *self) {
    NameList *p = self;
    p->vt = lbl_80348670;
    p->unk0 = 0;
    p->unk8 = 0;
    return self;
}
