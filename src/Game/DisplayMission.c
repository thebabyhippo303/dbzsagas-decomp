/* Game__DisplayMission @ 0x8003DCA8 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__DisplayMission @ 0x8003DCA8 (0x8C). ProDG -O2. */
typedef struct {
    int pad;
    int type;
} LevelInfo;

typedef struct {
    char pad[0x238];
    LevelInfo *level;
} DisplayGame;

typedef struct {
    char pad[0xAEB0];
    int pending;
} MissionUi;

extern DisplayGame *lbl_game;
extern MissionUi *lbl_missionUi;
extern void MissionUI__StartSlideIn(MissionUi *ui);

void Game__DisplayMission(void) {
    int slideIn = 0;
    int type = lbl_game->level->type;
    if (type == 4 || type == 7 || type == 10 || type == 11 || type == 16 || type == 21)
        slideIn = 1;
    if (slideIn != 0) {
        if (type == 21)
            MissionUI__StartSlideIn(lbl_missionUi);
    } else {
        lbl_missionUi->pending = 1;
    }
}
