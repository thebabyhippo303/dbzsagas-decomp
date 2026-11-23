/* TextureStageState__SetupStage @ 0x80241998 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
s32 RenderState__GetNumTextureStages(void);
s32 TextureStageState__Get(s32, s32);
void TextureStageState__MarkDirty(s32, s32);
void TextureStageState__Change(s32, s32, s32);

void TextureStageState__SetupStage(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if (arg0 < RenderState__GetNumTextureStages()) {
        TextureStageState__Change(arg0, 0, arg1);
        if (arg2 != TextureStageState__Get(arg0, 1)) {
            TextureStageState__MarkDirty(arg0, 3);
            TextureStageState__MarkDirty(arg0, 4);
            TextureStageState__MarkDirty(arg0, 5);
        }
        TextureStageState__Change(arg0, 1, arg2);
        TextureStageState__Change(arg0, 3, arg4);
        TextureStageState__Change(arg0, 4, arg5);
        TextureStageState__Change(arg0, 2, arg3);
        TextureStageState__Change(arg0, 5, arg6);
    }
}
