/* SceneTree__Relocate @ 0x80212828 (size: 0x114, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef unsigned short u16;
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void * Database__GetArrayElement(void *, s32);
void SceneTree__Relocate(void *);
extern s32 lbl_803DD5E4;
extern void *lbl_803DD5E8;
void SceneTree__Relocate(void *arg0) {
    void *child;
    void *p;
    void *el;
    s32 t;
    if (M2C_FIELD(arg0, s32 *, 0xC) == -1) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC) = lbl_803DD5E4 + M2C_FIELD(arg0, s32 *, 0xC);
    }
    if (M2C_FIELD(arg0, s32 *, 4) == -1) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 4) = lbl_803DD5E4 + M2C_FIELD(arg0, s32 *, 4);
    }
    if (M2C_FIELD(arg0, s32 *, 8) == -1) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 8) = lbl_803DD5E4 + M2C_FIELD(arg0, s32 *, 8);
    }
    t = M2C_FIELD(arg0, s32 *, 0x14) & 3;
    if (t != 1) {
        if (t > 1) {
        } else if (t == 0) {
            if (lbl_803DD5E8 != NULL) {
                el = Database__GetArrayElement(lbl_803DD5E8, M2C_FIELD(arg0, s32 *, 0));
                M2C_FIELD(arg0, void **, 0) = el;
                if (M2C_FIELD(el, u16 *, 2) & 0x200) {
                    p = arg0;
                    if (p != NULL) {
                        do {
                            M2C_FIELD(p, s32 *, 0x14) |= 0x20000000;
                            p = M2C_FIELD(p, void **, 0xC);
                        } while (p != NULL);
                    }
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0) = 0;
            }
        }
    } else {
        M2C_FIELD(arg0, void **, 0) = (void *)((char *)arg0 + 0x18);
    }
    child = M2C_FIELD(arg0, void **, 4);
    if (child != NULL) {
        do {
            SceneTree__Relocate(child);
            child = M2C_FIELD(child, void **, 8);
        } while (child != NULL);
    }
}
