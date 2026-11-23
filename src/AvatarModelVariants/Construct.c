/* AvatarModelVariants__Construct @ 0x8009AA4C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct E { int a, b, c; } E;
typedef struct AvatarModelVariants {
    int f0, f4;
    E e[10];
    int f80;
    int n[10];
} AvatarModelVariants;

AvatarModelVariants *AvatarModelVariants__Construct(AvatarModelVariants *self, int v) {
    int i;
    self->f0 = v;
    self->f4 = 0;
    for (i = 0; i < 10; i++) {
        self->e[i].a = 0;
        self->e[i].b = 0;
        self->e[i].c = 0;
        self->n[i] = 10;
    }
    self->f80 = 0;
    return self;
}
