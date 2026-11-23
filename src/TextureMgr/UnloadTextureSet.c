/* TextureMgr__UnloadTextureSet @ 0x802476A8 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void EffectHandle__ForgetTextureSet(void *);
void TexBind__Release(s32, s32);
void TextureAnim__Destroy(void *);
void memFree(void *);
void SList__Remove(void *, void *);
void SList__PushFront(void *, s32);
extern M2C_UNK lbl_803B1D2C __attribute__((section(".data")));
extern M2C_UNK lbl_803B1D38 __attribute__((section(".data")));
extern void *lbl_803B1D44 __attribute__((section(".data")));

typedef struct TexSet {
    char pad[0x24];
    s32 count;
    char pad2[4];
    u16 *binds;
    void *other;
} TexSet;

typedef struct TANode {
    struct TANode *next;
    char pad[0x10];
    void *texset;
} TANode;

void TextureMgr__UnloadTextureSet(TexSet *arg0) {
    s32 i = 0;
    TANode *node;

    EffectHandle__ForgetTextureSet(arg0);
    while (i < arg0->count) {
        TexBind__Release((s32)arg0->binds[i], 1);
        i++;
    }
    node = lbl_803B1D44;
    while (node != NULL) {
        TANode *cur = node;
        node = node->next;
        if (cur->texset == arg0) {
            TextureAnim__Destroy(cur);
        }
    }
    memFree(arg0->binds);
    if (arg0->other != NULL) {
        memFree(arg0->other);
    }
    SList__Remove(&lbl_803B1D38, arg0);
    SList__PushFront(&lbl_803B1D2C, (s32)arg0);
}
