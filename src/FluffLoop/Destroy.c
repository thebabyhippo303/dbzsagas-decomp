/* FluffLoop__Destroy @ 0x8004CEA8 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
void fn_8004E40C(void *child, int mode);
void fn_801843CC(void *self);
extern int lbl_8031A9A0 __attribute__((section(".data")));
extern int lbl_80310F70 __attribute__((section(".data")));
typedef struct {
    char pad[0x19C];
    void *vtable;
} FluffLoopChild;
typedef struct {
    void *vtable;
    int first;
    int second;
    FluffLoopChild child;
} FluffLoop;

void FluffLoop__Destroy(FluffLoop *self, int flags) {
    self->vtable = &lbl_8031A9A0;
    fn_8004E40C(&self->child, 2);
    self->vtable = &lbl_80310F70;
    if (flags & 1) {
        fn_801843CC(self);
    }
}
