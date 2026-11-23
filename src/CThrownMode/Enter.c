/* CThrownMode__Enter @ 0x8009FEC0 (size: 0x130, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: CThrownMode__Enter @ 0x8009FEC0 (0x130). ProDG -O2. */
typedef float f32;
typedef struct V3 { f32 x, y, z; } V3;
typedef struct Idx { char pad[12]; int index; } Idx;
typedef struct Name {
    char pad0[16];
    unsigned flags;
    char pad1[0x54];
    V3 vec;
    char pad2[0x19D8 - 0x68 - 12];
    Idx *idx;
} Name;
typedef struct Inner {
    char pad0[0x68];
    V3 vec;
    char pad1[0x2CC - 0x68 - 12];
    Name *owner;
    char pad2[0x1A34 - 0x2CC - 4];
    V3 pos;
} Inner;
typedef struct Victim {
    char pad[0x2A4];
    Inner *inner;
} Victim;
typedef struct Mode {
    Name *name;
    char pad[0x7C - 4];
    Victim *victim;
    V3 dir;
} Mode;

extern f32 lbl_80320024 __attribute__((section(".data")));
extern V3 lbl_803926C0[] __attribute__((section(".data")));
extern char lbl_80320000[];
extern void Protagonist__AttachTo(Name *, Inner *);
extern void Debug__FormatMessage(char *fmt, ...);

static inline void SetV3(V3 *v, f32 x, f32 y, f32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}

static inline void SetPos(Inner *in, V3 v) {
    in->pos = v;
}

void CThrownMode__Enter(Mode *self) {
    V3 a;

    Protagonist__AttachTo(self->name, self->victim->inner);
    SetV3(&a, lbl_80320024, lbl_80320024, lbl_80320024);
    SetPos(self->victim->inner, a);
    self->victim->inner->owner = self->name;
    self->dir = lbl_803926C0[self->name->idx->index];
    self->name->flags |= 0x80;
    SetV3(&self->name->vec, lbl_80320024, lbl_80320024, lbl_80320024);
    SetV3(&self->victim->inner->vec, lbl_80320024, lbl_80320024, lbl_80320024);
    Debug__FormatMessage(lbl_80320000, self->name, self->victim->inner);
}
