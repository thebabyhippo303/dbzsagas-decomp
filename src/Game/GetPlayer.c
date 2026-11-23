/* Game__GetPlayer @ 0x8003E314 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__GetPlayer @ 0x8003E314 (0x6C). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, void *value);
extern int Game__GetConfiguredPlayerCount(void *game);
extern void *Game__GetPlayerImpl(void *game, int index);

extern void *lbl_game;

void Game__GetPlayer(void *script, void *context) {
    int index = Script__PopInt(script, context);
    void *player;
    if (index >= 0 && index < Game__GetConfiguredPlayerCount(lbl_game))
        player = Game__GetPlayerImpl(lbl_game, index);
    else
        player = 0;
    Script__PushInt(script, context, player);
}
