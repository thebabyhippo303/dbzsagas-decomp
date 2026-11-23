/* Fighter__GetStateSize @ 0x800F02C0 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__SerializeState @ 0x800F02C0 (0x3C). ProDG -O2. */
extern int Fighter__GetBaseStateSize(void);
extern int fn_802BCBD0(void *fighter);

int Fighter__SerializeState(void *fighter) {
    int base_size = Fighter__GetBaseStateSize();
    return base_size + fn_802BCBD0(fighter);
}
