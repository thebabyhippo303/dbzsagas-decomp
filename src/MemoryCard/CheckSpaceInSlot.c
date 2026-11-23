/* MemoryCard__CheckSpaceInSlot @ 0x801D736C (size: 0x130, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
typedef struct VT {
    char pad[48];
    short adjust;
    short pad1;
    u32 (*bytesToBlocks)(void *self, u32 bytes);
} VT;
typedef struct MemoryCard {
    char pad[12];
    VT *vtable;
    char pad2[0x54];
    s32 cardId;
    s32 pad3;
    s32 results[2];
    char buf[1];
} MemoryCard;
s32 MemoryCard__TranslateCardResult(void *, s32);
s32 fn_802D9A9C(s32, s32 *, s32 *);
s32 fn_802DCA84(s32, s32, void *);
void fn_802DCBA0(void *);
s32 MemoryCard__CheckSpaceInSlot(MemoryCard *arg0, s32 arg1, u32 arg2, u32 *arg3) {
    s32 spC;
    s32 sp8;
    s32 err;
    s32 r;
    u32 blocks;
    VT *vt;

    vt = arg0->vtable;
    *arg3 = vt->bytesToBlocks((char *)arg0 + vt->adjust, arg2);
    err = fn_802D9A9C(arg1, &sp8, &spC);
    if (err != 0) {
        r = MemoryCard__TranslateCardResult(arg0, err);
        arg0->results[arg1] = r;
        return r;
    } else {
        vt = arg0->vtable;
        blocks = vt->bytesToBlocks((char *)arg0 + vt->adjust, sp8);
        err = fn_802DCA84(arg1, arg0->cardId, arg0->buf);
        if (err == 0) {
            fn_802DCBA0(arg0->buf);
            arg0->results[arg1] = err;
            return 0;
        }
        if (blocks < *arg3) {
            arg0->results[arg1] = 4;
            return 4;
        } else if (spC == 0) {
            arg0->results[arg1] = 5;
            return 5;
        } else {
            arg0->results[arg1] = 0;
            return 0;
        }
    }
}
