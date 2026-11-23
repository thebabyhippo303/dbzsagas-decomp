/* Boss__WarpToPos @ 0x8004457C (size: 0x114, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

typedef struct Mask { s32 value; s32 mask; } Mask;
typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct Actor { s32 flags; char pad[0x2D0]; s32 f2D4; char pad2[0x50C]; s32 f7E4; } Actor;
typedef struct Node { Actor *item; char pad[0x10]; struct Node *next; } Node;
typedef struct List { char pad[0x2C]; Node *head; } List;

void Avatar__SetPositionImpl(Actor *, Vec3 *, f32);
f32 Script__PopFloat(void *, void *);
extern Mask lbl_803945E4 __attribute__((section(".data")));
extern List *lbl_803DCC98;
extern f32 lbl_803DE520;

void Boss__WarpToPos(void *arg0, void *arg1) {
    Vec3 pos;
    f32 x = Script__PopFloat(arg0, arg1);
    f32 y = Script__PopFloat(arg0, arg1);
    f32 z = Script__PopFloat(arg0, arg1);
    f32 s = Script__PopFloat(arg0, arg1);
    Actor *found = 0;
    List *l = lbl_803DCC98;
    Node **hp = &l->head;
    Node *n = *hp;

    for (; n != 0;) {
        Actor *a = n->item;
        if ((a->flags & lbl_803945E4.mask) == lbl_803945E4.value && a->f7E4 == 0 && a->f2D4 != 0) {
            found = a;
        }
        if (n != 0) {
            n = n->next;
        } else {
            n = *hp;
        }
    }
    if (found != 0) {
        Vec3 *pp = &pos;
        pp->x = x;
        pp->y = y;
        pp->z = z;
        Avatar__SetPositionImpl(found, pp, s * lbl_803DE520);
    }
}
