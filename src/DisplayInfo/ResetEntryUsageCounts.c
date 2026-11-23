/* DisplayInfo__ResetEntryUsageCounts @ 0x800099D0 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: DisplayInfo__ResetEntryUsageCounts @ 0x800099D0 (0xB8). ProDG -O2. */
typedef struct {
    char pad[8];
    int usage;
    char rest[16];
} DisplayInfoEntry;

extern DisplayInfoEntry lbl_8035F020[];
extern DisplayInfoEntry lbl_8035F0AC[];
extern DisplayInfoEntry lbl_8035F250[];
extern DisplayInfoEntry lbl_8035F3BC[];
extern DisplayInfoEntry lbl_8035F3F4[];

void DisplayInfo__ResetEntryUsageCounts(void) {
    int i;
    int z;

    for (i = 4; i >= 0; i--) {
        lbl_8035F020[i].usage = 0;
    }
    for (i = 14; i >= 0; i--) {
        lbl_8035F0AC[i].usage = 0;
    }
    for (i = 12; i >= 0; i--) {
        lbl_8035F250[i].usage = 0;
    }
    z = 0;
    for (i = 1; i >= 0; i--) {
        lbl_8035F3BC[i].usage = z;
    }
    for (i = 91; i >= 0; i--) {
        lbl_8035F3F4[i].usage = 0;
    }
}
