/* Aabb__WriteShapeDescriptor @ 0x80024A40 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct { s32 x; s32 y; s32 z; } Vec3;
typedef struct { char pad[0xE4]; Vec3 first; Vec3 second; } Aabb;
typedef struct { s32 type; char pad[0x28]; Vec3 first; Vec3 second; } ShapeDescriptor;

s32 Aabb__WriteShapeDescriptor(Aabb *aabb, ShapeDescriptor *descriptor) {
    descriptor->type = 2;
    descriptor->first = aabb->first;
    descriptor->second = aabb->second;
    return 1;
}
