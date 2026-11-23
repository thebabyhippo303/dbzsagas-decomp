/* SceneMgr__Shutdown @ 0x80229E24 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct SceneG {
    char pad[0x24];
    void *f24;
    char pad2[0x40 - 0x28];
    void *f40;
    char pad3[0x70 - 0x44];
    void *f70;
    char pad4[0xE4 - 0x74];
    void *fE4;
    char pad5[0x108 - 0xE8];
} SceneG;

void SceneMgr__ReleaseSceneResources(void *);
void memFree(void *);
void fn_8022C054(void);
void Mem__Delete(void *);
void memset(void *, int, int);

extern void *lbl_803AD7C0 __attribute__((section(".data")));
extern SceneG lbl_803AD7B0 __attribute__((section(".data")));

void SceneMgr__Shutdown(void) {
    void *link;
    SceneG *g;
    void *e;
    void *e0;

    link = lbl_803AD7C0;
    if (link != NULL) {
        do {
            SceneMgr__ReleaseSceneResources(link);
            link = *(void **)link;
        } while (link != NULL);
    }
    g = &lbl_803AD7B0;
    if (*(void **)((char *)&lbl_803AD7B0 + 0) != NULL) {
        memFree(*(void **)((char *)&lbl_803AD7B0 + 0));
    }
    if (g->f24 != NULL) {
        memFree(g->f24);
    }
    if (g->f40 != NULL && g->f40 != g->f70) {
        memFree(g->f40);
    }
    g = &lbl_803AD7B0;
    if (g->f70 != NULL) {
        memFree(g->f70);
    }
    fn_8022C054();
    e = g->fE4;
    if (e != NULL) {
        e0 = *(void **)e;
        if (e0 != NULL) {
            Mem__Delete(e0);
        }
        Mem__Delete(e);
    }
    memset(&lbl_803AD7B0, 0, 264);
}
