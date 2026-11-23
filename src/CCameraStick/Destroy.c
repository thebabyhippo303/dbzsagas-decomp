/* CCameraStick__Destroy @ 0x800CD408 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CCameraStick__Destroy @ 0x800CD408 (0x84). ProDG -O2. */
typedef struct {
    char pad[0x3C];
    void *vtable;
    char pad2[0x8];
    void *a48;
    char pad3[0x14];
    void *a60;
    char pad4[0x24];
    void *a88;
} CCameraStick;

extern char lbl_80335750[] __attribute__((section(".data")));
extern char lbl_803357C8[] __attribute__((section(".data")));
extern void CameraCollisionBlockers__Destroy(void *blockers, int mode);
extern void fn_801843CC(void *resource);
extern void fn_800B93BC(CCameraStick *self, void *arg);

void CCameraStick__Destroy(CCameraStick *self, void *arg) {
    self->vtable = lbl_80335750;
    if (self->a88 != 0) {
        CameraCollisionBlockers__Destroy(self->a88, 3);
    }
    self->vtable = lbl_803357C8;
    if (self->a60 != 0) {
        fn_801843CC(self->a60);
    }
    if (self->a48 != 0) {
        fn_801843CC(self->a48);
    }
    fn_800B93BC(self, arg);
}
