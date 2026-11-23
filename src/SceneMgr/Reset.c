/* SceneMgr__Reset @ 0x80229C88 (size: 0x19C, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

void SceneMgr__ReleaseSceneResources(void *);
void SList__Init(void *, s32);
void SList__LinkArray(void *, s32, s32, s32);
void SceneNode__Init(void *);
void memFree(void *);
void SceneMgr__LayoutBuckets(void);
void * memset(void *, int, u32);
void OccluderSet__Clear(void *);
void fn_8022C054(void);
extern char lbl_803AD7B4[] __attribute__((section(".data")));
extern void *lbl_803AD7C0 __attribute__((section(".data")));

typedef struct Buckets { s32 w0; s32 w1; s32 w2; s32 w3; s32 w4; } Buckets;
typedef struct SceneMgrG {
    void *arr;
    void *head;
    char _8[8];
    char list16[16];
    s32 count32;
    void *nodes;
    s32 nodeCount;
    s32 f44;
    s32 f48;
    char _52[12];
    void *f64;
    void *f68;
    char _72[20];
    Buckets dst;
    void *f112;
    Buckets src;
    s32 f136;
    char _140[88];
    void *occ;
} SceneMgrG;
extern SceneMgrG lbl_803AD7B0 __attribute__((section(".data")));

void SceneMgr__Reset(void) {
    void *node;
    s32 i;
    s32 off;
    void *t;
    void *t2;

    node = lbl_803AD7C0;
    if (node != NULL) {
        do {
            SceneMgr__ReleaseSceneResources(node);
            node = *(void **) node;
        } while (node != NULL);
    }
    SList__Init(lbl_803AD7B4, 0);
    SList__LinkArray(lbl_803AD7B4, (s32) lbl_803AD7B0.arr, lbl_803AD7B0.count32, 964);
    SList__Init(lbl_803AD7B0.list16, 0);
    node = lbl_803AD7B0.head;
    if (node != NULL) {
        do {
            *(s32 *) ((char *) node + 4) = 0;
            node = *(void **) node;
        } while (node != NULL);
    }
    i = 0;
    if (i < lbl_803AD7B0.nodeCount) {
        off = 0;
        do {
            i += 1;
            SceneNode__Init((char *) lbl_803AD7B0.nodes + off);
            off += 24;
        } while (i < lbl_803AD7B0.nodeCount);
    }
    t = lbl_803AD7B0.f64;
    if ((t != NULL) && (t != lbl_803AD7B0.f112)) {
        memFree(t);
        t2 = lbl_803AD7B0.f112;
        if (t2 != NULL) {
            lbl_803AD7B0.dst = lbl_803AD7B0.src;
            lbl_803AD7B0.f64 = t2;
            SceneMgr__LayoutBuckets();
        } else {
            lbl_803AD7B0.f64 = t2;
            lbl_803AD7B0.f68 = t2;
            memset((char *) &lbl_803AD7B0 + 72, 0, 20);
            memset((char *) &lbl_803AD7B0 + 92, 0, 20);
        }
    }
    OccluderSet__Clear(lbl_803AD7B0.occ);
    lbl_803AD7B0.f136 = 0;
    lbl_803AD7B0.f48 = 1;
    lbl_803AD7B0.f44 = 1;
    fn_8022C054();
}
