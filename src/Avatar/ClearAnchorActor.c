/* Avatar__ClearAnchorActor @ 0x800A35E0 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__ClearAnchorActor @ 0x800A35E0 (0x28). ProDG -O2. */
extern void Avatar__SetAnchorActor(void *avatar, void *actor);

void Avatar__ClearAnchorActor(void *owner) {
    Avatar__SetAnchorActor(*(void **)owner, 0);
}
