/* PlayerIndicator__Initialize @ 0x8011EEB8 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PlayerIndicator__Initialize @ 0x8011EEB8 (0x48). ProDG -O2. */
extern char lbl_803272D0[];
extern char lbl_803272D8[];
extern void *PlayerIndicator__Create(char *name);
extern void *lbl_803D8344;
extern void *lbl_803D8348;
extern void *lbl_803D834C;

int PlayerIndicator__Initialize(void) {
    lbl_803D8344 = PlayerIndicator__Create(lbl_803272D0);
    lbl_803D8348 = PlayerIndicator__Create(lbl_803272D8);
    lbl_803D834C = 0;
    return 1;
}
