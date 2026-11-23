/* SaveGame__ValidateRecordTable @ 0x8014F678 (size: 0x234, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16; typedef int s32;
typedef struct { s32 w[40]; } Rec;
s32 SaveGame__GetRecordIndexForLevel(void *, s32);
s32 SaveGame__VerifySmallBlockHash(void *, void *, void *);
extern char *lbl_803DCC70;

typedef s32 (*FnA)(char *, s32);
typedef s32 (*FnB)(char *, char *, s32, s32);
typedef void (*FnC)(char *, char *);
typedef char *(*FnD)(char *, s32);

#define VT(o) (*(char **)((o) + 0xC))
#define ADJ(o, a) ((o) + *(s16 *)(VT(o) + (a)))

s32 SaveGame__ValidateRecordTable(char *self) {
    Rec local;
    s32 idx;
    s32 ret;
    s32 ok;
    char *buf;
    Rec *lq;
    Rec *lp;

    lp = &local;
    idx = SaveGame__GetRecordIndexForLevel(self, 99);
    ok = 1;
    lq = lp;
    *lp = *(Rec *)(*(char **)(self + 0x30) + idx * 160);
    ret = (*(FnA *)(VT(lbl_803DCC70) + 0x9C))(ADJ(lbl_803DCC70, 0x98), *(s32 *)(self + 0x28));
    if (ret == 0) {
        ret = (*(FnA *)(VT(lbl_803DCC70) + 0x14))(ADJ(lbl_803DCC70, 0x10), 0);
        (*(FnA *)(VT(lbl_803DCC70) + 0x1C))(ADJ(lbl_803DCC70, 0x18), 0);
        if (ret == 0) {
            buf = (*(FnD *)(VT(lbl_803DCC70) + 0xA4))(ADJ(lbl_803DCC70, 0xA0), 496);
            ret = (*(FnB *)(VT(lbl_803DCC70) + 0x64))(ADJ(lbl_803DCC70, 0x60), buf, 496, 0);
            *(Rec *)(idx * 160 + *(char **)(self + 0x30)) = local;
            if (ret == 0) {
                ok = SaveGame__VerifySmallBlockHash(self, buf, buf + 16);
            }
            (*(FnC *)(VT(lbl_803DCC70) + 0xAC))(ADJ(lbl_803DCC70, 0xA8), buf);
            if (ok == 0) {
                ret = 7;
            }
        }
    }
    return ret;
}
