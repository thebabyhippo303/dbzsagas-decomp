/* MenuInput__DestroyWeaponPromptVisuals @ 0x8010DF38 (size: 0x144, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16; typedef int s32;
typedef struct VT { char pad[8]; s16 off; s16 pad2; void (*dtor)(void *, s32); } VT;
typedef struct Obj { char pad[412]; VT *vt; } Obj;
#define DESTROY(o) ((o)->vt->dtor((char *) (o) + (o)->vt->off, 3))
typedef struct Menu {
    char pad0[3324];
    Obj *bArr[80];
    Obj *cArr[80];
} Menu;
typedef struct M2 {
    char pad0[3324];
    Obj *b[80];
    Obj *c[80];
} M2;
typedef struct Whole {
    char pad[3324];
    Obj *b[80];
    Obj *c[80];
    Obj *obj;
    Obj *a[8];
    char pad2[0xFA8 - 3968 - 32];
    Obj *tail;
} Whole;

void MenuInput__DestroyWeaponPromptVisuals(void *self) {
    char *s = (char *) self;
    Obj **a;
    Obj **b;
    Obj **c;
    s32 i;

    if (*(Obj **) (s + 3964) != 0) {
        DESTROY(*(Obj **) (s + 3964));
    }
    *(Obj **) (s + 3964) = 0;
    a = (Obj **) (s + 3968);
    b = (Obj **) (s + 3324);
    c = (Obj **) (s + 3644);
    for (i = 0; i < 8; i++) {
        if (a[i] != 0) {
            DESTROY(a[i]);
        }
        a[i] = 0;
    }
    for (i = 0; i < 80; i++) {
        if (b[i] != 0) {
            DESTROY(b[i]);
        }
        b[i] = 0;
        if (c[i] != 0) {
            DESTROY(c[i]);
        }
        c[i] = 0;
    }
    if (*(Obj **) (s + 4008) != 0) {
        DESTROY(*(Obj **) (s + 4008));
    }
    *(Obj **) (s + 4008) = 0;
}
