/* TriggerBox__GetStateSize @ 0x800FDF6C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: TriggerBox__GetStateSize @ 0x800FDF6C (0x3C). ProDG -O2. */
extern int TriggerBox__GetBaseStateSize(void *self);
extern int fn_802B4F6C(void *self);

int TriggerBox__GetStateSize(void *self) {
    int base = TriggerBox__GetBaseStateSize(self);
    return base + fn_802B4F6C(self);
}
