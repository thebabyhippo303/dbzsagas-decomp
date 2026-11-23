/* Exploder__GetStateSize @ 0x800EFA4C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Exploder__GetStateSize @ 0x800EFA4C (0x3C). ProDG -O2. */
extern int Exploder__GetBaseStateSize(void *self);
extern int fn_802B4F6C(void *self);

int Exploder__GetStateSize(void *self) {
    int base = Exploder__GetBaseStateSize(self);
    return base + fn_802B4F6C(self);
}
