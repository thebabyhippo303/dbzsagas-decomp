/* Distort__RenderEffect @ 0x802A1824 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;

typedef struct {
    char pad0[96];
    f32 a;
    f32 b;
    f32 c;
    char pad1[8];
    f32 t;
    f32 u;
    f32 out;
    char pad2[32];
    s32 flag;
} DistortEffect;

extern f32 lbl_80350C5C __attribute__((section(".rodata")));
extern f32 lbl_80350C60 __attribute__((section(".rodata")));
void Distort__UpdateEffectVertices(void *self);

s32 Distort__RenderEffect(DistortEffect *o, f32 dt) {
    f32 k;
    f32 bconst;

    o->t += dt;
    o->u += dt;
    if (o->flag != 0) {
        goto update;
    }
    if (!(o->t <= o->a)) {
        k = lbl_80350C5C;
        if (!(o->a <= k)) {
            f32 d = o->t - o->a;
            o->a = k;
            o->t = d;
            goto phase;
        }
    }
    k = lbl_80350C5C;
    if (o->a == k) {
        if (!(o->t <= o->b) && !(o->b <= k)) {
            f32 d = o->t - o->b;
            o->b = k;
            o->t = d;
        }
    }
phase:
    if (!(o->a <= lbl_80350C5C)) {
        o->out = lbl_80350C60 - ((o->a - o->t) / o->a);
        goto update;
    }
    if (!(o->b <= lbl_80350C5C)) {
        o->out = lbl_80350C60;
        goto update;
    }
    o->out = (o->c - o->t) / o->c;
    if (o->t > o->c) {
        return 0;
    }
update:
    Distort__UpdateEffectVertices(o);
    return 1;
}
