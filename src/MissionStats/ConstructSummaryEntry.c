/* MissionStats__ConstructSummaryEntry @ 0x80122A90 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissionStats__ConstructSummaryEntry @ 0x80122A90 (0x50). ProDG -O2. */
typedef struct {
    int id0;
    int id1;
    int a;
    int b;
    int c;
    int d;
    char label[4];
} SummaryEntry;

extern char *strcpy(char *dst, const char *src);

SummaryEntry *MissionStats__ConstructSummaryEntry(SummaryEntry *self, const char *label, int id0, int id1) {
    self->id0 = id0;
    self->id1 = id1;
    self->a = 0;
    self->b = 0;
    self->c = 0;
    self->d = 0;
    strcpy(self->label, label);
    return self;
}
