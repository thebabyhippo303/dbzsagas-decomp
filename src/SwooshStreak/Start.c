/* SwooshStreak__Start @ 0x80233A18 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SwooshStreak__Start @ 0x80233A18 (0x7C). ProDG -O2. */
typedef unsigned int u32;
typedef unsigned short u16;

typedef struct {
    int handle;
    char pad[4];
    u16 flags;
    char pad2[0x2A];
    char *items;
    int count;
} SwooshEntry;

extern void *lbl_803ADE94 __attribute__((section(".data")));
extern float lbl_80346D70 __attribute__((section(".data")));

void SwooshStreak__Start(u32 handle) {
    u32 index = handle >> 16;
    SwooshEntry *entry = (SwooshEntry *)((char *)lbl_803ADE94 + index * 152);
    int i;
    int count;
    int offset;
    float value;

    if (entry->handle != handle) {
        return;
    }
    if ((entry->flags & 148) == 20) {
        return;
    }
    i = 0;
    count = entry->count;
    entry->flags = (entry->flags | 20) & 65407;
    if (i >= count) {
        return;
    }
    offset = 0;
    value = lbl_80346D70;
    do {
        *(float *)(entry->items + 40 + offset) = value;
        offset += 56;
        i++;
    } while (i < entry->count);
}
