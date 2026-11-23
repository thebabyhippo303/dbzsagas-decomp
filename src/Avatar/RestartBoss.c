/* Avatar__RestartBoss @ 0x8003E380 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match candidate: Avatar__RestartBoss @ 0x8003E380 (0x24). ProDG -O2. */
typedef struct Inner {
    char pad[0x4e8];
    int field_4e8;
} Inner;
typedef struct Sub {
    char pad0[0x7e4];
    int field_7e4;
    char pad1[0xb8c - 0x7e8];
    Inner *field_b8c;
} Sub;
typedef struct Obj {
    char pad[0xc8];
    Sub *field_c8;
} Obj;

extern int lbl_803DC460;

void Avatar__RestartBoss(Obj *self) {
    Sub *p = self->field_c8;
    lbl_803DC460 = 1;
    if (p->field_7e4 != 0)
        return;
    p->field_b8c->field_4e8 = 0; /* r0 still 0 from cmp */
}
