/* VolumeTrigger__CheckAABB @ 0x800FE530 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct VolumeAABB {
    float x;
    float y;
    float z;
    float w;
} VolumeAABB;

typedef struct VolumeInner {
    char pad[0x60];
    float minX;
    float unused64;
    float minZ;
    float maxX;
    float unused70;
    float maxZ;
} VolumeInner;

typedef struct VolumeCheckVTable {
    char pad[0x78];
    short thisAdjust;
    short pad7A;
    void *(*fn)(void *self, VolumeAABB *box);
} VolumeCheckVTable;

typedef struct VolumeBounds {
    float minX;
    float minZ;
    float maxX;
    float maxZ;
} VolumeBounds;

extern void fn_801C2348(void *value, int mode);

void VolumeTrigger__CheckAABB(char *self, VolumeAABB *box) {
    VolumeInner *inner;
    VolumeBounds bounds;
    VolumeBounds *b;
    VolumeCheckVTable *vtable;
    int hit;

    if (*(int *)(self + 1060) == 0) {
        return;
    }
    b = &bounds;
    inner = *(VolumeInner **)(self + 132);
    b->minX = inner->minX;
    b->minZ = inner->minZ;
    b->maxX = inner->maxX;
    b->maxZ = inner->maxZ;
    hit = 0;
    if (box->z < b->minX) {
    } else if (box->x > b->maxX) {
    } else if (box->y > b->maxZ) {
    } else {
        hit = box->w >= b->minZ;
    }
    if (hit != 0) {
        char *sub = self + 408;
        void *result;
        vtable = *(VolumeCheckVTable **)sub;
        result = vtable->fn(sub + vtable->thisAdjust, box);
        fn_801C2348(result, 4);
    }
}
