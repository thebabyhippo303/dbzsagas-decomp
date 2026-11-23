/* Game__NumPlayers @ 0x8003E0C0 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
extern s32 Game__GetConfiguredPlayerCount(void *);
extern void *Game__GetPlayerImpl(void *, s32);
extern void Script__PushInt(void *, void *, s32);
extern f32 lbl_80311B44 __attribute__((section(".data")));
extern void *lbl_803DC3C0 __attribute__((section(".sdata")));
void Game__NumPlayers(void *script, void *context) {
    f32 minimum = lbl_80311B44;
    s32 count = 0;
    s32 index = 0;
    void *player;
    goto check;
body:
    player = Game__GetPlayerImpl(lbl_803DC3C0, index);
    if (player != 0 && !(*(f32 *)((char *)player + 0x288) <= minimum)) count++;
    index++;
check:
    if (index < Game__GetConfiguredPlayerCount(lbl_803DC3C0)) goto body;
    Script__PushInt(script, context, count);
}
