/* Device__GetStateSize @ 0x800E5538 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Device__GetStateSize @ 0x800E5538 (0x3C). ProDG -O2. */
extern int Device__GetBaseStateSize(void *self);
extern int Floater__GetStateSize(void *self);

int Device__GetStateSize(void *self) {
    return Device__GetBaseStateSize(self) + Floater__GetStateSize(self);
}
