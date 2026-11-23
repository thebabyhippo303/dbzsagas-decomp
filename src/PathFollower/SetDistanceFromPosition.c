/* PathFollower__SetDistanceFromPosition @ 0x802CC4DC (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
typedef struct { s32 x, y, z; } V3i;

typedef struct T T;
typedef struct {
    char pad0[32];
    s16 adjust;
    char pad1[2];
    f32 (*fn)(void *, V3i *);
} Vtbl;
struct T {
    char pad[20];
    Vtbl *vtbl;
};

typedef struct {
    char pad[4];
    T *t;
    char pad2[20];
    f32 dist;
} PF;

void PathFollower__SetDistanceFromPosition(PF *self, V3i *point) {
    V3i cmd;
    T *t;
    cmd = *point;
    t = self->t;
    self->dist = t->vtbl->fn((char *)t + t->vtbl->adjust, &cmd);
}
