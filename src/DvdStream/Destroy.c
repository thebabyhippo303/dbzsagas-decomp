/* DvdStream__Destroy @ 0x80197434 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void AISetStreamVolLeft(s32);
void AISetStreamVolRight(s32);
M2C_UNK AISetStreamPlayState(s32);
M2C_UNK DVDCancel(s32);
M2C_UNK DVDCancelStreamAsync(s32, s32);
M2C_UNK DVDClose(s32);
extern M2C_UNK lbl_8033FDB0 __attribute__((section(".data")));
extern M2C_UNK lbl_803403F8 __attribute__((section(".data")));
extern M2C_UNK lbl_803DC2D8 __attribute__((section(".data")));
extern M2C_UNK lbl_803DC314 __attribute__((section(".data")));

void DvdStream__Destroy(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &lbl_8033FDB0;
    AISetStreamVolLeft(0);
    AISetStreamVolRight(0);
    AISetStreamPlayState(0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        DVDCancel((s32) &lbl_803DC314);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        DVDCancel((s32) &lbl_803DC2D8);
        DVDCancelStreamAsync((s32) &lbl_803DC2D8, 0);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        DVDClose((s32) &lbl_803DC2D8);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &lbl_803403F8;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
