/* Minimap__ShouldDisplayActor @ 0x80117FEC (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Minimap__ShouldDisplayActor @ 0x80117FEC (0x50). ProDG -O2. */
extern int Minimap__IsActorCategoryEnabled(void *self);
extern int Minimap__IsActorWithinDisplayRange(void *self);

int Minimap__ShouldDisplayActor(void *self) {
    int result;

    result = 0;
    if (Minimap__IsActorCategoryEnabled(self) != 0 &&
        Minimap__IsActorWithinDisplayRange(self) != 0) {
        result = 1;
    }
    return result;
}
