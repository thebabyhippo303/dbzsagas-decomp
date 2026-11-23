/* Actor__GetPosition @ 0x802AC2D8 (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;

void *Script__PopActor(void *, void *, s32);
void Script__PushFloat(void *, s32, f32);

typedef struct { f32 x; f32 y; f32 z; } Vec3;
typedef struct { char pad[0x30]; Vec3 pos; } ScriptInner;
typedef struct { char pad[0x10]; ScriptInner inner; } ScriptHost;

void Actor__GetPosition(void *script, s32 ctx) {
    char *actor;
    ScriptInner *inner;
    Vec3 b;
    Vec3 a;
    Vec3 sq;
    Vec3 *cp;
    Vec3 *sp;
    Vec3 *p;
    f32 sum;

    actor = Script__PopActor(script, ctx, 0);
    inner = &((ScriptHost *)script)->inner;
    a.x = inner->pos.x;
    a.y = inner->pos.y;
    a.z = inner->pos.z;
    b = a;
    cp = &b;
    p = (Vec3 *)(actor + 56);
    {
        f32 px = *(f32 *)(actor + 56);
        f32 py = p->y;
        f32 pz = p->z;
        f32 cx = cp->x;
        f32 cy = cp->y;
        f32 cz = cp->z;
        f32 dy = cy - py;
        f32 dz = cz - pz;
        f32 dx = cx - px;
        a.y = dy;
        a.z = dz;
        a.x = dx;
        sq.x = dx * dx;
        sq.y = dy * dy;
        sq.z = dz * dz;
    }
    sp = &sq;
    sum = sq.x + sp->y + sp->z;
    Script__PushFloat(script, ctx, *(f32 *)(actor + 56));
    Script__PushFloat(script, ctx, p->y);
    Script__PushFloat(script, ctx, p->z);
    Script__PushFloat(script, ctx, sum);
}
