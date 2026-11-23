/* PersistentData__MarkPickupCollected @ 0x80129044 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Lvl { char pad[4]; int idx; } Lvl;
typedef struct Game { char pad[568]; Lvl *lvl; } Game;
extern char *lbl_803DC368;
extern Game *lbl_803DC3C0;
extern char lbl_80327910[];
extern char lbl_803278EC[];
extern char lbl_803278C8[];
int sprintf(char *, const char *, ...);
int PersistentData__GetGlobalImpl(void *, char *);
void PersistentData__SetGlobalImpl(void *, char *, int);

void PersistentData__MarkPickupCollected(void *self, int type, int bit) {
    char buf[24];
    unsigned mask = 1 << bit;
    int level = lbl_803DC3C0->lvl->idx - 2;
    int v;
    switch (type) {
    case 9:
        sprintf(buf, lbl_80327910, level);
        v = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, buf);
        PersistentData__SetGlobalImpl(lbl_803DC368 + 300, buf, mask | v);
        break;
    case 10:
        sprintf(buf, lbl_803278EC, level);
        v = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, buf);
        PersistentData__SetGlobalImpl(lbl_803DC368 + 300, buf, mask | v);
        break;
    case 8:
        sprintf(buf, lbl_803278C8, level);
        v = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, buf);
        PersistentData__SetGlobalImpl(lbl_803DC368 + 300, buf, mask | v);
        break;
    }
}
