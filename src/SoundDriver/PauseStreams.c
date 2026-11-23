/* SoundDriver__PauseStreams @ 0x80193C0C (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct List { void **items; s32 count; } List;
typedef struct Driver { List *list; } Driver;

void *StreamTable__GetStream(void *, s32);
s32 StreamTable__GetCount(void *);
void fn_801971EC(void *);

static inline void **ListGet(List *l, s32 i) {
    s32 idx = i;
    if (i < 0) {
        idx = l->count - 1;
    }
    if (idx >= l->count || l->count == 0) {
        return 0;
    }
    return &l->items[idx];
}

void SoundDriver__PauseStreams(Driver *d) {
    s32 i;
    s32 j;
    char *table;
    void *stream;
    i = 0;
    if (i < d->list->count) {
        do {
            table = *ListGet(d->list, i);
            for (j = 0; j < StreamTable__GetCount(table); j++) {
                stream = StreamTable__GetStream(table, j);
                if (stream != 0) {
                    fn_801971EC(stream);
                }
            }
            i++;
        } while (i < d->list->count);
    }
}
