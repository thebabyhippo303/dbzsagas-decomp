/* Fighter__Construct @ 0x800EFAD8 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__Construct @ 0x800EFAD8 (0x7C). ProDG -O2. */
extern void Simple__ConstructDefault(void *self, void *type);
extern unsigned int *WeaponInventory__Construct(unsigned int *self, unsigned int value);

extern char lbl_803946A4[];
extern char lbl_80332AF0[];
extern char lbl_80332AD0[];
extern char lbl_80332A00[];
extern char lbl_80332B98[];

void *Fighter__Construct(char *self) {
    Simple__ConstructDefault(self, lbl_803946A4);
    *(void **)(self + 0x198) = lbl_80332AF0;
    *(void **)(self + 0x1B4) = lbl_80332AD0;
    *(void **)(self + 0x4C8) = lbl_80332A00;
    *(void **)(self + 0x34) = lbl_80332B98;
    WeaponInventory__Construct((unsigned int *)(self + 0x5E8), 0);
    *(int *)(self + 0x788) = 0;
    return self;
}
