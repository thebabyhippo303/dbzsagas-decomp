/* Particle__FreeEntry @ 0x8022128C (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct IntrusiveList {
    void *head;
    void *tail;
    int nextOffset;
    int prevOffset;
} IntrusiveList;

typedef struct Particle {
    int id;
    int link;
    int index;
    char pad[0x30 - 0xC];
    float age;
    char pad2[0xB4 - 0x34];
    void *emitter;
    void (*callback)(void *arg, int id);
    void *callbackArg;
} Particle;

void Emitter__Kill(void *emitter);
void IntrusiveList__Remove(IntrusiveList *list, void *node);
void IntrusiveList__PushFront(IntrusiveList *list, void *node);

extern float lbl_80346714 __attribute__((section(".rodata")));
extern IntrusiveList lbl_803AD1BC[];
extern IntrusiveList lbl_803AD07C[];
extern IntrusiveList lbl_803AD06C;

void Particle__FreeEntry(Particle *self) {
    if (self->emitter != 0) {
        Emitter__Kill(self->emitter);
    }
    if (self->callback != 0) {
        self->callback(self->callbackArg, self->id);
    }
    self->id = 0;
    if (self->age <= lbl_80346714) {
        goto low;
    }
    IntrusiveList__Remove(&lbl_803AD1BC[self->index], self);
    goto join;
low:
    IntrusiveList__Remove(&lbl_803AD07C[self->index], self);
join:
    IntrusiveList__PushFront(&lbl_803AD06C, self);
    self->link = 0;
}
