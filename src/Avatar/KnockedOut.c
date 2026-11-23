/* Avatar__KnockedOut @ 0x8003E448 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__KnockedOut @ 0x8003E448 (0xB8). ProDG -O2. */
extern void *lbl_803DC3C0;
extern char lbl_80310000[];
extern int Script__PopInt(void *script, void *context);
extern int Game__GetConfiguredPlayerCount(void *game);
extern void *Game__FindNearestEligibleAvatar(void *avatar);
extern void *Game__GetPlayerImpl(void *game, int index);
extern void Avatar__SetCoopKnockoutFlag(void *avatar, int flag);

typedef struct AvatarKo {
    char pad[2020];
    int flag;
} AvatarKo;

typedef struct NearAvatar {
    char pad[724];
    int flag;
} NearAvatar;

typedef struct PlayerHp {
    char pad[648];
    float hp;
} PlayerHp;

void Avatar__KnockedOut(void *script, void *context) {
    AvatarKo *avatar = (AvatarKo *)Script__PopInt(script, context);
    NearAvatar *near;
    PlayerHp *player;

    if (Game__GetConfiguredPlayerCount(lbl_803DC3C0) != 2 || avatar->flag == 0)
        return;
    near = Game__FindNearestEligibleAvatar(avatar);
    if (near == 0 || near->flag == 0)
        return;
    if ((void *)Game__GetPlayerImpl(lbl_803DC3C0, 0) == (void *)avatar)
        player = Game__GetPlayerImpl(lbl_803DC3C0, 1);
    else
        player = Game__GetPlayerImpl(lbl_803DC3C0, 0);
    if (!(player->hp <= *(float *)(lbl_80310000 + 6996)))
        Avatar__SetCoopKnockoutFlag(avatar, 1);
}
