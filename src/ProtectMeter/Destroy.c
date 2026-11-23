/* ProtectMeter__Destroy @ 0x8011F9FC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ProtectMeter__Destroy @ 0x8011F9FC (0x48). ProDG -O2. */
typedef struct {
    char pad[0x10];
    void *child;
} ProtectMeter;

extern void Remove(void *child, int flags);
extern void fn_801843CC(void *self);

void ProtectMeter__Destroy(ProtectMeter *self, int flags) {
    Remove(self->child, 0);
    if ((flags & 1) != 0)
        fn_801843CC(self);
}
