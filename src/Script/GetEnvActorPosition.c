/* Script__GetEnvActorPosition @ 0x8002B0D4 (size: 0x17C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
typedef struct V3 { f32 x, y, z; } V3;
typedef struct V3i { s32 x, y, z; } V3i;
typedef struct Mask { s32 value; s32 bits; } Mask;
s32 Script__PopInt(void *, s32);
void Script__PushFloat(void *, s32, f32);
extern f32 lbl_803115F4 __attribute__((section(".data")));
extern f32 lbl_803115F8 __attribute__((section(".data")));
extern Mask lbl_803946B4 __attribute__((section(".data")));

void Script__GetEnvActorPosition(char *script, s32 ctx) {
    V3i posi;
    V3 copy;
    V3 delta;
    V3 sq;
    V3 *p;
    V3 *cp;
    V3 *sp;
    char *actor;
    f32 tx, ty, tz, sum, px, py, pz;
    actor = (char *)Script__PopInt(script, ctx);
    if (actor == 0 || ((*(s32 *)actor & lbl_803946B4.bits) == lbl_803946B4.value && *(s32 *)(actor + 0x5F8) != 0)) {
        Script__PushFloat(script, ctx, lbl_803115F4);
        Script__PushFloat(script, ctx, lbl_803115F4);
        Script__PushFloat(script, ctx, lbl_803115F4);
        Script__PushFloat(script, ctx, lbl_803115F8);
        return;
    }
    posi = *(V3i *)(actor + 0x38);
    p = (V3 *)&posi;
    tx = *(f32 *)(script + 0x40);
    ty = *(f32 *)(script + 0x44);
    tz = *(f32 *)(script + 0x48);
    copy.x = tx;
    copy.y = ty;
    copy.z = tz;
    px = p->x;
    py = p->y;
    pz = p->z;
    delta.x = tx - px;
    delta.y = ty - py;
    delta.z = tz - pz;
    sq.x = delta.x * delta.x;
    sq.y = delta.y * delta.y;
    sq.z = delta.z * delta.z;
    sp = &sq;
    sum = sq.x + sp->y + sp->z;
    Script__PushFloat(script, ctx, px);
    Script__PushFloat(script, ctx, p->y);
    Script__PushFloat(script, ctx, p->z);
    Script__PushFloat(script, ctx, sum);
}
