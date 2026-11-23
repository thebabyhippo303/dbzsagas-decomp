/* FmvQueue__CheckAnyButtonSkipInput @ 0x801DACD8 (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef short s16;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
s32 ControllerMap__GetPlayerController(void *, u32);
void * ControllerMap__GetController(void *, u32);
s32 ControllerMap__IsPlayerAssigned(void *, u32);
s32 Controller__IsAnyButtonReleased(void *);
extern void *lbl_803DCC74;
#define VC(o, vo, ao, rt) ((rt (*)(void *))M2C_FIELD(M2C_FIELD(o, void **, 0x10), void **, vo))((char *)(o) + M2C_FIELD(M2C_FIELD(o, void **, 0x10), s16 *, ao))
s32 FmvQueue__CheckAnyButtonSkipInput(void) {
    s32 result = 0;
    s32 any = 0;
    u32 i;
    void *c;
    VC(lbl_803DCC74, 0x14, 0x10, void);
    for (i = 0; i < VC(lbl_803DCC74, 0x24, 0x20, u32); i++) {
        if (ControllerMap__IsPlayerAssigned(lbl_803DCC74, i) != 0) {
            any = 1;
            if (Controller__IsAnyButtonReleased((void *)ControllerMap__GetPlayerController(lbl_803DCC74, i)) != 0) {
                result = 1;
            }
        }
    }
    if (any == 0) {
        for (i = 0; i < VC(lbl_803DCC74, 0x24, 0x20, u32); i++) {
            c = ControllerMap__GetController(lbl_803DCC74, i);
            if (((s32 (*)(void *))M2C_FIELD(M2C_FIELD(c, void **, 0x1F8), void **, 0x24))((char *)c + M2C_FIELD(M2C_FIELD(c, void **, 0x1F8), s16 *, 0x20)) != 0 && Controller__IsAnyButtonReleased(c) != 0) {
                result = 1;
            }
        }
    }
    VC(lbl_803DCC74, 0x1C, 0x18, void);
    return result;
}
