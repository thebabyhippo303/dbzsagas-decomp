/* Minimap__UpdatePlayerMarkerAppearance @ 0x8004C294 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct MarkerVT {
    char pad0[0x70];
    short adjSet; short pad72; void (*setIcon)(void *, int, int, int, int);
    char pad78[0xD8 - 0x78];
    short adjRot; short padDA; void (*setRot)(void *, float);
} MarkerVT;
typedef struct Marker { char pad[0x19C]; MarkerVT *vt; } Marker;
typedef struct Actor { char pad[0x75C]; float angle; char pad760[0x7E4 - 0x760]; int isPlayerMarked; } Actor;
extern void *Game__GetPlayerImpl(void *game, int idx);
extern void *lbl_803DC3C0;
extern float lbl_803DE500;
extern float lbl_803DE524;

void Minimap__UpdatePlayerMarkerAppearance(void *unused, Actor *actor, Marker *marker) {
    if (actor->isPlayerMarked != 0) {
        if ((void *)actor == Game__GetPlayerImpl(lbl_803DC3C0, 0)) {
            marker->vt->setIcon((char *)marker + marker->vt->adjSet, 5, 0, 1, 1);
        } else {
            marker->vt->setIcon((char *)marker + marker->vt->adjSet, 6, 0, 1, 1);
        }
    } else {
        marker->vt->setIcon((char *)marker + marker->vt->adjSet, 3, 0, 1, 1);
    }
    marker->vt->setRot((char *)marker + marker->vt->adjRot, -((actor->angle - lbl_803DE500) * lbl_803DE524));
}
