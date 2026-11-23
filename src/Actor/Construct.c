/* Actor__Construct @ 0x802B3248 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Simple__ConstructBase(void *self);
extern void PathFollower__Construct(void *self);

extern char lbl_80353BA0[];
extern char lbl_80353B80[];
extern char lbl_80353AB0[];
extern char lbl_80353C48[];
extern int lbl_803DE614;

void *Actor__Construct(char *self) {
    Simple__ConstructBase(self);
    PathFollower__Construct(self + 1044);
    *(void **)(self + 0x198) = lbl_80353BA0;
    *(void **)(self + 0x1B4) = lbl_80353B80;
    *(void **)(self + 0x4C8) = lbl_80353AB0;
    *(void **)(self + 0x34) = lbl_80353C48;
    *(int *)(self + 0x12C) = lbl_803DE614;
    *(int *)(self + 0x4F4) = 0;
    *(int *)(self + 0x4D0) = 0;
    return self;
}
