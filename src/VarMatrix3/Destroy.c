/* VarMatrix3__Destroy @ 0x8018F220 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarMatrix3__Destroy @ 0x8018F220 (0x34). ProDG -O2. */
typedef struct {
    char pad[4];
    void *vtable;
} VarMatrix3;

extern char lbl_8033F230[];
extern void fn_801843CC(void *object);

void VarMatrix3__Destroy(VarMatrix3 *self, unsigned int flags) {
    self->vtable = lbl_8033F230;
    if (flags & 1)
        fn_801843CC(self);
}
