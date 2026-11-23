/* Database__GetLinkedValueForObject @ 0x80206758 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__GetLinkedValueForObject @ 0x80206758 (0x8C). ProDG -O2. */
extern void *Database__GetTypedObject(int type, const char *name, void *db, int flags);
extern void *Database__GetArrayElement(void *array, unsigned int index);
extern char lbl_80345C10[] __attribute__((section(".data")));
extern void *lbl_803B1E94 __attribute__((section(".data")));

int Database__GetLinkedValueForObject(void *object) {
    unsigned short *array;
    unsigned int index;

    array = Database__GetTypedObject(96, lbl_80345C10, lbl_803B1E94, 0);
    if (array != 0) {
        index = 0;
        if (index < *array) {
            do {
                if (object == Database__GetArrayElement(array, index)) {
                    return *(int *)((char *)object + 156);
                }
                index += 1;
            } while (index < *array);
        }
    }
    return 0;
}
