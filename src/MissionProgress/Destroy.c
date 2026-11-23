/* MissionProgress__Destroy @ 0x80129F00 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissionProgress__Destroy @ 0x80129F00 (0x58). ProDG -O2. */
extern char lbl_8032CDD8[];
extern void fn_80184430(void *obj);
extern void fn_801843CC(void *obj);

void MissionProgress__Destroy(void *self, int flags) {
    void *child = *(void **)self;
    *(void **)((char *)self + 24) = lbl_8032CDD8;
    if (child != 0)
        fn_80184430(child);
    if (flags & 1)
        fn_801843CC(self);
}
