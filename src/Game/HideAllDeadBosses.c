/* Game__HideAllDeadBosses @ 0x80045744 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__HideAllDeadBosses @ 0x80045744 (0xBC). ProDG -O2. */
typedef struct {
    char pad[0x60];
    short adjust;
    char pad2[2];
    void (*hide)(void *self, int flag);
} BossVtable;

typedef struct {
    int flags;
    char pad0[0x30];
    BossVtable *vt;
    char pad1[0x250];
    float health;
    char pad2[0x48];
    int alive;
} Boss;

typedef struct BossNode {
    Boss *boss;
    char pad[0x10];
    struct BossNode *next;
} BossNode;

typedef struct {
    char pad[0x14];
    BossNode *list;
} BossList;

extern BossList *lbl_803DCCB8;
extern float lbl_80311FC8 __attribute__((section(".rodata")));
extern int lbl_803945E4[];

void Game__HideAllDeadBosses(void) {
    BossNode **head;
    BossNode *node;
    Boss *boss;
    float limit;

    head = &lbl_803DCCB8->list;
    node = *head;
    if (node == 0) {
        return;
    }
    limit = lbl_80311FC8;
    do {
        boss = node->boss;
        if ((boss->flags & lbl_803945E4[1]) == lbl_803945E4[0] && boss->alive != 0 && !(boss->health > limit)) {
            boss->vt->hide((void *)((char *)boss + boss->vt->adjust), 1);
        }
        if (node != 0) {
            node = node->next;
        } else {
            node = *head;
        }
    } while (node != 0);
}
