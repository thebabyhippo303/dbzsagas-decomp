/* EXIChannel2__ReadMailboxHeader @ 0x8017D454 (size: 0xAC, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 EXIChannel2__TransferImmediate(s32 *, s32, s32);

s32 EXIChannel2__ReadMailboxHeader(s32 *arg) {
    u32 sp24;
    volatile u32 *E = (volatile u32 *)0xCC000000;
    volatile u32 *A;
    volatile u32 *B;
    s32 f1;
    s32 f2;
    u32 v;
    u32 rv;
    s32 rc;

    sp24 = 0x60000000;
    A = E + 0x1A00;
    A[10] = ((E[0x1A0A] & 0x405) | 0xC0);
    f1 = (EXIChannel2__TransferImmediate((s32 *)&sp24, 2, 1) == 0);
    B = E + 0x1A00;
    do {
        v = B[13];
        B += 13;
    } while ((v & 1) != 0);
    f2 = (EXIChannel2__TransferImmediate((s32 *)arg, 4, 0) == 0);
    {
        s32 t = f1 | f2;
        do {
            v = *B;
        } while ((v & 1) != 0);
        rv = *A;
        rc = (t == 0);
        *A = rv & 0x405;
        return rc;
    }
}
