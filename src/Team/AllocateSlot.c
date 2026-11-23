/* Team__AllocateSlot @ 0x8007319C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match Team__AllocateSlot @ 0x8007319C (0x90). ProDG -O2. */
typedef struct TeamSlot {
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
extern int lbl_803DC428;
extern int lbl_803DC424;

int Team__AllocateSlot(int value) {
    int i;
    TeamSlot *slot;
    int result;
    int prev;

    result = 0;
    slot = lbl_803948E8;
    i = 0;
    do {
        if (slot[i].f10 == 0) {
            prev = slot[i].f0C;
            slot[i].f00 = value;
            slot[i].f04 = 0;
            slot[i].f08 = 0;
            slot[i].f10 = 1;
            slot[i].f14 = 0;
            slot[i].f1C = 0;
            if (prev == 0) {
                int n = lbl_803DC428;
                slot[i].f24 = n;
                lbl_803DC428 = n + 1;
            } else {
                slot[i].f24 = 0;
            }
            result = i;
            lbl_803DC424 = lbl_803DC424 + 1;
            i = 6;
        }
        i = i + 1;
    } while (i <= 5);
    return result;
}
