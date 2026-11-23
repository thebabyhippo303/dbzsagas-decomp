/* SceneTree__Render @ 0x802126D8 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SceneMgr__CullAndQueueInstance(void *, u32);
s32 Frustum__TestAABB(s32 arg0, s32 arg1);
void SceneTree__Render(void *arg0);
extern s32 lbl_803DD574;

void SceneTree__Render(void *arg0) {
    u32 flags;
    s32 lowbits;
    void *child;

    flags = M2C_FIELD(arg0, u32 *, 0x14);
    if (((flags ^ 0x40000000) & 0x40000000) == 0) {
        return;
    }
    lowbits = flags & 3;
    lbl_803DD574 = 1;
    if (lowbits == 1) {
        goto case1;
    } else if (lowbits > 1) {
        goto join;
    } else if (lowbits != 0) {
        goto join;
    }
    SceneMgr__CullAndQueueInstance(arg0, flags);
    goto join;
case1:
    lbl_803DD574 = Frustum__TestAABB(M2C_FIELD(arg0, s32 *, 0), (flags >> 29) & 1);
join:
    if (lbl_803DD574 == 0) {
        return;
    }
    child = M2C_FIELD(arg0, void **, 4);
    if (child == NULL) {
        return;
    }
    do {
        SceneTree__Render(child);
        child = M2C_FIELD(child, void **, 8);
    } while (child != NULL);
}
