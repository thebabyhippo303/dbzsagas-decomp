/* Instance__FindInArrayByName @ 0x802529A4 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Instance__FindInArrayByName @ 0x802529A4 (0x80). ProDG -O2. */
typedef struct {
    unsigned short count;
} InstanceArray;

extern void *Database__GetArrayElement(InstanceArray *array, unsigned int index);
extern int String__CompareIgnoreCase(const char *left, const char *right);

void *Instance__FindInArrayByName(void *finder, InstanceArray *array, const char *name) {
    unsigned int i;

    for (i = 0; i < array->count; i++) {
        char *elem = Database__GetArrayElement(array, i);
        if (String__CompareIgnoreCase(name, *(char **)(elem + 148) + 32) == 0)
            return elem;
    }
    return 0;
}
