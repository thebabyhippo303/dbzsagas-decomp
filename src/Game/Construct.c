/* Game__Construct @ 0x80006C8C (size: 0x188, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Options__Construct(void *);
void Options__SetDifficulty(void *, int);
M2C_UNK Debug__FormatMessage(s8 *, ...);
M2C_UNK fn_80129464(void *);                        /* extern */
M2C_UNK fn_801D5614();                              /* extern */
extern M2C_UNK lbl_80308330 __attribute__((section(".data")));
extern M2C_UNK lbl_8030834C __attribute__((section(".data")));
extern M2C_UNK lbl_80308364 __attribute__((section(".data")));
extern M2C_UNK lbl_80308384 __attribute__((section(".data")));
extern M2C_UNK lbl_8030839C __attribute__((section(".data")));
extern M2C_UNK lbl_803083B8 __attribute__((section(".data")));
extern M2C_UNK lbl_803083D0 __attribute__((section(".data")));
extern M2C_UNK lbl_803083EC __attribute__((section(".data")));
extern M2C_UNK lbl_80308408 __attribute__((section(".data")));
extern M2C_UNK lbl_80308424 __attribute__((section(".data")));
extern M2C_UNK lbl_8030843C __attribute__((section(".data")));
extern M2C_UNK lbl_80308454 __attribute__((section(".data")));
extern M2C_UNK lbl_80308858 __attribute__((section(".data")));
extern void *lbl_803DC368;
extern s32 lbl_803DC384;
extern s32 lbl_803DC388;

void *Game__Construct(void *arg0) {
    fn_801D5614();
    M2C_FIELD(arg0, M2C_UNK **, 0xA8) = &lbl_80308858;
    Options__Construct(arg0 + 0x12C);
    fn_80129464(arg0 + 0x5384);
    Debug__FormatMessage(&lbl_80308330, 0x1CC);
    Debug__FormatMessage(&lbl_8030834C, 0x12C);
    Debug__FormatMessage(&lbl_80308364, 0x198);
    Debug__FormatMessage(&lbl_80308384, 0x414);
    Debug__FormatMessage(&lbl_8030839C, 0x508);
    Debug__FormatMessage(&lbl_803083B8, 0x5E8);
    Debug__FormatMessage(&lbl_803083D0, 0x79C);
    Debug__FormatMessage(&lbl_803083EC, 0x564);
    Debug__FormatMessage(&lbl_80308408, 0x488);
    Debug__FormatMessage(&lbl_80308424, 0x654);
    Debug__FormatMessage(&lbl_8030843C, 0x464);
    Debug__FormatMessage(&lbl_80308454, 0x72C);
    M2C_FIELD(arg0, volatile s32 *, 0xE4) = 0;
    lbl_803DC368 = arg0;
    M2C_FIELD(arg0, volatile s32 *, 0xD4) = -1;
    M2C_FIELD(arg0, volatile s32 *, 0x124) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x128) = -1;
    M2C_FIELD(arg0, volatile s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0xC0) = -1;
    M2C_FIELD(arg0, volatile s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0xC8) = 0;
    lbl_803DC384 = 0;
    lbl_803DC388 = 1;
    Options__SetDifficulty(arg0 + 0x370, 1);
    return arg0;
}

