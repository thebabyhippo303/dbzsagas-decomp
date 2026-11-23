/* MusicStreamQueue__ClearTracks @ 0x801922B8 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct Track { char pad[0x4C]; void *buf; } Track;
typedef struct TrackArr { Track *items; s32 count; s32 cap; s32 pad; s32 flag; } TrackArr;
typedef struct Queue { char pad[0xB4]; TrackArr tracks; } Queue;

void Mem__DeleteArray(void *);
void *memset(void *, int, unsigned long);

static inline Track *TrackGet(TrackArr *a, s32 i) {
    s32 idx = i;
    if (i < 0) {
        idx = a->count - 1;
    }
    if (idx >= a->count || a->count == 0) {
        return 0;
    }
    return &a->items[idx];
}

void MusicStreamQueue__ClearTracks(Queue *q) {
    s32 i = 0;
    TrackArr *a;
    TrackArr *c;
    void *b;
    a = &q->tracks;
    if (i < a->count) {
        do {
            b = TrackGet(a, i)->buf;
            if (b != 0) {
                Mem__DeleteArray(b);
            }
            i++;
        } while (i < a->count);
    }
    c = &q->tracks;
    if (c->flag != 0 && q->tracks.items != 0) {
        memset(q->tracks.items, 0, c->cap * 80);
    }
    c->count = 0;
}
