/* Database__DiscardBufferBytes @ 0x802063A0 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__DiscardBufferBytes @ 0x802063A0 (0xB8). ProDG -O2. */
typedef struct {
    int flags;
    char pad[0x14 - 4];
    void *base;
    char *cursor;
    int remaining;
} DbDiscardBuf;

extern DbDiscardBuf lbl_803ADBE4;
extern void *memcpy(void *dst, const void *src, unsigned int n);
extern void DCStoreRangeNoSync(void *addr, int nbytes);
extern void MemHeap__Shrink(void *ptr, int size);

void Database__DiscardBufferBytes(int n) {
    if (lbl_803ADBE4.flags & 2) {
        memcpy(lbl_803ADBE4.cursor, lbl_803ADBE4.cursor + n, lbl_803ADBE4.remaining - n);
        DCStoreRangeNoSync(lbl_803ADBE4.cursor, lbl_803ADBE4.remaining - n);
        if (lbl_803ADBE4.flags & 8) {
            if ((lbl_803ADBE4.cursor - (char *)lbl_803ADBE4.base) + (lbl_803ADBE4.remaining - n) != 0) {
                MemHeap__Shrink(lbl_803ADBE4.base, (lbl_803ADBE4.cursor - (char *)lbl_803ADBE4.base) + (lbl_803ADBE4.remaining - n));
            }
        }
    } else {
        lbl_803ADBE4.cursor += n;
    }
    lbl_803ADBE4.remaining -= n;
}
