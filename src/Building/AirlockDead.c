/* Building__AirlockDead @ 0x80044FDC (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Building__AirlockDead @ 0x80044FDC (0x74). ProDG -O2. */
typedef struct {
    char pad[4];
    int mode;
} MissionInner;

typedef struct {
    char pad[0x238];
    MissionInner *inner;
} GameCfg;

typedef struct {
    char pad[0xD0];
    char name[4];
} Building;

extern GameCfg *lbl_803DC3C0;
extern char *lbl_803603C8[];
extern int String__CompareIgnoreCase(char *a, char *b);
extern void Building__MarkAirlockDead(int index);

void Building__AirlockDead(Building *self) {
    char **names;
    int i;

    if (lbl_803DC3C0->inner->mode != 14)
        return;
    names = lbl_803603C8;
    i = 0;
    do {
        if (String__CompareIgnoreCase(self->name, *names++) == 0)
            Building__MarkAirlockDead(i);
        i++;
    } while (i <= 4);
}
