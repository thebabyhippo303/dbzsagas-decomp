/* View__Init @ 0x802436A8 (size: 0x140, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;
typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    char pad[16];
    f32 d0;
    f32 d1;
    f32 d2;
    f32 d3;
    f32 d4;
    s32 d5;
    s32 d6;
    s32 d7;
    f32 d8;
    s32 d9;
    s32 d10;
} ViewDefs;

void View__SetClearEnabled(void *, s32);
void View__SetViewportRect(void *, f32, f32, f32, f32);
void memset(void *dst, int val, unsigned int n);
extern ViewDefs lbl_80374294 __attribute__((section(".data")));
extern f32 lbl_8034779C __attribute__((section(".data")));
extern f32 lbl_803477A0 __attribute__((section(".data")));

void View__Init(void *arg0) {
    ViewDefs *defs;
    f32 fd;
    s32 id;

    memset(arg0, 0, 632);
    defs = &lbl_80374294;
    if (M2C_FIELD(arg0, f32 *, 0) != defs->d0) {
        M2C_FIELD(arg0, f32 *, 0) = defs->d0;
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
        M2C_FIELD(arg0, s32 *, 0x68) = 1;
    }
    fd = defs->d1;
    if (M2C_FIELD(arg0, f32 *, 4) != fd) {
        M2C_FIELD(arg0, f32 *, 4) = fd;
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
        M2C_FIELD(arg0, s32 *, 0x68) = 1;
    }
    fd = defs->d2;
    if (M2C_FIELD(arg0, f32 *, 8) != fd) {
        M2C_FIELD(arg0, f32 *, 8) = fd;
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
        M2C_FIELD(arg0, s32 *, 0x68) = 1;
    }
    fd = defs->d3;
    if (M2C_FIELD(arg0, f32 *, 0x10) != fd) {
        M2C_FIELD(arg0, f32 *, 0x10) = fd;
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
    }
    fd = defs->d4;
    if (M2C_FIELD(arg0, f32 *, 0x14) != fd) {
        M2C_FIELD(arg0, f32 *, 0x14) = fd;
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
    }
    id = defs->d5;
    if (M2C_FIELD(arg0, s32 *, 0x18) != id) {
        M2C_FIELD(arg0, s32 *, 0x18) = id;
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = defs->d6;
    M2C_FIELD(arg0, s32 *, 0x20) = defs->d7;
    M2C_FIELD(arg0, f32 *, 0x24) = defs->d8;
    M2C_FIELD(arg0, s32 *, 0x260) = defs->d9;
    View__SetClearEnabled(arg0, defs->d10 & 1);
    View__SetViewportRect(arg0, lbl_8034779C, lbl_8034779C, lbl_803477A0, lbl_803477A0);
}
