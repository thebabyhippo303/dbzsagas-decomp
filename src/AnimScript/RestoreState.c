/* AnimScript__RestoreState @ 0x802350E0 (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AnimScript__FreeStringVars(void *);
void *memcpy(void *, const void *, u32);
void AnimScript__CloneStringVars(void *, void *);
void AnimScript__MakeStackAbsolute(s32, void *);
void AnimScript__ConvertObjectVars(void *, s32, s32);

s32 AnimScript__RestoreState(void *arg0, void *arg1, s32 arg2) {
    void *src;
    s32 mask;
    s32 total;
    s32 idx;
    s32 off;
    void *slot;
    void *aux;
    s32 stackbase;
    s32 oldpc;
    s32 bit;
    s32 stride;
    s32 sz;

    src = arg1;
    mask = arg2;
    total = 0;
    idx = 0;
    off = 0;
    do {
        char *bs;
        bs = (char *)arg0 + 0xF0;
        slot = *(void **)(bs + off);
        if (slot == NULL) {
            goto next;
        }
        if (M2C_FIELD(slot, u8 *, 5) == 0) {
            goto next;
        }
        bit = 1 << idx;
        if ((mask & bit) == 0) {
            goto next;
        }
        aux = M2C_FIELD(slot, void **, 0x1C);
        stackbase = M2C_FIELD(aux, s32 *, 0x20);
        M2C_FIELD(slot, u8 *, 9) = M2C_FIELD(src, u8 *, 7);
        oldpc = M2C_FIELD(slot, s32 *, 0xC);
        M2C_FIELD(slot, u8 *, 8) = M2C_FIELD(src, u8 *, 3);
        M2C_FIELD(slot, s32 *, 0x3C) = M2C_FIELD(src, s32 *, 0xC);
        M2C_FIELD(slot, s32 *, 0x40) = M2C_FIELD(src, s32 *, 0x10);
        M2C_FIELD(slot, u8 *, 6) = M2C_FIELD(src, u8 *, 0x1F);
        M2C_FIELD(slot, u8 *, 7) = M2C_FIELD(src, u8 *, 0x23);
        if (oldpc != 0) {
            M2C_FIELD(slot, s32 *, 0xC) = stackbase + M2C_FIELD(src, s32 *, 8);
        }
        M2C_FIELD(slot, s32 *, 0x10) = M2C_FIELD(src, s32 *, 0x28);
        M2C_FIELD(slot, s32 *, 0x14) = M2C_FIELD(src, s32 *, 0x2C);
        M2C_FIELD(slot, s16 *, 0xA) = M2C_FIELD(src, s16 *, 0x24);
        M2C_FIELD(slot, u8 *, 4) = M2C_FIELD(src, u8 *, 0x26);
        M2C_FIELD(arg0, s32 *, 0x104) = M2C_FIELD(src, s32 *, 0x18);
        AnimScript__FreeStringVars(slot);
        memcpy(M2C_FIELD(slot, void **, 0x44), (char *)src + 52, M2C_FIELD(slot, s32 *, 0x3C));
        AnimScript__CloneStringVars(slot, src);
        AnimScript__MakeStackAbsolute(stackbase, slot);
        stride = M2C_FIELD(slot, s32 *, 0x40) + 52;
        sz = M2C_FIELD(slot, s32 *, 0x3C) + stride;
        sz = sz + (((sz ^ 15) + 1) & 15);
        src = (char *)src + sz;
        total = total + sz;
        AnimScript__ConvertObjectVars(arg0, idx, 0);
next:
        idx = idx + 1;
        off = off + 4;
    } while (idx <= 3);
    return total;
}
