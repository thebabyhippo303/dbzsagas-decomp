/* Team__InitImpl @ 0x80073118 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Team__InitImpl @ 0x80073118 (0x84). ProDG -O2. */
typedef struct {
    int f00;
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
} TeamSlot;

extern TeamSlot lbl_803948E8[] __attribute__((section(".data")));
extern int lbl_803DC434;
extern int lbl_803DC424;
extern int lbl_803DC428;
extern int lbl_803DC420;
extern int lbl_803DC41C;
extern int lbl_803DC418;

void Team__InitImpl(int index) {
    TeamSlot *slot = lbl_803948E8;
    int i;

    lbl_803DC424 = 0;
    lbl_803DC428 = 0;
    lbl_803DC420 = 0;
    lbl_803DC41C = 0;
    lbl_803DC434 = 0;
    for (i = 0; i < 6; i++) {
        slot->f00 = 0;
        slot->f0C = 0;
        slot->f04 = 0;
        slot->f08 = 0;
        slot->f10 = 0;
        slot->f18 = 0;
        slot->f28 = 0;
        slot->f1C = 0;
        slot->f20 = -1;
        slot->f24 = -1;
        slot->f2C = 0;
        slot++;
    }
    lbl_803DC418 = 1;
    lbl_803948E8[index].f0C = 1;
}
