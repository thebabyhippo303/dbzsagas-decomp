/* SceneMgr__DetachInstance @ 0x8022AB9C (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *SceneMgr__GetScene(u32);
void *SceneMgr__IsInstanceInScene(s32, u32);
void SceneNode__Unlink(void *);
void SceneMgr__DetachInstance(void *, u32);
extern void *lbl_803AD7C0 __attribute__((section(".data")));

typedef struct WNode { struct WNode *next; u32 id; char pad[720 - 8]; void *scene; } WNode;

void SceneMgr__DetachInstance(void *arg0, u32 arg1) {
    void *scene;
    void *inst;
    WNode *node;
    void *s;
    if (arg1 == 0)
        goto walk;
    scene = SceneMgr__GetScene(arg1);
    if (scene == NULL)
        return;
    if (*(s32 *)((char *)scene + 808) != 0)
        return;
    if (*(s32 *)((char *)scene + 720) == 0)
        return;
    inst = SceneMgr__IsInstanceInScene(arg0, arg1);
    if (inst == NULL)
        return;
    SceneNode__Unlink(inst);
    *(s32 *)((char *)inst + 20) &= 0x7FFFFFFF;
    return;
walk:
    node = (WNode *)lbl_803AD7C0;
    while (node != NULL) {
        s = node->scene;
        if (s != NULL)
            *(s32 *)((char *)s + 20) &= 0xEFFFFFFF;
        node = node->next;
    }
    node = (WNode *)lbl_803AD7C0;
    while (node != NULL) {
        s = node->scene;
        if (s != NULL && !(*(s32 *)((char *)s + 20) & 0x10000000)) {
            SceneMgr__DetachInstance(arg0, node->id);
            *(s32 *)((char *)node->scene + 20) |= 0x10000000;
        }
        node = node->next;
    }
}
