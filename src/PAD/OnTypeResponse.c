/* PAD__OnTypeResponse @ 0x8017AEAC (size: 0x32C, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * memset(void *, int, u32);
M2C_UNK SIGetTypeAsync(s32, s32);
M2C_UNK SIGetResponse(s32, s32, s32);
M2C_UNK SISetCommand(s32, s32);
M2C_UNK SIEnablePolling(s32);
M2C_UNK SITransfer(s32, s32, s32, s32, s32, s32, s32, s32);
extern M2C_UNK PAD__OnOriginTransfer __attribute__((section(".data")));
extern M2C_UNK PAD__OnProbeTransfer __attribute__((section(".data")));
extern M2C_UNK lbl_803A0D40 __attribute__((section(".data")));
extern s32 lbl_803DCB14 __attribute__((section(".data")));
extern s32 lbl_803DCB1C;
extern u32 lbl_803DCB20;
extern M2C_UNK lbl_803DCB28;
extern M2C_UNK lbl_803DCB2C;
extern s32 lbl_803DD414;
extern s32 lbl_803DD418;
extern s32 lbl_803DD41C;
extern s32 lbl_803DD428;

void PAD__OnTypeResponse(s32 arg1) {
    union { M2C_UNK value; unsigned char bytes[20]; } sp1C;
    s32 temp_r29;
    s32 temp_r4;
    u32 temp_r28;
    s32 temp_r6;
    s32 var_r3;
    s32 temp_r5;

    temp_r29 = lbl_803DCB14;
    temp_r5 = lbl_803DD41C;
    temp_r28 = 0x80000000U >> temp_r29;
    lbl_803DD41C = temp_r5 & ~temp_r28;
    temp_r5 = temp_r5 & temp_r28;
    var_r3 = 1;
    if (arg1 & 0xF) {
        lbl_803DCB14 = CLZ(lbl_803DD418);
        if ((s32) lbl_803DCB14 != 0x20) {
            lbl_803DD418 &= ~(0x80000000U >> lbl_803DCB14);
            memset(&lbl_803A0D40 + (lbl_803DCB14 * 0xC) + 0x10, 0, 0xCU);
            SIGetTypeAsync(lbl_803DCB14, (s32) PAD__OnTypeResponse);
        }
    } else {
        temp_r6 = arg1 & 0xFFFFFF00;
        temp_r4 = temp_r29 * 4;
        *(s32 *)((char *)&lbl_803A0D40 + temp_r4) = temp_r6;
        if (((u32) ((arg1 & 0x18000000) + 0xF8000000) != 0U) || !(temp_r6 & 0x01000000)) {
            lbl_803DCB14 = CLZ(lbl_803DD418);
            if ((s32) lbl_803DCB14 != 0x20) {
                memset(&lbl_803A0D40 + (lbl_803DCB14 * 0xC) + 0x10, 0, 0xCU);
                lbl_803DD418 &= ~(0x80000000U >> lbl_803DCB14);
                SIGetTypeAsync(lbl_803DCB14, (s32) PAD__OnTypeResponse);
            }
        } else if ((u32) lbl_803DCB20 < 2U) {
            lbl_803DD414 |= temp_r28;
            SIGetResponse(temp_r29, (s32) ((M2C_UNK *)sp1C.bytes), temp_r5);
            SISetCommand(temp_r29, lbl_803DCB1C | 0x400000);
            SIEnablePolling(lbl_803DD414);
            lbl_803DCB14 = CLZ(lbl_803DD418);
            if ((s32) lbl_803DCB14 != 0x20) {
                lbl_803DD418 &= ~(0x80000000U >> lbl_803DCB14);
                SIGetTypeAsync(lbl_803DCB14, (s32) PAD__OnTypeResponse);
                memset(&lbl_803A0D40 + (lbl_803DCB14 * 0xC) + 0x10, 0, 0xCU);
            }
        } else {
            if (!(temp_r6 & 0x80000000) || (temp_r6 & 0x04000000)) {
                var_r3 = ((u32) temp_r5 != 0U) ? SITransfer(temp_r29, (s32) &lbl_803DCB2C, 3, (s32) (&lbl_803A0D40 + (temp_r29 * 0xC) + 0x10), 0xA, (s32) &PAD__OnOriginTransfer, 0, 0) : SITransfer(temp_r29, (s32) &lbl_803DCB28, 1, (s32) (&lbl_803A0D40 + (temp_r29 * 0xC) + 0x10), 0xA, (s32) &PAD__OnOriginTransfer, 0, 0);
            } else if ((temp_r6 & 0x100000) && !(temp_r6 & 0x80000) && !(temp_r6 & 0x40000)) {
                var_r3 = (temp_r6 & 0x40000000) ? SITransfer(temp_r29, (s32) &lbl_803DCB28, 1, (s32) (&lbl_803A0D40 + (temp_r29 * 0xC) + 0x10), 0xA, (s32) &PAD__OnOriginTransfer, 0, 0) : SITransfer(temp_r29, (&lbl_803A0D40 + temp_r4 + 0x40), 3, (s32) (&lbl_803A0D40 + (temp_r29 * 0xC) + 0x10), 8, (s32) &PAD__OnProbeTransfer, 0, 0);
            }
            if (var_r3 == 0) {
                lbl_803DCB14 = CLZ(lbl_803DD418);
                lbl_803DD428 |= temp_r28;
                if ((s32) lbl_803DCB14 != 0x20) {
                    memset(&lbl_803A0D40 + (lbl_803DCB14 * 0xC) + 0x10, 0, 0xCU);
                    lbl_803DD418 &= ~(0x80000000U >> lbl_803DCB14);
                    SIGetTypeAsync(lbl_803DCB14, (s32) PAD__OnTypeResponse);
                }
            }
        }
    }
}
