/* AI__IsActionIdAllowedByRandomChance @ 0x800655A4 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
int Rand__RangeInt(void *rng, int lo, int hi);
extern int lbl_803DD634;

int AI__IsActionIdAllowedByRandomChance(void *self, int action_id) {
    int roll;
    int allowed;

    (void)self;
    allowed = 0;
    roll = Rand__RangeInt(&lbl_803DD634, 0, 100);
    if (action_id == 770) {
        allowed = !(roll <= 75);
    } else if (action_id == 771) {
        if (roll > 75) {
            allowed = 1;
        }
    } else if (action_id == 777) {
        if (roll > 65) {
            allowed = 1;
        }
    } else if ((unsigned)(action_id - 778) <= 1u) {
        if (roll > 85) {
            allowed = 1;
        }
    } else if (action_id == 780) {
        if (roll > 35) {
            allowed = 1;
        }
    } else if (action_id == 788) {
        if (roll > 65) {
            allowed = 1;
        }
    }
    return allowed;
}
