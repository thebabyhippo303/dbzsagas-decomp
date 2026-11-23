/* MainMenu__ResetScreenContents @ 0x8012F950 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
typedef struct VEnt { short off; short pad; void *fn; } VEnt;
typedef struct VTabA { char pad[0x388]; VEnt e; } VTabA;
typedef struct VTabB { char pad[0x18]; VEnt e; } VTabB;
typedef struct Widget { char pad[8]; VTabB *vt; } Widget;
typedef struct Child { char pad[0x19C]; VTabA *vt; } Child;
typedef struct Slot { Child *child; } Slot;
typedef struct Arr { Slot **items; s32 count; } Arr;
typedef struct Menu {
    char pad0[0x1A0];
    char flags[0x344 - 0x1A0];
    Arr arr;
    char pad1[0x35C - 0x34C];
    f32 f35c;
    char pad2[0x9E8 - 0x360];
    s32 f9e8;
    s32 f9ec;
    s32 f9f0;
} Menu;

void MainMenu__ResetLetterAnimationChildFlags(void *);
void fn_80188FB0(void *);
extern f32 lbl_8032A938 __attribute__((section(".data")));

void MainMenu__ResetScreenContents(Menu *m) {
    s32 i;
    s32 off;
    Arr *a = &m->arr;
    Child *c;
    Widget *w;
    MainMenu__ResetLetterAnimationChildFlags(m->flags);
    m->f9e8 = 0;
    m->f35c = lbl_8032A938;
    i = 0;
    if (i < a->count) {
        off = 0;
        do {
            Slot *s = *(Slot **)((char *)m->arr.items + off);
            i++;
            off += 4;
            c = s->child;
            w = ((Widget *(*)(void *))c->vt->e.fn)((char *)c + c->vt->e.off);
            ((void (*)(void *))w->vt->e.fn)((char *)w + w->vt->e.off);
        } while (i < a->count);
    }
    if (m->f9ec != 0) {
        m->f9f0 = 0;
        fn_80188FB0(&m->f9ec);
    }
}
