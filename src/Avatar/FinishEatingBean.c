/* Avatar__FinishEatingBean @ 0x8008DCE0 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vec3i {
    int x;
    int y;
    int z;
} Vec3i;

extern void Avatar__RemoveHandItemImpl(void *item, int flags);
extern void Avatar__RemoveGuisesImpl(void *self, int flags);
extern void fn_80251708(void *name, int code, int *id, void *self);
extern char lbl_803B1DDC[] __attribute__((section(".data")));

void Avatar__FinishEatingBean(void *self) {
    void *bean;
    int id;
    void *vt;
    void (*fn2)(void *, int);
    void (*fn0)(void *);
    Vec3i *src;
    Vec3i *dst;

    bean = *(void **)((char *)self + 0x1BB0);
    id = *(int *)((char *)self + 0x19B4);
    if (bean != 0) {
        vt = *(void **)((char *)bean + 0x34);
        fn2 = *(void (**)(void *, int))((char *)vt + 0x64);
        fn2((char *)bean + *(short *)((char *)vt + 0x60), 0);
        Avatar__RemoveHandItemImpl(*(void **)((char *)self + 0x159C), 0);
        src = (Vec3i *)((char *)self + 0x1BD4);
        dst = (Vec3i *)((char *)bean + 0x38);
        *dst = *src;
        vt = *(void **)((char *)bean + 0x34);
        fn0 = *(void (**)(void *))((char *)vt + 0x94);
        fn0((char *)bean + *(short *)((char *)vt + 0x90));
        vt = *(void **)((char *)bean + 0x34);
        fn0 = *(void (**)(void *))((char *)vt + 0xAC);
        fn0((char *)bean + *(short *)((char *)vt + 0xA8));
    }
    Avatar__RemoveGuisesImpl(self, 0);
    fn_80251708(lbl_803B1DDC, 0xC0044, &id, self);
    *(int *)((char *)self + 0x2B8) = 0;
    *(int *)((char *)self + 0x71C) = 6;
    *(int *)((char *)self + 0x2BC) = 0;
}
