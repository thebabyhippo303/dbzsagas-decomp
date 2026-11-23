/* PickupManager__InitializePickupLists @ 0x800E4E5C (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * fn_801842C4(int);
void * fn_80184348(int);
M2C_UNK PickupManager__RegisterPickup(void *, M2C_UNK); /* extern */

void PickupManager__InitializePickupLists(void *arg0) {
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;

    temp_r30 = fn_801842C4(0x1C);
    M2C_FIELD(temp_r30, void **, 0) = fn_80184348(0x20);
    M2C_FIELD(arg0, void **, 0) = temp_r30;
    M2C_FIELD(temp_r30, s32 *, 4) = 0;
    M2C_FIELD(temp_r30, s32 *, 8) = 8;
    M2C_FIELD(temp_r30, s32 *, 0xC) = 8;
    M2C_FIELD(temp_r30, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r30, s32 *, 0x14) = 0;
    PickupManager__RegisterPickup(temp_r30, 9);
    temp_r30_2 = fn_801842C4(0x1C);
    M2C_FIELD(temp_r30_2, void **, 0) = fn_80184348(0x20);
    M2C_FIELD(arg0, void **, 4) = temp_r30_2;
    M2C_FIELD(temp_r30_2, s32 *, 4) = 0;
    M2C_FIELD(temp_r30_2, s32 *, 8) = 8;
    M2C_FIELD(temp_r30_2, s32 *, 0xC) = 8;
    M2C_FIELD(temp_r30_2, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r30_2, s32 *, 0x14) = 0;
    PickupManager__RegisterPickup(temp_r30_2, 0xA);
    temp_r30_3 = fn_801842C4(0x1C);
    M2C_FIELD(temp_r30_3, void **, 0) = fn_80184348(0x20);
    M2C_FIELD(arg0, void **, 8) = temp_r30_3;
    M2C_FIELD(temp_r30_3, s32 *, 4) = 0;
    M2C_FIELD(temp_r30_3, s32 *, 8) = 8;
    M2C_FIELD(temp_r30_3, s32 *, 0xC) = 8;
    M2C_FIELD(temp_r30_3, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r30_3, s32 *, 0x14) = 0;
    PickupManager__RegisterPickup(temp_r30_3, 8);
}
