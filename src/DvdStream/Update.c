/* DvdStream__Update @ 0x801975A8 (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 DVD__MapStatusToFileError(s32, s32);
s32 DVDGetDriveStatus(void);
M2C_UNK DVDRequestAudioErrorAsync(s32, s32);
M2C_UNK DVDPrepareStreamAsync(s32, s32, s32, s32);
void DvdStream__CommandCallback(void);
extern M2C_UNK DvdStream__PrepareCallback __attribute__((section(".data")));
extern M2C_UNK lbl_803DC2D8 __attribute__((section(".data")));
extern M2C_UNK lbl_803DC314 __attribute__((section(".data")));

s32 DvdStream__Update(void *arg0) {
    s32 temp_r9;
    s32 temp_r9_2;
    s32 var_r11;

    var_r11 = DVD__MapStatusToFileError(DVDGetDriveStatus(), 0x11);
    if (var_r11 != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        var_r11 = 0x11;
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        temp_r9 = M2C_FIELD(arg0, s32 *, 0x4C);
        if (temp_r9 == -1) {
            var_r11 = 0x11;
            M2C_FIELD(arg0, s32 *, 0x38) = 0;
        } else if (((s32) M2C_FIELD(arg0, s32 *, 0x38) != 0) && (temp_r9 <= 1) && (temp_r9 >= 0)) {
            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_r9 == 1);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = var_r11;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x38) != 0) {
            if (((s32) M2C_FIELD(arg0, s32 *, 0x40) == 0) && (var_r11 == 0)) {
                M2C_FIELD(arg0, s32 *, 0x40) = 1;
                M2C_FIELD(arg0, s32 *, 0x44) = var_r11;
                DVDRequestAudioErrorAsync((s32) &lbl_803DC314, (s32) DvdStream__CommandCallback);
            }
            goto block_16;
        }
        goto block_17;
    }
block_16:
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) == 0) {
block_17:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x34) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x40) == 0)) {
            temp_r9_2 = M2C_FIELD(arg0, s32 *, 0x50);
            if (temp_r9_2 == 0) {
                M2C_FIELD(arg0, s32 *, 0x48) = temp_r9_2;
                M2C_FIELD(arg0, s32 *, 0x34) = 1;
                DVDPrepareStreamAsync((s32) &lbl_803DC2D8, 0, 0, (s32) &DvdStream__PrepareCallback);
            }
        }
    }
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

