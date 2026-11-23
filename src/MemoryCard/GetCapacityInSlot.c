/* MemoryCard__GetCapacityInSlot @ 0x801D82EC (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned short u16;
typedef struct {
    char pad[0xC];
    char *owner;
    char pad2[0x64 - 0x10];
    int cardId;
    int pad3;
    int results[2];
} MemoryCard;

int fn_802D9BEC(int, u16 *);
int MemoryCard__TranslateCardResult(MemoryCard *, int);

int MemoryCard__GetCapacityInSlot(MemoryCard *self, int slot, int *out) {
    u16 info[4];
    int r;
    int res;
    char *vt;

    r = fn_802D9BEC(slot, info);
    vt = self->owner;
    *out = ((int (*)(void *, int))*(void **)(vt + 0x34))((char *)self + *(short *)(vt + 0x30), info[0] << 17);
    res = MemoryCard__TranslateCardResult(self, r);
    self->results[slot] = res;
    return res;
}
