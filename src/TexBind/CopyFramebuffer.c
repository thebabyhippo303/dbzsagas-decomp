/* TexBind__CopyFramebuffer @ 0x8024FAFC (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u16 TextureMgr__HasOverriddenBind(void);
u16 TextureMgr__GetOverrideReplacementBind(void);
u16 TextureMgr__GetOverriddenBind(void);
void * TexBind__FindBlock(char *, u32);
void GXCopyTex(s32, s32);
void GXPixModeSync(void);
void GXSetTexCopyDst(s32, s32, s32, s32);
void GXSetTexCopySrc(s32, s32, s32, s32);
extern s8 *lbl_803DCDFC;
extern u16 lbl_803DD620;

void TexBind__CopyFramebuffer(void) {
    s32 temp_r9;
    s8 *temp_r30;
    u16 var_r31;
    void *temp_r3;
    void *var_r0;
    void *var_r31_2;

    temp_r30 = lbl_803DCDFC;
    var_r31 = lbl_803DD620;
    if (TextureMgr__HasOverriddenBind() != 0) {
        TextureMgr__GetOverrideReplacementBind();
        if ((s32) var_r31 == TextureMgr__GetOverriddenBind()) {
            var_r31 = TextureMgr__GetOverrideReplacementBind();
        }
    }
    temp_r3 = TexBind__FindBlock(temp_r30, (u32) var_r31);
    if (temp_r3 == NULL) {
        var_r31_2 = NULL;
    } else {
        temp_r9 = M2C_FIELD(temp_r3, s32 *, 4);
        if (temp_r9 == 0) {
            var_r0 = NULL;
        } else {
            var_r0 = temp_r9 + ((var_r31 - M2C_FIELD(temp_r3, u16 *, 0)) * 0xA8);
        }
        var_r31_2 = var_r0;
    }
    GXSetTexCopySrc(0, 0, (s32) M2C_FIELD(var_r31_2, u16 *, 0x9C), (s32) M2C_FIELD(var_r31_2, u16 *, 0x9E));
    GXSetTexCopyDst((s32) M2C_FIELD(var_r31_2, u16 *, 0x9C), (s32) M2C_FIELD(var_r31_2, u16 *, 0x9E), 4, 0);
    GXCopyTex(M2C_FIELD(var_r31_2, s32 *, 0), 0);
    GXPixModeSync();
}
