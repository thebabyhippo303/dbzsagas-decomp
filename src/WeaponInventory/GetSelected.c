/* WeaponInventory__GetSelected @ 0x800DF0BC (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void WeaponInventory__SelectNextAvailable(void *);
s32 WeaponInventory__GetSelected(void *arg0) {
    s32 temp_r9;
    void *temp_r30;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x174);
    if (temp_r9 == 0x5C) {
        return 0;
    }
    temp_r30 = arg0 + 4;
    if ((s32) *(s32 *)(temp_r30 + (temp_r9 * 4)) == 0) {
        WeaponInventory__SelectNextAvailable(arg0);
    }
    return *(s32 *)(temp_r30 + (M2C_FIELD(arg0, s32 *, 0x174) * 4));
}

