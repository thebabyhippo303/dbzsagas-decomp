/* Platform__Construct @ 0x801D5D30 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Mem__New(s32);
void * PadManager__Construct(void *);
void * Platform__ConstructBase(void *);
M2C_UNK Audio__Construct(void *);                   /* extern */
s32 CmdCon__Construct();                            /* extern */
M2C_UNK Platform__InitializeConfig(void *);         /* extern */
M2C_UNK fn_801D6F2C(void *);                        /* extern */
extern M2C_UNK lbl_80342FB0 __attribute__((section(".data")));
extern s32 lbl_803DCC10;
extern void *lbl_803DCC20;
extern void *lbl_803DCC70;
extern void *lbl_803DCC74;

void *Platform__Construct(void *arg0) {
    s32 temp_r3;
    void *temp_r26;
    void *temp_r27;
    void *temp_r28;

    temp_r26 = arg0 + 0x480;
    Platform__ConstructBase(arg0);
    temp_r27 = arg0 + 0x500;
    temp_r28 = arg0 + 0x720;
    M2C_FIELD(arg0, M2C_UNK **, 0x384) = &lbl_80342FB0;
    PadManager__Construct(temp_r26);
    Audio__Construct(temp_r27);
    fn_801D6F2C(temp_r28);
    Platform__InitializeConfig(arg0 + 0x38C);
    M2C_FIELD(arg0, s32 *, 0x388) = 0;
    lbl_803DCC74 = temp_r26;
    lbl_803DCC20 = temp_r27;
    lbl_803DCC70 = temp_r28;
    Mem__New(0x28);
    temp_r3 = CmdCon__Construct();
    M2C_FIELD(arg0, s32 *, 0x718) = temp_r3;
    lbl_803DCC10 = temp_r3;
    M2C_FIELD(arg0, s32 *, 0x71C) = 0;
    M2C_FIELD(arg0, s32 *, 0x838) = 0;
    return arg0;
}
