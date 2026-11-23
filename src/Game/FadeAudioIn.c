/* Game__FadeAudioIn @ 0x8002F638 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched fades. ProDG -O2.
   Float constants live at lbl_80310000 + LO, so the lfs immediate matches.
   Fade__ToBlack      @ 0x8002F470 (0x2C)  mode 0, float @ 0x16BC
   Fade__FromBlack    @ 0x8002F49C (0x2C)  mode 1, float @ 0x16C0
   Fade__FromFMV      @ 0x8002F4C8 (0x2C)  mode 4, float @ 0x16C4
   Game__FadeOut      @ 0x8002F540 (0x2C)
   Game__FadeAudioOut @ 0x8002F60C (0x2C)
   Game__FadeAudioIn  @ 0x8002F638 (0x2C)
*/
extern char lbl_80310000[];
void fn_80118F90(int mode, float t);

void Fade__ToBlack(void) {
    fn_80118F90(0, *(float *)(lbl_80310000 + 0x16BC));
}

void Fade__FromBlack(void) {
    fn_80118F90(1, *(float *)(lbl_80310000 + 0x16C0));
}

void Fade__FromFMV(void) {
    fn_80118F90(4, *(float *)(lbl_80310000 + 0x16C4));
}

void fn_80228B88(int a, int b, int c);
void Game__FadeOut(void) { fn_80228B88(0, 0, 0); }

void fn_8023A378(void);
extern void *lbl_803DC3C0;
void fn_8001E090(void *p, int c);

void Game__FadeAudioOut(void) {
    fn_8023A378();
    fn_8001E090(lbl_803DC3C0, 1);
}

void Game__FadeAudioIn(void) {
    fn_8023A378();
    fn_8001E090(lbl_803DC3C0, 0);
}
