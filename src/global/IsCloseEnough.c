/* IsCloseEnough @ 0x800E399C (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* WIP ~30%: IsCloseEnough @ 0x800E399C. Notes: cpos copied via INT stores x,z,y order (IVec3 struct-assign groups wrong; need interleave); t=(tbl112-tbl100)*k must not fuse into fmadds with bpos.y (d/t split failed); B-side loads must stay after off-stores (mine hoist); v.x must spill+reload (mine forwards). */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
typedef struct { f32 x, y, z; } Vec3;
typedef struct { s32 x, y, z; } IVec3;
void Debug__FormatMessage(char *, ...);
extern char lbl_803231E4[];
extern f32 lbl_80323204 __attribute__((section(".data")));
extern f32 lbl_80323208 __attribute__((section(".data")));
extern f32 lbl_8032320C __attribute__((section(".data")));
s32 IsCloseEnough(void *a, void *b, void *c) {
    IVec3 cpos;
    Vec3 bpos;
    Vec3 v;
    Vec3 sq;
    f32 d;
    f32 t;
    Vec3 *bp = (Vec3 *)((char *)b + 56);
    void *tbl = *(void **)((char *)b + 132);
    cpos = *(IVec3 *)((char *)c + 56);
    d = *(f32 *)((char *)tbl + 112) - *(f32 *)((char *)tbl + 100);
    t = d * lbl_80323204;
    v.x = lbl_80323208;
    v.z = lbl_80323208;
    v.y = t;
    bpos.y = bp->y + t;
    bpos.x = bp->x + v.x;
    bpos.z = bp->z;
    v.x = *(f32 *)&cpos.x - bpos.x;
    v.z = *(f32 *)&cpos.z - bpos.z;
    v.y = *(f32 *)&cpos.y - bpos.y;
    sq.x = v.x * v.x;
    sq.y = v.y * v.y;
    sq.z = v.z * v.z;
    if (sq.x + sq.y + sq.z < lbl_8032320C) {
        return 1;
    }
    Debug__FormatMessage(lbl_803231E4, c);
    return 0;
}
