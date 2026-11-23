/* WeaponInventory__Construct @ 0x800DEF54 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: WeaponInventory__Construct @ 0x800DEF54 (0x34). ProDG -O2. */
unsigned int *WeaponInventory__Construct(unsigned int *self, unsigned int value) {
    unsigned int *current;
    int i;

    self[0] = value;
    current = self + 1;
    for (i = 0; i < 92; i++)
        *current++ = 0;
    self[93] = 92;
    return self;
}
