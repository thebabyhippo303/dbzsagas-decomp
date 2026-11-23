/* Weapon__Destroy @ 0x800DD79C (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

void Emitter__Kill(void *);
void fn_801843CC(void *);
void fn_8022AB9C(void *, int);
void fn_80186410(void *);
void fn_80200478(void *);
void memFree(void *);
void fn_801DB144(void *, int);
extern void *lbl_80335628 __attribute__((section(".data")));

typedef struct Weapon {
    void *head;
    char pad[0x44];
    volatile void *obj;
    void *extra;
    void *emitter;
    char pad2[0x10];
    void *vtable;
} Weapon;

void Weapon__Destroy(Weapon *self, s32 flags) {
    void *extra;

    self->vtable = &lbl_80335628;
    if (self->obj != 0) {
        if (self->emitter != 0) {
            Emitter__Kill(self->emitter);
            self->emitter = 0;
        }
        if (*(s32 *)((char *)self->head + 4) != 0) {
            fn_8022AB9C((void *)self->obj, 0);
            fn_80186410((void *)self->obj);
        }
        fn_80200478((void *)self->obj);
        memFree((void *)self->obj);
        extra = self->extra;
        self->obj = 0;
        if (extra != 0) {
            fn_801DB144(extra, 3);
        }
    }
    if (flags & 1) {
        fn_801843CC(self);
    }
}
