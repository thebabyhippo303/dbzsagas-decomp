/* Sphere__RemoveFromParent @ 0x8026B804 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Sphere Sphere;

struct Sphere {
    Sphere *parent;
    Sphere *firstChild;
    Sphere *nextSibling;
    Sphere *previousSibling;
};

void Sphere__RemoveFromParent(Sphere *self) {
    Sphere *parent = self->parent;

    if (parent != 0 && parent->firstChild == self) {
        parent->firstChild = self->nextSibling;
    }
    if (self->nextSibling != 0) {
        self->nextSibling->previousSibling = self->previousSibling;
    }
    if (self->previousSibling != 0) {
        self->previousSibling->nextSibling = self->nextSibling;
    }
    *(Sphere *volatile *)&self->previousSibling = 0;
    *(Sphere *volatile *)&self->parent = 0;
    *(Sphere *volatile *)&self->nextSibling = 0;
}
