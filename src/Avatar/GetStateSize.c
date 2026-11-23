/* Avatar__GetStateSize @ 0x800B5634 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetStateSize @ 0x800B5634 (0x3C). ProDG -O2. */
extern int Avatar__GetBaseStateSize(void *self);
extern int Avatar__GetActiveStateSize(void *self);

int Avatar__GetStateSize(void *self) {
    int base = Avatar__GetBaseStateSize(self);
    return base + Avatar__GetActiveStateSize(self);
}
