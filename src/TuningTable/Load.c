/* TuningTable__Load @ 0x80254338 (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 Mem__NewArray(u32);
char * strcat(char *, char *);
s32 CmdCon__RemoveContext(void *, char *);
s32 CmdCon__SetContextScript(void *, s32, s32);
void CmdCon__ExecuteFileInContext(s32, s32);
char * strcpy(char *, const char *);
int strlen(const char *);
extern s8 lbl_80347D94 __attribute__((section(".data")));
extern void *lbl_803DCC10;

void TuningTable__Load(void *arg0, s8 *arg1, s8 *arg2) {
    union { s8 value; unsigned char bytes[128]; } sp8;
    u32 temp_r3;
    u32 temp_r4;
    void *temp_r9;

    if ((arg1 != NULL) && ((s32) *arg1 != 0)) {
        temp_r3 = Mem__NewArray(strlen(arg1) + 1);
        M2C_FIELD(arg0, u32 *, 0x1C) = temp_r3;
        strcpy((s8 *) temp_r3, arg1);
        if ((arg2 != NULL) && ((s32) *arg2 != 0)) {
            strcpy(((s8 *)sp8.bytes), arg2);
            strcat(((s8 *)sp8.bytes), &lbl_80347D94);
            strcat(((s8 *)sp8.bytes), (s8 *) M2C_FIELD(arg0, u32 *, 0x1C));
        } else {
            strcpy(((s8 *)sp8.bytes), (s8 *) M2C_FIELD(arg0, u32 *, 0x1C));
        }
        CmdCon__RemoveContext(lbl_803DCC10, (s8 *) M2C_FIELD(arg0, u32 *, 0x1C));
        CmdCon__SetContextScript(lbl_803DCC10, (s32) M2C_FIELD(arg0, u32 *, 0x1C), (s32) ((s8 *)sp8.bytes));
    } else {
        M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x18));
    temp_r4 = M2C_FIELD(arg0, u32 *, 0x1C);
    if ((s32) temp_r4 != 0) {
        CmdCon__ExecuteFileInContext((s32) lbl_803DCC10, (s32) temp_r4);
        CmdCon__RemoveContext(lbl_803DCC10, (s8 *) M2C_FIELD(arg0, u32 *, 0x1C));
    }
}
