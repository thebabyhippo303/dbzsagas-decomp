/* AI__UpdateDismembermentByHealth @ 0x80076928 (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__UpdateDismembermentByHealth @ 0x80076928 (0x128). ProDG -O2. */
typedef struct {
    char pad[0x288];
    float current;
    float max;
} DismemberStats;

typedef struct {
    char pad[0x390];
    DismemberStats *stats;
    char pad2[0x580 - 0x394];
    int part;
    char pad3[0x5B8 - 0x584];
    int stage;
} DismemberAI;

int Rand__RangeInt(void *state, int min, int max);
void AI__ExplodeBodyPart(void *self, int part);

extern float lbl_8031F054 __attribute__((section(".rodata")));
extern float lbl_8031F058 __attribute__((section(".rodata")));
extern float lbl_8031F05C __attribute__((section(".rodata")));
extern float lbl_8031F060 __attribute__((section(".rodata")));
extern int lbl_803DD634 __attribute__((section(".sbss")));

void AI__UpdateDismembermentByHealth(DismemberAI *self) {
    float ratio = (self->stats->current / self->stats->max) * lbl_8031F054;

    if (!(ratio >= lbl_8031F058) && self->stage == 0) {
        self->stage = 1;
        AI__ExplodeBodyPart(self, Rand__RangeInt(&lbl_803DD634, 0, 5));
        return;
    }
    if (!(ratio >= lbl_8031F05C) && self->stage == 1) {
        self->stage = 2;
        if (self->part == 0) {
            AI__ExplodeBodyPart(self, 6);
        } else {
            AI__ExplodeBodyPart(self, Rand__RangeInt(&lbl_803DD634, 0, 5));
        }
        return;
    }
    if (!(ratio >= lbl_8031F060) && self->stage == 2) {
        self->stage = 3;
        if (self->part == 0) {
            AI__ExplodeBodyPart(self, 6);
        } else {
            AI__ExplodeBodyPart(self, Rand__RangeInt(&lbl_803DD634, 0, 6));
        }
    }
}
