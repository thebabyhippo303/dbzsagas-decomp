/* ReflectionMgr__RenderAll @ 0x80227FF0 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

extern u8 lbl_803ADD5C[];

void Frustum__TransformToWorld(void *, void *);
void ReflectionMgr__RenderReflection(void *, void *);

void ReflectionMgr__RenderAll(void *mgr) {
    u8 *g = lbl_803ADD5C;
    void *n;

    if (M2C_FIELD(g, s32 *, 36) == 0) {
        return;
    }
    if (M2C_FIELD(g, void **, 16) == 0) {
        return;
    }
    Frustum__TransformToWorld((char *)mgr + 152, (char *)mgr + 644);
    n = M2C_FIELD(g, void **, 16);
    if (n != NULL) {
        do {
            ReflectionMgr__RenderReflection(n, mgr);
            n = M2C_FIELD(n, void **, 0);
        } while (n != NULL);
    }
}
