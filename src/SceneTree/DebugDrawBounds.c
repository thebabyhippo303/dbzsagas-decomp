/* SceneTree__DebugDrawBounds @ 0x80212774 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void AABB__DebugDraw(s32 arg0);
s32 Frustum__TestAABB(s32 arg0, s32 arg1);
void SceneTree__DebugDrawBounds(void *arg0);
extern s32 lbl_803DD578;

void SceneTree__DebugDrawBounds(void *arg0) {
    u32 flags;
    s32 lowbits;
    s32 t;
    void *child;

    flags = M2C_FIELD(arg0, u32 *, 0x14);
    if (((flags ^ 0x40000000) & 0x40000000) == 0) {
        return;
    }
    lowbits = flags & 3;
    lbl_803DD578 = 1;
    if (lowbits == 1) {
        goto case1;
    } else if (lowbits > 1) {
        goto join;
    } else if (lowbits != 0) {
        goto join;
    }
    AABB__DebugDraw(M2C_FIELD(arg0, s32 *, 0) + 0x60);
    goto join;
case1:
    t = Frustum__TestAABB(M2C_FIELD(arg0, s32 *, 0), (flags >> 29) & 1);
    lbl_803DD578 = t;
    if (t == 0) {
        return;
    }
    AABB__DebugDraw(M2C_FIELD(arg0, s32 *, 0));
join:
    if (lbl_803DD578 == 0) {
        return;
    }
    child = M2C_FIELD(arg0, void **, 4);
    if (child == NULL) {
        return;
    }
    do {
        SceneTree__DebugDrawBounds(child);
        child = M2C_FIELD(child, void **, 8);
    } while (child != NULL);
}
