/* VarMatrix4__Destroy @ 0x8018F268 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarMatrix4__Destroy @ 0x8018F268 (0x34). ProDG -O2. */
extern char lbl_8033F230[];
extern void fn_801843CC(void *self);

void VarMatrix4__Destroy(void *self, int flags) {
    *(void **)((char *)self + 4) = lbl_8033F230;
    if (flags & 1)
        fn_801843CC(self);
}
