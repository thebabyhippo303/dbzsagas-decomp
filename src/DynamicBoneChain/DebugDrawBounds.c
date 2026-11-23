/* DynamicBoneChain__DebugDrawBounds @ 0x801EE350 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;
typedef struct { f32 x, y, z; } V3;
typedef struct DynamicBoneChain {
    char pad0[0x38]; struct DynamicBoneChain *next;
    char pad1[0x74 - 0x3C]; s32 f74; s32 f78;
    char pad2[0xE8 - 0x7C]; V3 center; char pad3[0xF8 - 0xF4]; char extents[1];
} DynamicBoneChain;

void DebugDraw__BoxTransformed(void *, void *, void *, s32);
void DynamicBoneChain__DebugDrawBounds(DynamicBoneChain *chain);

void DynamicBoneChain__DebugDrawBounds(DynamicBoneChain *chain) {
    V3 neg;
    V3 *c;
    if (chain->f78 == 0 && chain->f74 != 0) {
        c = &chain->center;
        neg.x = -chain->center.x;
        neg.y = -c->y;
        neg.z = -c->z;
        DebugDraw__BoxTransformed(c, &neg, chain->extents, 6);
    }
    if (chain->next != 0) {
        DynamicBoneChain__DebugDrawBounds(chain->next);
    }
}
