/* AI__SelectDismembermentActionByState @ 0x800774CC (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Rand__RangeInt(void *, s32, s32);
s32 AI__SelectWeightedAction(void *, s32, s32, s32);
extern int lbl_803DD634;
extern s32 lbl_80364C6C[];
extern s32 lbl_80364D30[];
extern s32 lbl_80364DEC[];

s32 AI__SelectDismembermentActionByState(void *self) {
    s32 tbl = 134;
    s32 state;
    s32 warg;

    Rand__RangeInt(&lbl_803DD634, 0, 100);
    state = M2C_FIELD(self, s32 *, 0xCC);
    warg = M2C_FIELD(M2C_FIELD(self, void **, 0x390), s32 *, 0xB8C);
    switch (state) {
    case 0:
        tbl = lbl_80364C6C[AI__SelectWeightedAction((char *)self + 0x90, warg, 3, 0)];
        break;
    case 1:
        tbl = lbl_80364D30[AI__SelectWeightedAction((char *)self + 0x90, warg, 3, 0)];
        break;
    case 3:
        tbl = lbl_80364DEC[AI__SelectWeightedAction((char *)self + 0x90, warg, 3, 0)];
        break;
    default:
        break;
    }
    return tbl;
}
