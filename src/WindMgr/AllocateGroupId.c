/* WindMgr__AllocateGroupId @ 0x80217870 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char list0[12];
    char list1[12];
    void *entries;
    s32 f1C;
    s32 count;
    s32 f24;
    u16 f28;
    char pad2[2];
    void *f2C;
    char pad3[8];
} WindMgrState;

s32 WindMgr__IsGroupIdInUse(s32 arg0);
extern WindMgrState lbl_803ADCB0 __attribute__((section(".data")));

s32 WindMgr__AllocateGroupId(void) {
    s32 id;

    if (lbl_803ADCB0.f28 > 40959) {
        lbl_803ADCB0.f24 = 1;
        lbl_803ADCB0.f28 = 0x9000;
    }
    while (WindMgr__IsGroupIdInUse(lbl_803ADCB0.f28)) {
        lbl_803ADCB0.f28++;
    }
    id = lbl_803ADCB0.f28++;
    return id;
}
