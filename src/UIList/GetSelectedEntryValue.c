/* UIList__GetSelectedEntryValue @ 0x80135810 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    int unk0;
    int value;
} UIListEntry;

typedef struct {
    char pad[0x340];
    UIListEntry **entries;
    int count;
    char pad2[0x35C - 0x348];
    int selected_index;
} UIList;

int UIList__GetSelectedEntryValue(UIList *list) {
    int index;

    if (list->count != 0) {
        index = list->selected_index << 2;
        return (*(UIListEntry **)((char *)list->entries + index))->value;
    }
    return 0xBEEFBEEF;
}
