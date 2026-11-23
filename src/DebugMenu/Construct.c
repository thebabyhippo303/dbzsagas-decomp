/* DebugMenu__Construct @ 0x80264DFC (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
#define VS32 volatile s32
#define VF32 volatile f32

void *GameMenu__Construct(void *);
extern char lbl_8034C120[];
extern f32 lbl_80349C90 __attribute__((section(".data")));
extern f32 lbl_80349C94 __attribute__((section(".data")));
extern void *lbl_803DCE68;

void *DebugMenu__Construct(void *arg0) {
    void *g;
    f32 a;
    f32 b;

    GameMenu__Construct(arg0);
    g = lbl_803DCE68;
    M2C_FIELD(arg0, char **, 0x10) = lbl_8034C120;
    if (g == NULL) {
        lbl_803DCE68 = arg0;
    }
    a = lbl_80349C90;
    b = lbl_80349C94;
    M2C_FIELD(arg0, VF32 *, 0x464) = a;
    M2C_FIELD(arg0, VF32 *, 0x460) = b;
    M2C_FIELD(arg0, VS32 *, 0x4A0) = 0;
    M2C_FIELD(arg0, VS32 *, 0x4A4) = -1;
    M2C_FIELD(arg0, VS32 *, 0xC0) = 0;
    M2C_FIELD(arg0, VF32 *, 0x45C) = a;
    M2C_FIELD(arg0, VS32 *, 0x468) = 0;
    M2C_FIELD(arg0, VS32 *, 0x470) = 0;
    M2C_FIELD(arg0, VS32 *, 0x478) = 0;
    M2C_FIELD(arg0, VS32 *, 0x480) = 0;
    M2C_FIELD(arg0, VS32 *, 0x488) = 0;
    M2C_FIELD(arg0, VS32 *, 0x490) = 0;
    M2C_FIELD(arg0, VS32 *, 0x498) = 0;
    M2C_FIELD(arg0, VS32 *, 0x46C) = -1;
    M2C_FIELD(arg0, VS32 *, 0x474) = -1;
    M2C_FIELD(arg0, VS32 *, 0x47C) = -1;
    M2C_FIELD(arg0, VS32 *, 0x484) = -1;
    M2C_FIELD(arg0, VS32 *, 0x48C) = -1;
    M2C_FIELD(arg0, VS32 *, 0x494) = -1;
    M2C_FIELD(arg0, VS32 *, 0x49C) = -1;
    return arg0;
}
