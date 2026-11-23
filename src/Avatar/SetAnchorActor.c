/* Avatar__SetAnchorActor @ 0x80098280 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetAnchorActor @ 0x80098280 (0x8). ProDG -O2. */
typedef struct {
    char pad[0x2BC];
    void *anchor;
} Avatar;

void Avatar__SetAnchorActor(Avatar *self, void *actor) {
    self->anchor = actor;
}
