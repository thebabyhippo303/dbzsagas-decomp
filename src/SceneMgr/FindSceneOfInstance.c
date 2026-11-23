/* SceneMgr__FindSceneOfInstance @ 0x8022ACA4 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *SceneMgr__GetScene(u32);
void *SceneMgr__IsInstanceInScene(s32, u32);
s32 SceneMgr__FindSceneOfInstance(void *, u32);
extern void *lbl_803AD7C0 __attribute__((section(".data")));

typedef struct Node { struct Node *next; u32 id; } Node;

s32 SceneMgr__FindSceneOfInstance(void *arg0, u32 arg1) {
    void *scene;
    Node *node;
    if (arg1 == 0)
        goto walk;
    scene = SceneMgr__GetScene(arg1);
    if (scene == NULL)
        return 0;
    if (*(s32 *)((char *)scene + 720) == 0)
        return 0;
    return SceneMgr__IsInstanceInScene(arg0, arg1) != 0;
walk:
    node = (Node *)lbl_803AD7C0;
    while (node != NULL) {
        if (SceneMgr__FindSceneOfInstance(arg0, node->id) == 1)
            return 1;
        node = node->next;
    }
    return 0;
}
