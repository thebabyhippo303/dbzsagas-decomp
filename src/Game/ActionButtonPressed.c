/* Game__ActionButtonPressed @ 0x8002F3A0 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__ActionButtonPressed @ 0x8002F3A0 (0x68). ProDG -O2. */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

int AvatarControls__IsActionPressed(void *, int);
void *Game__GetPlayerImpl(void *, int);
void Script__PushInt(void *, void *, int);
extern int lbl_803A35DC __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void Game__ActionButtonPressed(void *arg0, void *arg1) {
    int var_r5;

    var_r5 = AvatarControls__IsActionPressed(M2C_FIELD(Game__GetPlayerImpl(lbl_803DC3C0, 0), void **, 0x720), 2);
    if (lbl_803A35DC == 0) {
        var_r5 = 0;
    }
    Script__PushInt(arg0, arg1, var_r5);
}
