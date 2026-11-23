/* AI__WaitForThrow @ 0x80045AB4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__WaitForThrow @ 0x80045AB4 (0x54). ProDG -O2. */
typedef struct WaitInner {
    char pad[0x558];
    int throwWait;
} WaitInner;

typedef struct WaitAvatar {
    char pad[0x7E4];
    int busy;
    char mid[0xB8C - 0x7E8];
    WaitInner *inner;
} WaitAvatar;

extern WaitAvatar *Script__PopInt(void *script, void *context);
extern int Script__PopIntValue(void *script, void *context);

void AI__WaitForThrow(void *script, void *context) {
    WaitAvatar *avatar = Script__PopInt(script, context);
    int value = Script__PopIntValue(script, context);
    if (avatar->busy == 0) {
        avatar->inner->throwWait = value;
    }
}
