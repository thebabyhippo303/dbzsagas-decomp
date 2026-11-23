/* Environment__GetEntityTypeIndex @ 0x800EA2D8 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Environment__GetEntityTypeIndex @ 0x800EA2D8 (0x60). ProDG -O2. */
typedef struct {
    const char *name;
    int index;
    char pad[12];
} EnvEntityType;

extern EnvEntityType lbl_8033B220[];
extern int String__CompareIgnoreCase(const char *left, const char *right);

int Environment__GetEntityTypeIndex(const char *name) {
    int cursor = (int)lbl_8033B220;
    int end = cursor + 0x668;

    int result;

    do {
        if (String__CompareIgnoreCase(*(const char **)cursor, name) != 0)
            goto next;
        result = *(int *)(cursor + 4);
        goto done;
    next:
        cursor += 20;
    } while (cursor < end);
    result = -1;
done:
    return result;
}
