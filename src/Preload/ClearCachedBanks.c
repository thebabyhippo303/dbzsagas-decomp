/* Preload__ClearCachedBanks @ 0x8012E76C (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct BankSlot {
    int id;
    void *name;
} BankSlot;

typedef struct BankList {
    int count;
    BankSlot *slots;
} BankList;

extern int lbl_803DCC20 __attribute__((section(".sdata")));
extern int lbl_803DD170 __attribute__((section(".sbss")));
extern BankSlot *lbl_803DD174 __attribute__((section(".sbss")));
extern int lbl_803DD178 __attribute__((section(".sbss")));
extern BankSlot *lbl_803DD17C __attribute__((section(".sbss")));

void fn_801907C4(int, int);
void fn_80184430(void *);

void Preload__ClearCachedBanks(void) {
    BankList *countA = (BankList *)&lbl_803DD170;
    BankList *countB = (BankList *)&lbl_803DD178;
    int i;
    void *p;
    int n;

    for (i = 0; i < lbl_803DD170; i++) {
        fn_801907C4(lbl_803DCC20, lbl_803DD174[i].id);
    }

    for (i = 0; i < lbl_803DD170; i++) {
        p = lbl_803DD174[i].name;
        if (p != 0) {
            fn_80184430(p);
        }
    }

    if (lbl_803DD174 != 0) {
        fn_80184430(lbl_803DD174);
    }

    n = lbl_803DD178;
    countA->slots = 0;
    countA->count = 0;
    i = 0;
    if (i < n) {
        do {
            p = lbl_803DD17C[i].name;
            if (p != 0) {
                fn_80184430(p);
            }
            i += 1;
        } while (i < lbl_803DD178);
    }

    if (lbl_803DD17C != 0) {
        fn_80184430(lbl_803DD17C);
    }
    countB->slots = 0;
    countB->count = 0;
}
