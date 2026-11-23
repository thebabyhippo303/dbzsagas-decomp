/* SwooshStreak__RenderAll @ 0x80230688 (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_8021C98C(s32);
void RenderState__Change(s32, s32);
void RenderState__Lock(s32);
s32 SceneMgr__GetCurrentView(void);
s32 Frustum__TestAABBIn(s32, s32, s32);
void ProcModel__Draw(void *, s32, void *, void *, s32);
void fn_8021C9CC(s32);
void RenderState__Unlock(s32);
extern void *lbl_803ADE7C[4];
extern f32 lbl_80346C68 __attribute__((section(".data")));
extern char lbl_803ACCE0[];
extern char lbl_803ACD60[];

void SwooshStreak__RenderAll(void) {
    void *cur;
    void *node;
    f32 *p;
    f32 thr;

    if (lbl_803ADE7C[3] != NULL) {
        fn_8021C98C(0);
        RenderState__Change(6, 0);
        RenderState__Lock(6);
        cur = lbl_803ADE7C[3];
        if (cur != NULL) {
            thr = lbl_80346C68;
            do {
                node = cur;
                cur = M2C_FIELD(cur, void **, 4);
                if ((M2C_FIELD(node, u16 *, 8) & 0xC) == 0xC) {
                    p = M2C_FIELD(node, f32 **, 0x80);
                    if (p == NULL || *p != thr) {
                        if (Frustum__TestAABBIn(SceneMgr__GetCurrentView() + 0x8C, (s32)((char *)node + 0x4C), 0) != 0) {
                            ProcModel__Draw(M2C_FIELD(node, void **, 0x44), (s32)lbl_803ACCE0, lbl_803ACD60, lbl_803ACCE0, 0);
                        }
                    }
                }
            } while (cur != NULL);
        }
        fn_8021C9CC(0);
        RenderState__Unlock(6);
    }
}
