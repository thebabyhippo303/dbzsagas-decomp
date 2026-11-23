/* ShadowMgr__CreateShadow @ 0x8022D17C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void *ShadowMgr__AllocEntry(void);
void SList__PushFront(void *, s32);
void ShadowMgr__AddLight(void *, void *, f32);
extern char lbl_803ADB30[] __attribute__((section(".bss")));
void *ShadowMgr__CreateShadow(s32 arg0, void *arg1, f32 farg) {
    void *e = ShadowMgr__AllocEntry();
    if (e == NULL) {
        return NULL;
    }
    SList__PushFront(lbl_803ADB30, (s32)e);
    M2C_FIELD(e, s32 *, 4) = arg0;
    M2C_FIELD(e, s32 *, 0x18) = 0;
    M2C_FIELD(e, s32 *, 0x8C) = 1;
    if (arg1 != NULL) {
        ShadowMgr__AddLight(M2C_FIELD(e, void **, 0x90), arg1, farg);
    }
    return M2C_FIELD(e, void **, 0x90);
}
