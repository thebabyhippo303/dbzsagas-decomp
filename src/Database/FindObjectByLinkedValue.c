/* Database__FindObjectByLinkedValue @ 0x802067E4 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__FindObjectByLinkedValue @ 0x802067E4 (0x88). ProDG -O2. */
extern void *Database__GetTypedObject(int type, const char *name, void *db, int flags);
extern void *Database__GetArrayElement(void *array, unsigned int index);
extern char lbl_80345C10[] __attribute__((section(".data")));
extern void *lbl_803B1E94 __attribute__((section(".data")));

void *Database__FindObjectByLinkedValue(int key) {
    unsigned short *array;
    unsigned int index;
    void *element;

    array = Database__GetTypedObject(96, lbl_80345C10, lbl_803B1E94, 0);
    if (array != 0) {
        index = 0;
        if (index < *array) {
            do {
                element = Database__GetArrayElement(array, index);
                if (key == *(int *)((char *)element + 156)) {
                    return element;
                }
                index += 1;
            } while (index < *array);
        }
    }
    return 0;
}
