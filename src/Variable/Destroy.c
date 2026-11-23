/* Variable__Destroy @ 0x8018EEB4 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Variable__Destroy @ 0x8018EEB4 (0x34). ProDG -O2. */
typedef struct {
    char pad[4];
    void *vtable;
} Variable;

extern char lbl_8033F230[];
extern void fn_801843CC(void *self);

void Variable__Destroy(Variable *self, int flags) {
    self->vtable = lbl_8033F230;
    if (flags & 1)
        fn_801843CC(self);
}
