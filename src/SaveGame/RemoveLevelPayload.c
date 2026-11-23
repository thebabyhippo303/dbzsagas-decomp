/* SaveGame__RemoveLevelPayload @ 0x80150418 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int SaveGame__GetRecordIndexForLevel(void *, int);
void * memcpy(void *, const void *, unsigned int);
void SaveGame__RemoveLevelPayload(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r9;
    s32 var_ctr;
    s32 var_r8;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r10_2;
    void *temp_r10;
    void *temp_r30;
    void *temp_r3_2;
    void *var_r11;

    temp_r30 = M2C_FIELD(arg0, void **, 0x30);
    if (arg1 != 0x63) {
        temp_r3 = SaveGame__GetRecordIndexForLevel(arg0, arg1);
        temp_r10 = temp_r30 + (temp_r3 * 0xA0);
        if ((s32) M2C_FIELD(temp_r10, s32 *, 0x50) != 0) {
            temp_r0 = M2C_FIELD(temp_r10, s32 *, 8);
            temp_r10_2 = M2C_FIELD(temp_r10, u32 *, 0x58);
            var_ctr = 3;
            var_r11 = temp_r30;
            var_r8 = 0;
            temp_r9 = temp_r0 + (((temp_r0 ^ 0xF) + 1) & 0xF);
            do {
                if ((var_r8 != temp_r3) && ((s32) M2C_FIELD(var_r11, s32 *, 0x3C) != 0x63) && ((s32) M2C_FIELD(var_r11, s32 *, 0x50) != 0)) {
                    temp_r0_2 = M2C_FIELD(var_r11, u32 *, 0x58);
                    if (temp_r0_2 >= (u32) (temp_r10_2 + temp_r9)) {
                        M2C_FIELD(var_r11, u32 *, 0x58) = (u32) (temp_r0_2 - temp_r9);
                    }
                }
                var_r11 += 0xA0;
                var_r8 += 1;
                var_ctr -= 1;
            } while (var_ctr != 0);
            temp_r0_3 = M2C_FIELD(arg0, u32 *, 8) - temp_r9;
            M2C_FIELD(arg0, u32 *, 8) = temp_r0_3;
            if (temp_r0_3 > temp_r10_2) {
                temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x34) + temp_r10_2;
                memcpy(temp_r3_2, temp_r3_2 + temp_r9, temp_r0_3 - temp_r10_2);
            }
        }
    }
}
