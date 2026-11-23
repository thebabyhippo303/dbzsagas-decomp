/* Platform__Configure @ 0x801D5E5C (size: 0x1E0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 Mem__NewArray(u32);
void * Mem__New(u32);
void CmdCon__SetOutputSink(void *, s32);
void CmdCon__SetVarDirectory(void *, char *);
void App__SetFileStreamCapacity(s32);
void App__SetArenaSize(s32);
s32 App__InitializeRuntime(void);
s32 App__DestroyMemoryHeaps(void);
char * strcpy(char *, const char *);
int strlen(const char *);
M2C_UNK fn_80306AB8(void);
M2C_UNK ConsoleSink__Construct(s32, s32);
M2C_UNK fn_801D636C(s32);
M2C_UNK fn_8017FE98(s32);
M2C_UNK fn_8017FEA4(s32);
M2C_UNK fn_8017FEB0(s32);
M2C_UNK fn_801D62E0(s32);
M2C_UNK fn_802030C0(s32);
M2C_UNK fn_802030CC(s32);
M2C_UNK fn_802030B4(s32);
M2C_UNK fn_802030D8(s32);
M2C_UNK fn_802030E4(s32);
M2C_UNK fn_802030F0(s32);
M2C_UNK fn_802030FC(s32);
M2C_UNK fn_802030A8(s32);
M2C_UNK fn_8020309C(s32);
M2C_UNK fn_80203120(s32);
M2C_UNK fn_80203108(s32);
M2C_UNK fn_80203114(s32);
M2C_UNK fn_80203150(s32);
M2C_UNK fn_8020312C(s32);
M2C_UNK fn_80203138(s32);
M2C_UNK fn_80203144(s32);
M2C_UNK fn_80202D50(void);
extern void *lbl_803DC364;
extern s32 lbl_803DCC68;

s32 Platform__Configure(void *arg0, s8 *arg1) {
    s32 temp_r3_2;
    u32 temp_r3;
    void *temp_r9;
    void *temp_r9_2;

    fn_80306AB8();
    if ((arg1 != NULL) && ((s32) *arg1 != 0)) {
        temp_r3 = Mem__NewArray(strlen(arg1) + 1);
        M2C_FIELD(arg0, u32 *, 0x388) = temp_r3;
        strcpy((s8 *) temp_r3, arg1);
    }
    temp_r9 = M2C_FIELD(lbl_803DC364, void **, 0xA8);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, void *), 0x14)(lbl_803DC364 + M2C_FIELD(temp_r9, s16 *, 0x10), arg0 + 0x38C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x718) != 0) {
        temp_r3_2 = ConsoleSink__Construct(Mem__New(8U), M2C_FIELD(arg0, s32 *, 0x718));
        M2C_FIELD(arg0, s32 *, 0x71C) = temp_r3_2;
        CmdCon__SetOutputSink((void *) M2C_FIELD(arg0, s32 *, 0x718), temp_r3_2);
        fn_801D636C((s32) arg0);
        CmdCon__SetVarDirectory((void *) M2C_FIELD(arg0, s32 *, 0x718), arg0 + 0x400);
    }
    App__SetFileStreamCapacity(M2C_FIELD(arg0, s32 *, 0x3AC));
    fn_8017FE98(M2C_FIELD(arg0, s32 *, 0x3B0));
    App__SetArenaSize(M2C_FIELD(arg0, s32 *, 0x3B4));
    fn_8017FEA4(M2C_FIELD(arg0, s32 *, 0x3B8));
    fn_8017FEB0(M2C_FIELD(arg0, s32 *, 0x3BC));
    if (App__InitializeRuntime() == 0) {
        return 0;
    }
    if (fn_801D62E0((s32) arg0) == 0) {
        return 0;
    }
    fn_802030C0(M2C_FIELD(arg0, s32 *, 0x3C0));
    fn_802030CC(M2C_FIELD(arg0, s32 *, 0x3C4));
    fn_802030B4(M2C_FIELD(arg0, s32 *, 0x3C8));
    fn_802030D8(M2C_FIELD(arg0, s32 *, 0x3CC));
    fn_802030E4(M2C_FIELD(arg0, s32 *, 0x3D0));
    fn_802030F0(M2C_FIELD(arg0, s32 *, 0x3D4));
    fn_802030FC(M2C_FIELD(arg0, s32 *, 0x3D8));
    fn_802030A8(M2C_FIELD(arg0, s32 *, 0x3E0));
    fn_8020309C(M2C_FIELD(arg0, s32 *, 0x3DC));
    fn_80203120(M2C_FIELD(arg0, s32 *, 0x3E4));
    fn_80203108(M2C_FIELD(arg0, s32 *, 0x3E8));
    fn_80203114(M2C_FIELD(arg0, s32 *, 0x3EC));
    fn_80203150(M2C_FIELD(arg0, s32 *, 0x3F0));
    fn_8020312C(M2C_FIELD(arg0, s32 *, 0x3F4));
    fn_80203138(M2C_FIELD(arg0, s32 *, 0x3F8));
    fn_80203144(M2C_FIELD(arg0, s32 *, 0x3FC));
    if (fn_80202D50() == 0) {
        return 0;
    }
    temp_r9_2 = M2C_FIELD(lbl_803DC364, void **, 0xA8);
    switch (M2C_FIELD(temp_r9_2, s32 (**)(void *), 0x2C)(lbl_803DC364 + M2C_FIELD(temp_r9_2, s16 *, 0x28))) {
    case 0:
        return 0;
    }
    lbl_803DCC68 = 0;
    App__DestroyMemoryHeaps();
    return 1;
}
