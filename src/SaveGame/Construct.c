/* SaveGame__Construct @ 0x8014E82C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SaveGame__SetHasValidSlot(void *, s32);
void SaveGame__MarkSlotInvalid(void *, s32);
void SaveGame__AllocateBuffers(void *);
s32 fn_8014E96C(s32);
void *SaveGame__Construct(s32 arg0) {
    s32 var_r30;

    SaveGame__SetHasValidSlot(arg0, 0);
    var_r30 = 0;
    do {
        SaveGame__MarkSlotInvalid(arg0, var_r30);
        var_r30 += 1;
    } while (var_r30 <= 2);
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 8) = fn_8014E96C((s32) arg0);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    M2C_FIELD(arg0, s32 *, 0x54) = 1;
    SaveGame__AllocateBuffers(arg0);
    return arg0;
}

