/* Script__GetGrenadeDist @ 0x8002A660 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
void *Script__PopInt(void *script, void *context);
void Script__PushFloat(void *script, void *context, f32 value);
void Script__PushInt(void *script, void *context, int value);
f32 sqrtf(f32 x);
typedef struct { f32 x; f32 y; f32 z; } Vec3;
typedef struct { char pad[0x30]; Vec3 pos; } ScriptInner;
typedef struct { char pad[0x10]; ScriptInner inner; } ScriptHost;
typedef struct { f32 pad; Vec3 pos; f32 nearDist; f32 farDist; } RangePoint;
void Script__GetGrenadeDist(void *script, void *context) {
    RangePoint *point;
    ScriptInner *inner;
    Vec3 *pos;
    Vec3 copy;
    Vec3 delta;
    Vec3 squares;
    Vec3 *sq;
    Vec3 *cp;
    f32 dist;
    int cls;
    point = Script__PopInt(script, context);
    inner = &((ScriptHost *)script)->inner;
    pos = &point->pos;
    cp = &copy;
    delta.x = inner->pos.x;
    delta.y = inner->pos.y;
    delta.z = inner->pos.z;
    copy = delta;
    {
        f32 px = point->pos.x;
        f32 py = pos->y;
        f32 pz = pos->z;
        f32 cx = cp->x;
        f32 cy = cp->y;
        f32 cz = cp->z;
        f32 dy = py - cy;
        f32 dz = pz - cz;
        f32 dx = px - cx;
        delta.y = dy;
        delta.z = dz;
        delta.x = dx;
        squares.x = dx * dx;
        squares.y = dy * dy;
        squares.z = dz * dz;
    }
    sq = &squares;
    dist = sqrtf(sq->x + sq->y + sq->z);
    cls = dist < point->farDist;
    if (!(dist >= point->nearDist)) { cls = 2; }
    Script__PushFloat(script, context, point->pos.x);
    Script__PushFloat(script, context, pos->y);
    Script__PushFloat(script, context, pos->z);
    Script__PushInt(script, context, cls);
}
