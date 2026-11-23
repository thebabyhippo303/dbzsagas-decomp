/* Game__GetSizeDiff @ 0x8003C7C8 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__GetSizeDiff @ 0x8003C7C8 (0x64). ProDG -O2. */
extern int Script__PopInt(void *self, void *ctx);
extern void Script__PushInt(void *self, void *ctx, int value);
extern float Avatar__GetSizeDifference(int a, int b);

void Game__GetSizeDiff(void *self, void *ctx) {
    int a;
    int b;
    float diff;

    a = Script__PopInt(self, ctx);
    b = Script__PopInt(self, ctx);
    diff = Avatar__GetSizeDifference(a, b);
    Script__PushInt(self, ctx, (int)diff);
}
