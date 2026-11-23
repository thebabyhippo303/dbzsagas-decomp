/* VarBool__Destroy @ 0x8018F144 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarBool__Destroy @ 0x8018F144 (0x34). ProDG -O2. */
typedef struct {
    char pad[4];
    void *vtable;
} VarBool;

extern char lbl_8033F230[];
extern void fn_801843CC(void *self);

void VarBool__Destroy(VarBool *self, int flags) {
    self->vtable = lbl_8033F230;
    if (flags & 1)
        fn_801843CC(self);
}
