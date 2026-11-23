/* WeaponDefinition__Destroy @ 0x800DD348 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_80335660[];
void fn_801843CC(void *self);

void WeaponDefinition__Destroy(void *self, int flags) {
    *(void **)((char *)self + 0x54) = lbl_80335660;
    if (flags & 1)
        fn_801843CC(self);
}
