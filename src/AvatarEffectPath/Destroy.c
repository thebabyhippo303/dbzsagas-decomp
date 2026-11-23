/* AvatarEffectPath__Destroy @ 0x8009C8F8 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarEffectPath__Destroy @ 0x8009C8F8 (0x34). ProDG -O2. */
typedef struct {
    char pad[12];
    void *vtable;
} AvatarEffectPath;

extern char lbl_80335228[];
extern void fn_801843CC(void *self);

void AvatarEffectPath__Destroy(AvatarEffectPath *self, int flags) {
    self->vtable = lbl_80335228;
    if (flags & 1) {
        fn_801843CC(self);
    }
}
