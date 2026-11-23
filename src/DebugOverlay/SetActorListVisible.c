/* DebugOverlay__SetActorListVisible @ 0x80138A50 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: DebugOverlay__SetActorListVisible @ 0x80138A50 (0x3C). ProDG -O2.
   Stores the visibility flag at +0x6BA8, then shows or hides the actor-list
   object at +0x41DC. fn_8026D498 writes 1 at +276; fn_8026D514 writes 0. */
extern void fn_8026D498(void *actor_list);
extern void fn_8026D514(void *actor_list);

void DebugOverlay__SetActorListVisible(char *self, int visible) {
    *(int *)(self + 27560) = visible;
    if (visible != 0)
        fn_8026D498(self + 16860);
    else
        fn_8026D514(self + 16860);
}
