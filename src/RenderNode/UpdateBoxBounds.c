/* RenderNode__UpdateBoxBounds @ 0x8029F820 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* WIP ~36% (cand 976fddbc, has e-reloads + right homing): RenderNode @ 0x8029F820. Keys: minimal live-across-calls (arg1->r30, box->r29); named c (r9), pq (r7), pe (r11); V3-struct copy; pe->z/pe->y reloads defeat store-forwarding ONLY when pe assigned BEFORE c (c-before-pe kills reloads!). Walls: copy x->r8 (want r10) + addi-r11 placement (target addi-first, ours lwz-first); x/y reg swap cascades downstream f-regs. V3i-struct/field copies and s32-temps lose reloads or homing. Next: flip copy x to r10 (field-assign-x gave r10 but lost r11-base; try hybrid) while keeping pe-before-c + reloads. */
typedef int s32; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { f32 x, y, z; } V3;
void AABB__Transform(void *, void *, void *);
void AABB__GetCenter(void *, void *);
f32 sqrtf(f32);
void RenderNode__UpdateBoxBounds(void *arg0, void *arg1) {
    V3 e;
    V3 sq;
    void *box;
    V3 *c;
    V3 *pq;
    V3 *pe;
    f32 dx, dy, dz, qx, s;
    box = (char *)arg1 + 96;
    AABB__Transform((char *)arg0 + 20, box, (char *)arg1 + 16);
    AABB__GetCenter(&e, box);
    pe = &e;
    c = (V3 *)((char *)arg1 + 80);
    *c = e;
    dy = c->y - ((V3 *)box)->y;
    dz = c->z - ((V3 *)box)->z;
    e.y = dy;
    e.z = dz;
    dx = c->x - *(f32 *)((char *)arg1 + 96);
    e.x = dx;
    pq = &sq;
    pq->z = pe->z * pe->z;
    qx = dx * dx;
    pq->x = qx;
    pq->y = pe->y * pe->y;
    s = qx + pq->y + pq->z;
    *(f32 *)((char *)arg1 + 92) = sqrtf(s);
}
