/* Missile__GetStateSize @ 0x800DB3F4 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Missile__GetStateSize @ 0x800DB3F4 (0x3C). ProDG -O2. */
extern int Missile__GetBaseStateSize(void);
extern int Weapon__GetStateSize(void *self);

int Missile__GetStateSize(void *self) {
    return Missile__GetBaseStateSize() + Weapon__GetStateSize(self);
}
