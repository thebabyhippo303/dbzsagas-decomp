/* Database__ReadObjectHeader @ 0x80206200 (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32;
void Database__ConsumeBufferBytes(int);
void Database__DiscardBufferBytes(int);
void * memcpy(void *, const void *, unsigned int);
extern u8 *lbl_803ADBFC __attribute__((section(".data")));
extern char lbl_803ADC30[] __attribute__((section(".data")));
extern s32 lbl_803DD5D4;
typedef struct L { u16 s8_; u16 s10_; u32 pad; u32 s16_; u32 s20_; } L;

s32 Database__ReadObjectHeader(void **arg0) {
    L l;
    u8 *p8; u8 *p10; u8 *p16; u8 *p20;
    u8 *h; u16 f; u32 n;
    h = lbl_803ADBFC;
    if (lbl_803DD5D4 != 0) {
        p8 = (u8 *)&l.s8_; p10 = (u8 *)&l.s10_; p16 = (u8 *)&l.s16_; p20 = (u8 *)&l.s20_;
        l.s8_ = *(u16 *)(h + 0);
        *(u8 *)&l.s10_ = p8[1];
        p10[1] = *(u8 *)&l.s8_;
        *(u16 *)(h + 0) = l.s10_;
        l.s8_ = *(u16 *)(h + 2);
        *(u8 *)&l.s10_ = p8[1];
        p10[1] = *(u8 *)&l.s8_;
        *(u16 *)(h + 2) = l.s10_;
        l.s16_ = *(u32 *)(h + 4);
        *(u8 *)&l.s20_ = p16[3];
        p20[1] = p16[2];
        p20[2] = p16[1];
        p20[3] = *(u8 *)&l.s16_;
        *(u32 *)(h + 4) = l.s20_;
        l.s8_ = *(u16 *)(h + 8);
        *(u8 *)&l.s10_ = p8[1];
        p10[1] = *(u8 *)&l.s8_;
        *(u16 *)(h + 8) = l.s10_;
    }
    f = *(u16 *)(h + 2);
    if (f & 8) {
        n = (f & 2) ? 0x40 : 0x20;
    } else {
        n = (f & 2) ? 0x2A : 0xA;
    }
    memcpy(lbl_803ADC30, h, n);
    if (!(*(s32 *)(lbl_803ADC30 - 0x4C) & 4) || (n & 0xA)) {
        Database__DiscardBufferBytes((s32)n);
    } else {
        Database__ConsumeBufferBytes((s32)n);
    }
    *arg0 = lbl_803ADBFC;
    return 1;
}
