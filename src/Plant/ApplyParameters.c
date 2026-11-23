/* Plant__ApplyParameters @ 0x800F6CA0 (size: 0x2E4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct PlantParamChild {
    void *item;
    char pad_04[4];
    struct PlantParamChild *next;
} PlantParamChild;
typedef struct PlantVec3 {
    float x, y, z;
} PlantVec3;
typedef struct PlantParameterEntry {
    int field_00;
    struct PlantParameterEntry *next;
    PlantParamChild *children;
    char pad_0C[16];
    float new00;
    float cur00;
    float new01;
    float cur01;
    int new02;
    int cur02;
    float new03;
    float cur03;
    float new04;
    float cur04;
    float new05;
    float cur05;
    float new06;
    float cur06;
    float new07;
    float cur07;
    float new08;
    float cur08;
    float new09;
    float cur09;
    float new10;
    float cur10;
    int new11;
    int cur11;
    int new12;
    int cur12;
    PlantVec3 src0;
    PlantVec3 dst0;
    PlantVec3 src1;
    PlantVec3 dst1;
    PlantVec3 src2;
    PlantVec3 dst2;
    float new16;
    float cur16;
    float new17;
    float cur17;
} PlantParameterEntry;
extern void Plant__UpdateSimulation(void *self);
void Plant__ApplyParameters(PlantParameterEntry *entry) {
    int changed;
    float new00 = entry->new00;
    PlantParamChild *child;
    changed = 0;
    if (entry->cur00 != new00) { entry->cur00 = new00; changed = 1; }
    if (entry->cur01 != entry->new01) { entry->cur01 = entry->new01; changed = 1; }
    if (entry->cur02 != entry->new02) { entry->cur02 = entry->new02; changed = 1; }
    if (entry->cur03 != entry->new03) { entry->cur03 = entry->new03; changed = 1; }
    if (entry->cur04 != entry->new04) { entry->cur04 = entry->new04; changed = 1; }
    if (entry->cur05 != entry->new05) { entry->cur05 = entry->new05; changed = 1; }
    if (entry->cur06 != entry->new06) { entry->cur06 = entry->new06; changed = 1; }
    if (entry->cur07 != entry->new07) { entry->cur07 = entry->new07; changed = 1; }
    if (entry->cur08 != entry->new08) { entry->cur08 = entry->new08; changed = 1; }
    if (entry->cur09 != entry->new09) { entry->cur09 = entry->new09; changed = 1; }
    if (entry->cur10 != entry->new10) { entry->cur10 = entry->new10; changed = 1; }
    if (entry->cur11 != entry->new11) { entry->cur11 = entry->new11; changed = 1; }
    if (entry->cur12 != entry->new12) { entry->cur12 = entry->new12; changed = 1; }
    {
        int same = 0;
        PlantVec3 *dst = &entry->dst0;
        PlantVec3 *src = &entry->src0;
        same = (entry->dst0.x == entry->src0.x) && (dst->y == src->y) && (dst->z == src->z);
        if (same == 0) {
            entry->dst0 = entry->src0;
            changed = 1;
        }
    }
    {
        int same = 0;
        PlantVec3 *dst = &entry->dst1;
        PlantVec3 *src = &entry->src1;
        same = (entry->dst1.x == entry->src1.x) && (dst->y == src->y) && (dst->z == src->z);
        if (same == 0) {
            entry->dst1 = entry->src1;
            changed = 1;
        }
    }
    {
        int same = 0;
        PlantVec3 *dst = &entry->dst2;
        PlantVec3 *src = &entry->src2;
        same = (entry->dst2.x == entry->src2.x) && (dst->y == src->y) && (dst->z == src->z);
        if (same == 0) {
            entry->dst2 = entry->src2;
            changed = 1;
        }
    }
    if (entry->cur16 != entry->new16) { entry->cur16 = entry->new16; changed = 1; }
    if (entry->cur17 != entry->new17) { entry->cur17 = entry->new17; changed = 1; }
    if (changed != 0) {
        child = entry->children;
        if (child != 0) {
            do {
                Plant__UpdateSimulation(child->item);
                child = child->next;
            } while (child != 0);
        }
    }
}
