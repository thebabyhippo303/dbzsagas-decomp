/* CollisionVolumeSet__DebugDraw @ 0x8025E280 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void OrientedBox__DebugDraw(void *, s32);

typedef struct {
    char pad[4];
    void *box0;
    u32 arr;
    u32 count;
} CVS;

void CollisionVolumeSet__DebugDraw(CVS *self, s32 kind) {
    s32 i = 0;
    OrientedBox__DebugDraw(self->box0, 6);
    for (i = 0; (u32) i < self->count; i++) {
        OrientedBox__DebugDraw((void *)(i * 92 + self->arr + 4), kind);
    }
}
