/* AISetStreamPlayState @ 0x8017C508 (size: 0xD8, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef unsigned int u32;

#define AI_CTRL (*(volatile u32 *)0xCC006C00)

u32 AIGetStreamPlayState(void);
u32 AIGetStreamSampleRate(void);
u32 AIGetStreamVolRight(void);
u32 AIGetStreamVolLeft(void);
void AISetStreamVolRight(u32);
void AISetStreamVolLeft(u32);
int OSDisableInterrupts(void);
void AI__CalibrateSampleRateTiming(void);
void OSRestoreInterrupts(int);

void AISetStreamPlayState(u32 arg0) {
    u32 volR;
    u32 volL;
    int ints;

    if (arg0 != AIGetStreamPlayState()) {
        if ((AIGetStreamSampleRate() == 0) && (arg0 == 1)) {
            volR = AIGetStreamVolRight();
            volL = AIGetStreamVolLeft();
            AISetStreamVolRight(0);
            AISetStreamVolLeft(0);
            ints = OSDisableInterrupts();
            AI__CalibrateSampleRateTiming();
            AI_CTRL = (AI_CTRL & ~0x20) | 0x20;
            AI_CTRL = (AI_CTRL & ~1) | 1;
            OSRestoreInterrupts(ints);
            AISetStreamVolLeft(volR);
            AISetStreamVolRight(volL);
            return;
        }
        AI_CTRL = (AI_CTRL & ~1) | arg0;
    }
}
