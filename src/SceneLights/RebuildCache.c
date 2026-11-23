/* SceneLights__RebuildCache @ 0x8021AAB8 (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void ShadowMgr__RemoveLightFromAll(s32);
void ShadowMgr__AddLightToAll(void *);
extern f32 lbl_80346610 __attribute__((section(".data")));

typedef struct { char pad[0x14]; void *head; char pad2[0x54 - 0x18]; void *cached; char pad3[0x8C - 0x58]; s32 flag; } SL;
extern SL lbl_803ACFCC __attribute__((section(".data")));

typedef struct { f32 x, y, z; } V3;
typedef struct LNode { struct LNode *next; s32 flags; char pad[4]; f32 c; char pad2[12]; f32 x; f32 y; f32 z; } LNode;

void SceneLights__RebuildCache(void) {
    V3 sp8;
    V3 *q;
    V3 *p;
    LNode *node;
    void *old;
    void *nw;
    f32 best;
    f32 best0;
    f32 d2;
    f32 fx;
    f32 fy;
    f32 fz;
    if (lbl_803ACFCC.flag != 0)
        return;
    node = (LNode *)lbl_803ACFCC.head;
    old = lbl_803ACFCC.cached;
    lbl_803ACFCC.cached = NULL;
    best = lbl_80346610;
    if (node != NULL) {
        best0 = best;
        q = &sp8;
        do {
            if ((node->flags & 5) != 5)
                goto next;
            p = (V3 *)((char *)node + 0x1C);
            fx = node->x;
            fy = p->y;
            fz = p->z;
            sp8.x = fx * fx;
            sp8.y = fy * fy;
            sp8.z = fz * fz;
            d2 = sp8.x + q->y + q->z;
            if (d2 <= best)
                goto next;
            if (node->c <= best0)
                goto next;
            best = d2;
            lbl_803ACFCC.cached = (void *)((char *)node + 4);
next:
            node = node->next;
        } while (node != NULL);
    }
    if (old == lbl_803ACFCC.cached)
        return;
    if (old != NULL)
        ShadowMgr__RemoveLightFromAll((s32)old);
    nw = lbl_803ACFCC.cached;
    if (nw != NULL)
        ShadowMgr__AddLightToAll(nw);
}
