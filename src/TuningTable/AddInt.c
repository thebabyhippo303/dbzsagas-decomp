/* TuningTable__AddInt @ 0x80254490 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void VarInt__CreateSigned(void *, void *, void *, void *, void *, void *);
extern s32 lbl_803DCC10;
void TuningTable__AddInt(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    register void *a1 = arg1;
    register void *a0 = arg0;
    M2C_FIELD(a1, s32 *, 0) = arg3;
    if (M2C_FIELD(a0, s32 *, 0x1C) == 0) {
        return;
    }
    VarInt__CreateSigned((void *) lbl_803DCC10, M2C_FIELD(a0, void **, 0x1C), (void *) arg2, a1, 0, 0);
}
