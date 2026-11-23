/* SaveGame__CompressActiveRecord @ 0x801504FC (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__CompressActiveRecord @ 0x801504FC (0xE4). ProDG -O2. */
extern void SaveGame__RemoveLevelPayload(void *self);
extern int fn_80255A44(int dst, int srcLen, int src, int dstLen);

typedef struct SaveRec {
    char pad[4];
    int inLen;
    int outLen;
    char mid[0x50 - 0xC];
    int ready;
    char mid2[0x58 - 0x54];
    int stored;
} SaveRec;

typedef struct SaveGame {
    char pad[8];
    int cursor;
    char mid[0x18 - 0xC];
    int dst;
    int src;
    SaveRec *rec;
} SaveGame;

void SaveGame__CompressActiveRecord(SaveGame *self, int mode) {
    int out;
    int pad;

    if (mode != 99) {
        if (self->rec->ready != 0) {
            SaveGame__RemoveLevelPayload(self);
        }
        out = fn_80255A44(self->dst, self->rec->inLen, self->src + self->cursor, self->rec->inLen);
        self->rec->outLen = out;
        self->rec->stored = self->cursor;
        out = self->rec->outLen;
        pad = out + (((out ^ 15) + 1) & 15);
        self->cursor = self->cursor + pad;
        self->rec->ready = 1;
        return;
    }
    out = fn_80255A44(self->dst, self->rec->inLen, self->src + 9216, self->rec->inLen);
    self->rec->outLen = out;
    self->rec->stored = 9216;
    self->rec->ready = 1;
}
