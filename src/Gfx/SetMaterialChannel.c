/* Gfx__SetMaterialChannel @ 0x8024CE10 (size: 0x184, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void RenderState__Change(int, int);
void GXSetChanMatColor(int, void *);
void GXSetChanCtrl(int, int, int, int, int, int, int);
extern volatile int lbl_803DD5C4;

void Gfx__SetMaterialChannel(void *arg0, int arg1, void *arg2) {
    union { int value; unsigned char bytes[8]; } sp8;

    if (*(int *)((char *)arg0 + 0x24) == 0) {
        if (arg1 & 2) {
            RenderState__Change(0x18, 1);
        }
        if (*(unsigned char *)((char *)arg2 + 0) != *(unsigned char *)((char *)arg0 + 0x2C)
            || *(unsigned char *)((char *)arg2 + 1) != *(unsigned char *)((char *)arg0 + 0x2D)
            || *(unsigned char *)((char *)arg2 + 2) != *(unsigned char *)((char *)arg0 + 0x2E)
            || *(unsigned char *)((char *)arg2 + 3) != *(unsigned char *)((char *)arg0 + 0x2F)) {
            *(int *)((char *)arg0 + 0x2C) = *(int *)arg2;
            sp8.value = *(int *)arg2;
            GXSetChanMatColor(4, sp8.bytes);
        }
        if (arg1 != *(int *)((char *)arg0 + 0x28) || lbl_803DD5C4 != *(int *)((char *)arg0 + 0x30)) {
            int g = lbl_803DD5C4;
            *(int *)((char *)arg0 + 0x28) = arg1;
            *(int *)((char *)arg0 + 0x30) = g;
            if (arg1 & 2) {
                if (arg1 & 1) {
                    GXSetChanCtrl(0, 1, 1, 0, g, 2, 1);
                    GXSetChanCtrl(2, 0, 0, 1, 0, 2, 1);
                } else {
                    GXSetChanCtrl(0, 1, 0, 0, g, 2, 1);
                    GXSetChanCtrl(2, 0, 0, 0, 0, 2, 1);
                }
            } else if (arg1 & 1) {
                GXSetChanCtrl(4, 0, 0, 1, 0, 2, 1);
            } else {
                GXSetChanCtrl(4, 0, 0, 0, 0, 2, 1);
            }
        }
    }
}
