/* NamedPoint__FindInArrayByName @ 0x80252AD8 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: NamedPoint__FindInArrayByName @ 0x80252AD8 (0x7C). ProDG -O2. */
typedef struct {
    unsigned short count;
} NamedPointArray;

extern void *Database__GetArrayElement(NamedPointArray *array, unsigned int index);
extern int String__CompareIgnoreCase(const char *left, const char *right);

void *NamedPoint__FindInArrayByName(void *finder, NamedPointArray *array, const char *name) {
    unsigned int i;

    for (i = 0; i < array->count; i++) {
        void *point = Database__GetArrayElement(array, i);
        if (String__CompareIgnoreCase(name, (char *)point + 12) == 0)
            return point;
    }
    return 0;
}
