/* TextureStageState__Change @ 0x80241860 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void RenderState__EndBatch(void);
void TextureStageState__SetCurrentStage(s32);
void TextureStageState__SetState0(s32, s32);
void TextureStageState__SetState1(void *, s32);
void TextureStageState__SetState2(void *, void *);
void TextureStageState__SetState3(void *, s32);
void TextureStageState__SetState4(void *, s32);
void TextureStageState__SetState5(void *, s32);
void TextureStageState__SetState6(void *, s32);
extern u8 lbl_803B19BC[] __attribute__((section(".data")));
extern s32 lbl_803DCD58;
extern s32 lbl_803DCD68;
void TextureStageState__Change(s32 arg0, s32 arg1, s32 arg2) {
    s32 o0 = arg0 * 84;
    s32 o1 = arg1 * 12 + (s32)lbl_803B19BC;
    s32 o2 = o0 + o1;
    if (*(s32 *)(o2 + 8) == 0 && (*(s32 *)(o0 + o1) != arg2 || *(s32 *)(o2 + 4) != 0)) {
        if (lbl_803DCD58 != 0) {
            RenderState__EndBatch();
        }
        if (arg0 != lbl_803DCD68) {
            TextureStageState__SetCurrentStage(arg0);
        }
        switch (arg1) {
        case 0:
            TextureStageState__SetState0(arg0, arg2);
            break;
        case 1:
            TextureStageState__SetState1((void *)arg0, arg2);
            break;
        case 2:
            TextureStageState__SetState2((void *)arg0, (void *)arg2);
            break;
        case 3:
            TextureStageState__SetState3((void *)arg0, arg2);
            break;
        case 4:
            TextureStageState__SetState4((void *)arg0, arg2);
            break;
        case 5:
            TextureStageState__SetState5((void *)arg0, arg2);
            break;
        case 6:
            TextureStageState__SetState6((void *)arg0, arg2);
            break;
        }
    }
}
