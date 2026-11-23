/* RenderState__Change @ 0x80240FFC (size: 0x2EC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef signed short s16; typedef unsigned short u16; typedef signed int s32; typedef unsigned int u32;
#define NULL 0
typedef struct { s32 force; s32 cur; s32 lock; } StateEntry;
extern char lbl_803B1848[];
extern s32 lbl_803DCD58;
extern s32 lbl_803AD9EC __attribute__((section(".data")));
void RenderState__EndBatch(void);
void RenderState__SetState0(s32 v);
void RenderState__SetState1(s32 v);
void RenderState__SetBlendMode(s32 v);
void RenderState__SetZFunc(s32 v);
void RenderState__SetZEnable(s32 v);
void fn_8024AC24(s32 v);
void RenderState__SetState22(s32 v);
void RenderState__SetState21(s32 v);
void fn_8024A5E4(void);
void RenderState__SetFogEnable(s32 v);
s32 fn_8022A478(void);
void fn_80246638(s32 a, s32 b);
void RenderState__SetFogMode(s32 v);
void RenderState__SetFogColor(s32 v);
void RenderState__SetFogStart(s32 v);
void RenderState__SetFogEnd(s32 v);
void RenderState__SetState14(s32 v);
void RenderState__SetFogRange(s32 v);
void RenderState__SetAlphaTestEnable(s32 v);
void RenderState__SetAlphaRef(s32 v);
void RenderState__SetAlphaFunc(s32 v);
void fn_802417FC(s32 v);
void RenderState__SetState23(s32 v);
void RenderState__SetZWrite(s32 v);
void fn_8024AF3C(s32 v);
void fn_8024AF98(s32 v);
void RenderState__SetState25(s32 v);
void RenderState__SetKonstAlpha1(s32 v);
void RenderState__SetState27(s32 v);
void RenderState__SetState28(s32 v);
void RenderState__SetState29(s32 v);
void RenderState__SetKonstAlpha0(s32 v);
void RenderState__Change(s32 idx, s32 value) {
    StateEntry *tbl = (StateEntry *)lbl_803B1848;
    if (tbl[idx].lock == 0 && (tbl[idx].cur != value || tbl[idx].force != 0)) {
        if (lbl_803DCD58 != 0) {
            RenderState__EndBatch();
        }
        switch (idx) {
        case 0:
            RenderState__SetState0(value);
            return;
        case 1:
            RenderState__SetState1(value);
            return;
        case 3:
            RenderState__SetBlendMode(value);
            return;
        case 4:
            RenderState__SetZFunc(value);
            return;
        case 5:
            RenderState__SetZEnable(value);
            return;
        case 2:
            fn_8024AC24(value);
            return;
        case 22:
            RenderState__SetState22(value);
            return;
        case 21:
            RenderState__SetState21(value);
            return;
        case 24:
            fn_8024A5E4();
            return;
        case 9:
            if (lbl_803AD9EC != 0 || value != 1) {
                RenderState__SetFogEnable(value);
                if (fn_8022A478() != 0) {
                    fn_80246638(fn_8022A478(), value == 1);
                    return;
                }
            }
            break;
        case 10:
            RenderState__SetFogMode(value);
            return;
        case 11:
            RenderState__SetFogColor(value);
            return;
        case 12:
            RenderState__SetFogStart(value);
            return;
        case 13:
            RenderState__SetFogEnd(value);
            return;
        case 14:
            RenderState__SetState14(value);
            return;
        case 15:
            break;
        case 16:
            RenderState__SetFogRange(value);
            return;
        case 17:
            RenderState__SetAlphaTestEnable(value);
            return;
        case 19:
            RenderState__SetAlphaRef(value);
            return;
        case 18:
            RenderState__SetAlphaFunc(value);
            return;
        case 20:
            fn_802417FC(value);
            return;
        case 23:
            RenderState__SetState23(value);
            return;
        case 6:
            RenderState__SetZWrite(value);
            return;
        case 7:
            fn_8024AF3C(value);
            return;
        case 8:
            fn_8024AF98(value);
            return;
        case 25:
            RenderState__SetState25(value);
            return;
        case 26:
            RenderState__SetKonstAlpha1(value);
            return;
        case 27:
            RenderState__SetState27(value);
            return;
        case 28:
            RenderState__SetState28(value);
            return;
        case 29:
            RenderState__SetState29(value);
            return;
        case 30:
            RenderState__SetKonstAlpha0(value);
            break;
        }
    }
}
