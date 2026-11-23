/* ScreenFade__UpdateActive @ 0x801191B4 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ScreenFade__UpdateActive @ 0x801191B4 (0x5C). ProDG -O2. */
typedef struct Fade Fade;
extern Fade *lbl_803DC698;
extern void ScreenFade__Update(Fade *fade);
extern int ScreenFade__IsRunning(Fade *fade);
extern void ScreenFade__Destroy(Fade *fade, int reason);

void ScreenFade__UpdateActive(void) {
    Fade *fade = lbl_803DC698;
    int running;
    if (fade == 0)
        return;
    ScreenFade__Update(fade);
    fade = lbl_803DC698;
    running = ScreenFade__IsRunning(fade);
    if (running == 0) {
        fade = lbl_803DC698;
        if (fade != 0)
            ScreenFade__Destroy(fade, 3);
        lbl_803DC698 = (Fade *)running;
    }
}
