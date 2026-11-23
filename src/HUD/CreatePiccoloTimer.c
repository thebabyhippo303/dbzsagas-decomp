/* HUD__CreatePiccoloTimer @ 0x8010F3C8 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x2CBC];
    volatile float maxValue;
    volatile float current;
    void *timer;
} PiccoloHud;

extern void *fn_801842C4(unsigned int size);
extern void *PiccoloTimer__Construct(void *timer);
extern float lbl_80326464 __attribute__((section(".data")));

void HUD__CreatePiccoloTimer(PiccoloHud *hud) {
    float value;

    hud->timer = PiccoloTimer__Construct(fn_801842C4(24));
    value = lbl_80326464;
    hud->current = value;
    hud->maxValue = value;
}
