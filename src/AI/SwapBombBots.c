/* AI__SwapBombBots @ 0x80043C94 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__SwapBombBots @ 0x80043C94 (0x58). ProDG -O2. */
typedef struct BombMode {
    char pad[4];
    int mode;
} BombMode;

typedef struct BombCfg {
    char pad[0x238];
    BombMode *inner;
} BombCfg;

typedef struct BombBot {
    char pad[0xA];
    signed short slot;
} BombBot;

typedef struct BombMid {
    char pad[0x90];
    BombBot *bot;
} BombMid;

typedef struct BombAvatar {
    char pad[0x84];
    BombMid *mid;
} BombAvatar;

extern BombCfg *lbl_803DC3C0;
extern BombAvatar *Script__PopInt(void *script, void *context);
extern void fn_80246B1C(BombBot *bot, int which);

void AI__SwapBombBots(void *script, void *context) {
    BombAvatar *avatar = Script__PopInt(script, context);
    BombBot *bot;
    if (lbl_803DC3C0->inner->mode != 13) {
        return;
    }
    bot = avatar->mid->bot;
    if (bot == 0) {
        return;
    }
    bot->slot = -1;
    fn_80246B1C(bot, 1);
}
