/* Sphere__AddChild @ 0x8026B738 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Sphere__AddChild @ 0x8026B738 (0xCC). ProDG -O2. */
typedef struct Sphere Sphere;

typedef struct {
    char pad[0x358];
    short check_adjust;
    short pad2;
    int (*check_child)(Sphere *self);
} SphereVtable;

struct Sphere {
    Sphere *parent;
    Sphere *first_child;
    Sphere *next_sibling;
    Sphere *previous_sibling;
    char pad[0x188];
    int flag;
    SphereVtable *vtable;
};

extern void Sphere__RemoveFromParent(Sphere *self);
extern void fn_8026B700(Sphere *self);

void Sphere__AddChild(Sphere *self, Sphere *child) {
    int flag;
    Sphere *last;

    if (child == 0 || child == self) {
        return;
    }
    Sphere__RemoveFromParent(child);
    if (self->flag != 0) {
        flag = 0;
        if (child->flag != 0 &&
            child->vtable->check_child((Sphere *)((char *)child + child->vtable->check_adjust)) != 0) {
            flag = 1;
        }
        self->flag = flag;
        if (flag == 0) {
            fn_8026B700(self);
        }
    }
    if (self->first_child == 0) {
        self->first_child = child;
    } else {
        last = self->first_child;
        while (last->next_sibling != 0) {
            last = last->next_sibling;
        }
        last->next_sibling = child;
        child->previous_sibling = last;
    }
    child->parent = self;
}
