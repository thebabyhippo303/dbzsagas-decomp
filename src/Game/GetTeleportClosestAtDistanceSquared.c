/* Game__GetTeleportClosestAtDistanceSquared @ 0x800444C8 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched squared teleport distances. ProDG -O2.
   Game__GetTeleportAnchorAtDistanceSquared  @ 0x8004449C (0x2C)  float @ 0x20C8
   Game__GetTeleportClosestAtDistanceSquared @ 0x800444C8 (0x2C)  float @ 0x20CC
*/
typedef struct {
    char pad[0x20c8];
    float anchor;
    float closest;
} TeleCfg;

extern TeleCfg *lbl_803DC3C0;
void fn_8023A264(void *a, void *b, float c);

void Game__GetTeleportAnchorAtDistanceSquared(void *a, void *b) {
    float x = lbl_803DC3C0->anchor;
    fn_8023A264(a, b, x * x);
}

void Game__GetTeleportClosestAtDistanceSquared(void *a, void *b) {
    float x = lbl_803DC3C0->closest;
    fn_8023A264(a, b, x * x);
}
