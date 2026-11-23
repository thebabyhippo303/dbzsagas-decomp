/* Sphere__Reparent @ 0x8026B698 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Sphere__RemoveFromParent(void *self);
extern void Sphere__AddChild(void *parent, void *child);

void Sphere__SetParent(void *self, void *parent) {
    Sphere__RemoveFromParent(self);
    if (parent != 0)
        Sphere__AddChild(parent, self);
}
