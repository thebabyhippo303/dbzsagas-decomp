/* Pickup__FindIndexByTypeId @ 0x800F15AC (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__FindIndexByTypeId @ 0x800F15AC (0x3C). ProDG -O2. */
extern int lbl_80323D0C[];

int Pickup__FindIndexByTypeId(int type_id) {
    int *entry = lbl_80323D0C;
    int index;

    ++entry;
    for (index = 0; index < 11; ++index) {
        int value = *entry;
        entry += 0x4C / 4;
        if (value == type_id) {
            return index;
        }
    }
    return -1;
}
