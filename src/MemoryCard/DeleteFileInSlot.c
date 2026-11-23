/* MemoryCard__DeleteFileInSlot @ 0x801D7C08 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x64];
    int cardId;
    int pad2;
    int results[2];
} MemoryCard;

int fn_802DD938(int, int);
int MemoryCard__TranslateCardResult(MemoryCard *, int);

int MemoryCard__DeleteFileInSlot(MemoryCard *self, int slot) {
    int res = MemoryCard__TranslateCardResult(self, fn_802DD938(slot, self->cardId));

    self->results[slot] = res;
    return res;
}
