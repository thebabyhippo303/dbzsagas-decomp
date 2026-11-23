/* Floater__MoveToYPos @ 0x802B0118 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__MoveToYPos @ 0x802B0118 (0x4C). ProDG -O2. */
extern float Script__PopFloat(void *script, void *context);
extern void fn_802B3504(void *actor, void *pos, int mode, float speed);
extern float lbl_80351E20 __attribute__((section(".data")));

void Floater__MoveToYPos(char *script, void *context) {
    struct {
        int pad;
        float y;
        int tail[2];
    } local;
    void *actor;

    actor = *(void **)(script + 200);
    local.y = Script__PopFloat(script, context);
    fn_802B3504(actor, &local, 2, lbl_80351E20);
}
