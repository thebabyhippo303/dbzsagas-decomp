/* HUD__StartPiccoloTimer @ 0x8010F410 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;

extern void HUD__InitializePiccoloTimerDisplay(s32 id);

typedef struct HUDPiccoloTimer {
    char pad[0x2CBC];
    volatile f32 elapsed;
    volatile f32 duration;
    s32 displayId;
} HUDPiccoloTimer;

void HUD__StartPiccoloTimer(HUDPiccoloTimer *hud, f32 time) {
    HUD__InitializePiccoloTimerDisplay(hud->displayId);
    hud->duration = time;
    hud->elapsed = time;
}
