/* AI__WaitForScript @ 0x8004565C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__WaitForScript @ 0x8004565C (0x54). ProDG -O2. */
typedef struct {
    char pad[0x550];
    int slot;
} WaitTarget;

typedef struct {
    char pad[0x7E4];
    int busy;
    char pad2[0xB8C - 0x7E4 - 4];
    WaitTarget *target;
} WaitAvatar;

extern WaitAvatar *Script__PopInt(void *script, void *context);

void AI__WaitForScript(void *script, void *context) {
    WaitAvatar *avatar = Script__PopInt(script, context);
    int value = (int)Script__PopInt(script, context);
    if (avatar->busy == 0)
        avatar->target->slot = value;
}
