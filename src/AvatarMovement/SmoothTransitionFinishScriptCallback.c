/* AvatarMovement__SmoothTransitionFinishScriptCallback @ 0x800B74FC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef short s16;

void AvatarMovement__SmoothTransitionFinishScriptCallback(void **arg0) {
    void *a;
    void *b;
    void *vt;
    s16 adjust;
    void (*fn)(void *);

    a = *arg0;
    *(f32 *)((char *)a + 56) = *(f32 *)((char *)a + 6768);
    b = *arg0;
    *(f32 *)((char *)b + 64) = *(f32 *)((char *)b + 6776);
    a = *arg0;
    *(f32 *)((char *)a + 1884) = *(f32 *)((char *)a + 6752);
    b = *arg0;
    vt = *(void **)((char *)b + 52);
    adjust = *(s16 *)((char *)vt + 168);
    fn = *(void (**)(void *))((char *)vt + 172);
    fn((char *)b + adjust);
}
