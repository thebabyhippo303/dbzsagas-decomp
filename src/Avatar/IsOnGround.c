/* Avatar__IsOnGround @ 0x8002500C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match Avatar__IsOnGround @ 0x8002500C (0x90). ProDG -O2. */
extern void *lbl_803DC3C0 __attribute__((section(".sdata")));
extern void *Game__GetPlayerImpl(void *game, int index);
extern void Script__PushInt(void *script, void *context, int value);

typedef struct GroundVtable {
    char pad[16];
    short this_adjust;
    char pad2[2];
    void (*query)(void *self, int *out);
} GroundVtable;

typedef struct GroundObj {
    char pad[4];
    GroundVtable *vtable;
} GroundObj;

typedef struct GroundPlayer {
    char pad[0x7B8];
    GroundObj *ground;
} GroundPlayer;

void Avatar__IsOnGround(void *script, void *context) {
    int on_ground;
    GroundPlayer *player;
    GroundObj *ground;

    on_ground = 0;
    player = Game__GetPlayerImpl(lbl_803DC3C0, 0);
    ground = player->ground;
    ground->vtable->query((char *)ground + ground->vtable->this_adjust, &on_ground);
    if (on_ground != 0) {
        Script__PushInt(script, context, 1);
    } else {
        Script__PushInt(script, context, 0);
    }
}
