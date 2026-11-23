/* PiccoloTimer__Construct @ 0x8011D744 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_80327250 __attribute__((section(".data")));

typedef struct PiccoloTimer {
    int e;
    int a;
    int b;
    int c;
    int d;
    float f;
} PiccoloTimer;

PiccoloTimer *PiccoloTimer__Construct(PiccoloTimer *timer) {
    PiccoloTimer *t = timer;
    t->e = 0;
    t->f = lbl_80327250;
    t->a = 0;
    t->b = 0;
    t->c = 0;
    t->d = 0;
    return timer;
}
