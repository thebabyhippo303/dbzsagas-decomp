/* VarString__Destroy @ 0x8018F0FC (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarString__Destroy @ 0x8018F0FC (0x34). ProDG -O2. */
typedef struct {
    char pad[4];
    void *vtable;
} VarString;

extern char lbl_8033F230[];
extern void fn_801843CC(void *object);

void VarString__Destroy(VarString *self, unsigned int flags) {
    self->vtable = lbl_8033F230;
    if (flags & 1) {
        fn_801843CC(self);
    }
}
