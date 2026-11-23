/* SaveGame__ReadRecordTable @ 0x8014F93C (size: 0x258, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32;
typedef struct { s32 w[40]; } Rec;
s32 SaveGame__GetRecordIndexForLevel(void *, s32);
s32 SaveGame__VerifySmallBlockHash(void *, void *, void *);
s32 fn_8014E96C(s32);
extern char *lbl_803DCC70;

typedef s32 (*FnA)(char *, s32);
typedef s32 (*FnB)(char *, char *, s32, s32);

#define VT(o) (*(char **)((o) + 0xC))
#define ADJ(o, a) ((o) + *(s16 *)(VT(o) + (a)))

s32 SaveGame__ReadRecordTable(char *self) {
    Rec local;
    s32 ret;
    char *buf1;
    char *buf2;
    s32 idx;
    Rec *lp;
    Rec *lq;
    s32 ctr;
    char *p;

    buf1 = *(char **)(self + 0x30);
    buf2 = *(char **)(self + 0x40);
    idx = SaveGame__GetRecordIndexForLevel(self, 99);
    lp = &local;
    lq = lp;
    *lp = *(Rec *)(buf1 + idx * 160);
    ret = (*(FnA *)(VT(lbl_803DCC70) + 0x9C))(ADJ(lbl_803DCC70, 0x98), *(s32 *)(self + 0x28));
    if (ret != 0) {
        return ret;
    }
    (*(FnA *)(VT(lbl_803DCC70) + 0x14))(ADJ(lbl_803DCC70, 0x10), 0);
    (*(FnA *)(VT(lbl_803DCC70) + 0x1C))(ADJ(lbl_803DCC70, 0x18), 0);
    ret = (*(FnB *)(VT(lbl_803DCC70) + 0x64))(ADJ(lbl_803DCC70, 0x60), buf2, 496, 0);
    if (ret != 0) {
        return ret;
    }
    *(Rec *)(idx * 160 + buf1) = local;
    if (SaveGame__VerifySmallBlockHash(self, buf2, buf1) == 0) {
        return 7;
    } else {
        idx = SaveGame__GetRecordIndexForLevel(self, *(s32 *)buf1);
        *(s32 *)(self + 8) = fn_8014E96C((s32)self);
        ctr = 3;
        p = buf1;
        do {
            if (*(s32 *)(p + 0x50) != 0 && *(s32 *)(p + 0x3C) != 99) {
                s32 t = *(s32 *)(p + 8);
                *(s32 *)(self + 8) = *(s32 *)(self + 8) + (t + (((t ^ 15) + 1) & 15));
            }
            p += 160;
            ctr--;
        } while (ctr != 0);
        *(char **)(self + 0x20) = buf1 + idx * 160;
        return ret;
    }
}
