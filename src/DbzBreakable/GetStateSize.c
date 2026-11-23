/* DbzBreakable__GetStateSize @ 0x800EA24C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: DbzBreakable__GetStateSize @ 0x800EA24C (0x3C). ProDG -O2. */
extern int DbzBreakable__GetBaseStateSize(void *self);
extern int fn_802B4F6C(void *self);

int DbzBreakable__GetStateSize(void *self) {
    int base = DbzBreakable__GetBaseStateSize(self);
    return base + fn_802B4F6C(self);
}
