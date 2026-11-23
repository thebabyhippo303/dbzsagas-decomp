/* SceneMgr__AllocSceneNode @ 0x8022AF50 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: SceneMgr__AllocSceneNode @ 0x8022AF50 (0x94). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void SceneNode__Init(void *);

typedef struct {
    char pad[0x24];
    u8 *nodeBase;
    s32 nodeCount;
} SceneGlobals;

extern SceneGlobals lbl_803AD7B0 __attribute__((section(".data")));

void *SceneMgr__AllocSceneNode(void) {
    s32 i = 0;
    s32 off;

    if (i < lbl_803AD7B0.nodeCount) {
        off = 0;
        do {
            if (*(s32 *)(u8 *)(off + (s32)lbl_803AD7B0.nodeBase + 0x14) < 0) {
                goto next;
            }
            SceneNode__Init((u8 *)(off + (s32)lbl_803AD7B0.nodeBase));
            *(s32 *)(u8 *)(off + (s32)lbl_803AD7B0.nodeBase + 0x14) |= 0x80000000;
            return lbl_803AD7B0.nodeBase + off;
        next:
            i += 1;
            off += 0x18;
        } while (i < lbl_803AD7B0.nodeCount);
    }
    return NULL;
}
