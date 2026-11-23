/* MemoryCard__GetFreeSpaceInSlot @ 0x801D8260 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0xC];
    char *owner;
    char pad2[0x64 - 0x10];
    int cardId;
    int pad3;
    int results[2];
} MemoryCard;

int fn_802D9A9C(int, int *, int *);
int MemoryCard__TranslateCardResult(MemoryCard *, int);

int MemoryCard__GetFreeSpaceInSlot(MemoryCard *self, int slot, int *outA, int *outB) {
    int spC;
    int sp8;
    int r;
    int res;
    char *vt;

    r = fn_802D9A9C(slot, &sp8, &spC);
    *outA = spC;
    vt = self->owner;
    *outB = ((int (*)(void *, int))*(void **)(vt + 0x34))((char *)self + *(short *)(vt + 0x30), sp8);
    res = MemoryCard__TranslateCardResult(self, r);
    self->results[slot] = res;
    return res;
}
