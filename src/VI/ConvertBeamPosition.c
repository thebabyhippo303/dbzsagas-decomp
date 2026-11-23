/* VI__ConvertBeamPosition @ 0x8017707C (size: 0x21C, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern M2C_UNK lbl_803A0A28 __attribute__((section(".data")));
extern void *lbl_803DD3C8;

void VI__ConvertBeamPosition(s32 arg0, s32 arg1, s16 *arg2, s16 *arg3) {
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r7_4;
    s32 temp_r7_5;
    s32 temp_r8_3;
    u16 temp_r10;
    u16 temp_r10_2;
    u16 temp_r10_3;
    u16 temp_r7_3;
    u16 temp_r8;
    u16 temp_r8_2;
    u16 temp_r8_4;
    u16 temp_r8_5;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 var_r0;

    var_r0 = ((arg1 - 1) * 2) + ((u32) (arg0 - 1) / (u16) M2C_FIELD(lbl_803DD3C8, u16 *, 0x1A));
    switch ((u32) M2C_FIELD(&lbl_803A0A28, u32 *, 0x24)) { /* irregular */
    case 0:
        temp_r10 = M2C_FIELD(lbl_803DD3C8, u16 *, 0x18);
        if (var_r0 < temp_r10) {
            temp_r8 = M2C_FIELD(lbl_803DD3C8, u16 *, 4);
            temp_r7 = M2C_FIELD(lbl_803DD3C8, u8 *, 0) * 3;
            if (var_r0 < (u32) (temp_r8 + temp_r7)) {
                *arg3 = -1;
            } else if (var_r0 >= (u32) (temp_r10 - M2C_FIELD(lbl_803DD3C8, u16 *, 8))) {
                *arg3 = -1;
            } else {
                *arg3 = ((var_r0 - temp_r7) - temp_r8) & 0xFFFFFFFE;
            }
        } else {
            temp_r0 = var_r0 - temp_r10;
            temp_r8_2 = M2C_FIELD(lbl_803DD3C8, u16 *, 6);
            temp_r7_2 = M2C_FIELD(lbl_803DD3C8, u8 *, 0) * 3;
            if (temp_r0 < (u32) (temp_r8_2 + temp_r7_2)) {
                *arg3 = -1;
            } else if (temp_r0 >= (u32) (temp_r10 - M2C_FIELD(lbl_803DD3C8, u16 *, 0xA))) {
                *arg3 = -1;
            } else {
                *arg3 = (((temp_r0 - temp_r7_2) - temp_r8_2) & 0xFFFFFFFE) + 1;
            }
        }
        break;
    case 1:
        temp_r7_3 = M2C_FIELD(lbl_803DD3C8, u16 *, 0x18);
        if (var_r0 >= temp_r7_3) {
            var_r0 -= temp_r7_3;
        }
        temp_r10_2 = M2C_FIELD(lbl_803DD3C8, u16 *, 4);
        temp_r8_3 = M2C_FIELD(lbl_803DD3C8, u8 *, 0) * 3;
        if (var_r0 < (u32) (temp_r10_2 + temp_r8_3)) {
            *arg3 = -1;
        } else if (var_r0 >= (u32) (temp_r7_3 - M2C_FIELD(lbl_803DD3C8, u16 *, 8))) {
            *arg3 = -1;
        } else {
            *arg3 = ((var_r0 - temp_r8_3) - temp_r10_2) & 0xFFFFFFFE;
        }
        break;
    case 2:
        temp_r10_3 = M2C_FIELD(lbl_803DD3C8, u16 *, 0x18);
        if (var_r0 < temp_r10_3) {
            temp_r8_4 = M2C_FIELD(lbl_803DD3C8, u16 *, 4);
            temp_r7_4 = M2C_FIELD(lbl_803DD3C8, u8 *, 0) * 3;
            if (var_r0 < (u32) (temp_r8_4 + temp_r7_4)) {
                *arg3 = -1;
            } else if (var_r0 >= (u32) (temp_r10_3 - M2C_FIELD(lbl_803DD3C8, u16 *, 8))) {
                *arg3 = -1;
            } else {
                *arg3 = (var_r0 - temp_r7_4) - temp_r8_4;
            }
        } else {
            temp_r0_2 = var_r0 - temp_r10_3;
            temp_r8_5 = M2C_FIELD(lbl_803DD3C8, u16 *, 6);
            temp_r7_5 = M2C_FIELD(lbl_803DD3C8, u8 *, 0) * 3;
            if (temp_r0_2 < (u32) (temp_r8_5 + temp_r7_5)) {
                *arg3 = -1;
            } else if (temp_r0_2 >= (u32) (temp_r10_3 - M2C_FIELD(lbl_803DD3C8, u16 *, 0xA))) {
                *arg3 = -1;
            } else {
                *arg3 = ((temp_r0_2 - temp_r7_5) - temp_r8_5) & 0xFFFFFFFE;
            }
        }
        break;
    }
    *arg2 = arg0 - 1;
}

