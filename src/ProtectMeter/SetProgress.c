/* ProtectMeter__SetProgress @ 0x8011FEBC (size: 0x114, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;

typedef struct {
    f32 x;
    f32 y;
} Vec2f;

typedef struct {
    u32 x;
    u32 y;
} Vec2b;

typedef struct {
    char pad[0xA8];
    signed short off;
    char pad2[2];
    void (*fn)(void *self, f32 a, f32 b);
    char pad3[0x2D0 - 0xB0];
    signed short off2;
    char pad4[2];
    void (*fn2)(void *self, f32 a, f32 b, f32 c, f32 d);
} MeterVt;

extern int ProtectMeter__ShouldSkipUpdate(void *self);
extern f32 lbl_8032734C __attribute__((section(".data")));
extern f32 lbl_80327350 __attribute__((section(".data")));
extern f32 lbl_80327354 __attribute__((section(".data")));

void ProtectMeter__SetProgress(char *self, f32 progress, Vec2f *range) {
    f32 base;
    f32 x;
    f32 y;
    Vec2b bits;
    char *w;

#define CALL2(obj, a, b) \
    do { \
        char *w_ = (obj); \
        char *vt_ = *(char **)(w_ + 412); \
        (*(void (**)(void *, f32, f32))(vt_ + 172))(w_ + *(short *)(vt_ + 168), (a), (b)); \
    } while (0)

    bits = *(Vec2b *)range;
    if (ProtectMeter__ShouldSkipUpdate(self) != 0) {
        return;
    }
    x = *(f32 *)&bits.x;
    y = *(f32 *)&bits.y;
    CALL2(*(char **)(self + 4), x, y);
    CALL2(*(char **)(self + 8), x, y);
    CALL2(*(char **)(self + 12), x, y - lbl_8032734C);
    w = *(char **)(self + 8);
    base = lbl_80327350;
    {
        char *vt_ = *(char **)(w + 412);
        (*(void (**)(void *, f32, f32, f32, f32))(vt_ + 724))(
            w + *(short *)(vt_ + 720), lbl_80327354, base - progress, base, base);
    }
#undef CALL2
}
