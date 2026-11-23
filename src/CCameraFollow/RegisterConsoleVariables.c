/* CCameraFollow__RegisterConsoleVariables @ 0x800C7874 (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
#define F(e,t,o) (*(t)((char *)(e) + (o)))
s32 CmdCon__RemoveContext(void *, char *);
s32 CmdCon__SetContextScript(void *, char *, char *);
void VarRealUnit__CreateWithScale(f32, void *, char *, char *, void *, s32, s32, s32, s32);
s32 CmdCon__ExecuteFile(void *, char *);
extern char lbl_803219B0[] __attribute__((section(".data")));
extern char lbl_803219BC[] __attribute__((section(".data")));
extern char lbl_803219C8[] __attribute__((section(".data")));
extern char lbl_803219D8[] __attribute__((section(".data")));
extern f32 lbl_803219E4 __attribute__((section(".data")));
extern void *lbl_803DCC10;

void CCameraFollow__RegisterConsoleVariables(void *self, char *file) {
    char *name = lbl_803219B0;
    void *cc;
    f32 a;
    CmdCon__RemoveContext(lbl_803DCC10, name);
    CmdCon__SetContextScript(lbl_803DCC10, name, file);
    VarRealUnit__CreateWithScale(lbl_803219E4, lbl_803DCC10, name, lbl_803219BC, (char *)self + 0x154, 0, 0, -1, 0);
    VarRealUnit__CreateWithScale(lbl_803219E4, lbl_803DCC10, name, lbl_803219C8, (char *)self + 0x158, 0, 0, -1, 0);
    VarRealUnit__CreateWithScale(lbl_803219E4, lbl_803DCC10, name, lbl_803219D8, (char *)self + 0x15C, 0, 0, -1, 0);
    CmdCon__ExecuteFile(lbl_803DCC10, file);
    cc = lbl_803DCC10;
    a = F(self, f32 *, 0x154);
    F(self, f32 *, 0x168) = F(self, f32 *, 0x158);
    F(self, f32 *, 0x164) = a;
    F(self, f32 *, 0x16C) = F(self, f32 *, 0x15C);
    CmdCon__RemoveContext(cc, name);
    F(self, f32 *, 0x12C) = F(self, f32 *, 0x154);
}
