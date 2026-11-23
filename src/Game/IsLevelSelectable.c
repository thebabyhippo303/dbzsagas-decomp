/* Game__IsLevelSelectable @ 0x80006C50 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[20];
    unsigned int flags;
    char rest[8];
} LevelSelectRow;

extern LevelSelectRow lbl_8035E640[] __attribute__((section(".data")));

int Game__IsLevelSelectable(void *game, int id) {
    if (id > 34) {
        return 0;
    }
    return (lbl_8035E640[id].flags >> 1) & 1;
}
