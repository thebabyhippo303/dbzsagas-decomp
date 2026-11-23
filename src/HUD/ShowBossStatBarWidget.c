/* HUD__ShowBossStatBarWidget @ 0x80122534 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__ShowBossStatBarWidget @ 0x80122534 (0x58). ProDG -O2. */
extern int HUD__AreBossStatWidgetPairVisible(void *self);

typedef struct BossVt {
    char pad[456];
    short adjust;
    char pad2[2];
    void (*show)(void *obj);
} BossVt;

typedef struct BossObj {
    char pad[412];
    BossVt *vt;
} BossObj;

typedef struct BossBarHud {
    BossObj *obj;
    char pad[8];
    int flag;
} BossBarHud;

void HUD__ShowBossStatBarWidget(BossBarHud *self) {
    BossObj *obj;
    BossVt *vt;

    if (HUD__AreBossStatWidgetPairVisible(self) != 0)
        self->flag = 0;
    obj = self->obj;
    vt = obj->vt;
    vt->show((BossObj *)((char *)obj + vt->adjust));
}
