/* LensFlare__ExecuteScript @ 0x8028BA04 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
s32 CmdCon__SetContextScript(void *, char *, char *);
s32 VarBool__Create(void *, char *, char *, void *, s32, s32, s32);
s32 VarVector__Create(void *, char *, char *, void *, s32, s32, s32, s32);
void VarRealUnit__CreateWithScale(f32, void *, char *, char *, void *, s32, s32, s32, s32);
void CmdCon__ExecuteFileInContext(void *, char *);
s32 CmdCon__RemoveContext(void *, char *);
s32 LensFlare__BuildElements(void *, void *, s32);
extern char lbl_8034F4B8[];
extern char lbl_8034F4C0[];
extern char lbl_8034F4C8[];
extern char lbl_8034F4D0[];
extern f32 lbl_8034F4DC __attribute__((section(".data")));
extern void *lbl_803DCC10;
extern s32 lbl_803DCE90;
extern char lbl_803757B8[];
s32 LensFlare__ExecuteScript(void *arg0, char *file, void *arg2, s32 arg3) {
    char *name = lbl_8034F4B8;
    CmdCon__SetContextScript(lbl_803DCC10, name, file);
    VarBool__Create(lbl_803DCC10, name, lbl_8034F4C0, (char *)arg0 + 16, 0, -1, 0);
    VarVector__Create(lbl_803DCC10, name, lbl_8034F4C8, (char *)arg0 + 20, 0, 0, -1, 0);
    VarRealUnit__CreateWithScale(lbl_8034F4DC, lbl_803DCC10, name, lbl_8034F4D0, (char *)arg0 + 56, 0, 0, -1, 0);
    if (file != NULL && file[0] != '\0') {
        CmdCon__ExecuteFileInContext(lbl_803DCC10, name);
        CmdCon__RemoveContext(lbl_803DCC10, name);
    }
    if (*(s32 *)((char *)arg0 + 16) == 0) {
        return 1;
    }
    if (arg2 == NULL) {
        arg3 = lbl_803DCE90;
        arg2 = lbl_803757B8;
    }
    return LensFlare__BuildElements(arg0, arg2, arg3);
}
