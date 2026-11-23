/* Avatar__SetComboMoves @ 0x80034278 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetComboMoves @ 0x80034278 (0x44). ProDG -O2. */
typedef struct {
    char pad[0x660];
    int comboMoves;
} AvatarComboMoves;

extern int Script__PopInt(void *script, void *context);

void Avatar__SetComboMoves(void *script, void *context) {
    AvatarComboMoves *avatar = (AvatarComboMoves *)Script__PopInt(script, context);
    avatar->comboMoves = Script__PopInt(script, context);
}
