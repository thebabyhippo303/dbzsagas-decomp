/* ScreenFade__IsRunning @ 0x8011940C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_80327010 __attribute__((section(".rodata")));
unsigned int Timer__GetMilliseconds(void);
static const char pool_pad[0x7008] = {1};

typedef struct Fade { float start; float duration; } Fade;

int ScreenFade__IsRunning(Fade *f) {
    float now = (float)Timer__GetMilliseconds() * lbl_80327010;
    return now < f->start + f->duration;
}
