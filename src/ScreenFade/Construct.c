/* ScreenFade__Construct @ 0x8011924C (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef unsigned int u32;
typedef struct { int a, b, c, d; } Color;

typedef struct {
    f32 time;
    f32 f4;
    f32 f8;
    f32 fC;
    Color color;
    int mode;
} ScreenFade;

static const char pool_pad[0x6FE0] = {1};

extern u32 Timer__GetMilliseconds(void);
extern void ScreenFade__Update(ScreenFade *);
extern f32 lbl_80326FE8 __attribute__((section(".data")));

ScreenFade *ScreenFade__Construct(ScreenFade *self, Color *color, f32 a, int mode, f32 b, f32 c) {
    u32 ms = Timer__GetMilliseconds();

    self->f4 = a;
    self->f8 = b;
    self->fC = c;
    self->time = (f32)ms * lbl_80326FE8;
    self->color = *color;
    self->mode = mode;
    ScreenFade__Update(self);
    return self;
}
