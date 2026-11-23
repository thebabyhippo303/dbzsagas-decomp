/* CActor__Construct @ 0x801DC10C (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define F(e, t, o) (*(t)((char *)(e) + (o)))
extern char lbl_80344D20 __attribute__((section(".data")));
extern char lbl_80344DF0 __attribute__((section(".data")));
extern s32 lbl_803DD180;
extern s32 lbl_803DD1B0;
extern void CActor__InitMembers(void *);

void *CActor__Construct(void *self, void *src) {
    void *t;
    F(self, void **, 0x34) = &lbl_80344DF0;
    F(self, s32 *, 0) = F(src, s32 *, 0);
    F(self, s32 *, 4) = F(src, s32 *, 4);
    F(self, s32 *, 8) = F(src, s32 *, 8);
    t = F(src, s32 *, 0xC);
    F(self, s32 *, 0x10) = 0;
    F(self, s32 *, 0x14) = 0;
    F(self, s32 *, 0x18) = 0;
    F(self, s32 *, 0x1C) = 0;
    F(self, s32 *, 0x20) = 0;
    F(self, s32 *, 0xC) = t;
    F(self, s32 *, 0x10) = lbl_803DD180;
    F(self, s32 *, 0x14) = lbl_803DD1B0;
    F(self, s32 *, 0x18) = lbl_803DD180;
    F(self, s32 *, 0x1C) = lbl_803DD180;
    F(self, s32 *, 0x20) = lbl_803DD180;
    F(self, s32 *, 0x24) = 1;
    F(self, s32 *, 0x28) = 0;
    F(self, s32 *, 0x2C) = 0;
    F(self, s32 *, 0x30) = 0x8FDB77BE;
    F(self, void **, 0x34) = &lbl_80344D20;
    CActor__InitMembers(self);
    return self;
}
