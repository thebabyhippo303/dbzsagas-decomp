/* Pickup__GetStateSize @ 0x800F2B08 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__GetStateSize @ 0x800F2B08 (0x3C). ProDG -O2. */
extern int Pickup__GetBaseStateSize(void);
extern int fn_802BCBD0(void *self);

int Pickup__GetStateSize(void *self) {
	return Pickup__GetBaseStateSize() + fn_802BCBD0(self);
}
