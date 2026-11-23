/* SceneMgr__IsInstanceInScene @ 0x8022A5C8 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void *SceneMgr__GetScene(u32);
void *SceneNode__FindChild(void *, s32);
void *Database__GetArrayElement(void *, s32);

void *SceneMgr__IsInstanceInScene(s32 inst, u32 sceneId) {
    void *scene;
    void *node;
    void *r;
    s32 i;

    scene = SceneMgr__GetScene(sceneId);
    if (scene == NULL) {
        return NULL;
    }
    node = M2C_FIELD(scene, void **, 720);
    if (node == NULL) {
        return NULL;
    }
    r = SceneNode__FindChild(node, inst);
    if (r != NULL) {
        return r;
    }
    if (M2C_FIELD(scene, void **, 724) != NULL) {
        for (i = 0; i < *(u16 *)M2C_FIELD(scene, void **, 724); i++) {
            r = SceneNode__FindChild(M2C_FIELD(Database__GetArrayElement(M2C_FIELD(scene, void **, 724), i), void **, 136), inst);
            if (r != NULL) {
                return r;
            }
        }
    }
    return NULL;
}
