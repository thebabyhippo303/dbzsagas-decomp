/* AvatarControls__InitializeActionCallbackTable @ 0x800A2BEC (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef double f64;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void AvatarControls__InitializeActionCallbackTable(void *arg0) {
    void *temp_r9;

    temp_r9 = (char *)arg0 + 8;
    M2C_FIELD(temp_r9, s32 *, 0x20) = (s32)((char *)arg0 + 0x88);
    M2C_FIELD(temp_r9, s32 *, 0x24) = (s32)((char *)arg0 + 0x98);
    M2C_FIELD(temp_r9, s32 *, 0x10) = (s32)((char *)arg0 + 0xC8);
    M2C_FIELD(temp_r9, s32 *, 0x14) = (s32)((char *)arg0 + 0xD8);
    M2C_FIELD(temp_r9, s32 *, 8) = (s32)((char *)arg0 + 0xE8);
    M2C_FIELD(temp_r9, s32 *, 0xC) = (s32)((char *)arg0 + 0xF8);
    M2C_FIELD(arg0, s32 *, 8) = (s32)((char *)arg0 + 0x108);
    M2C_FIELD(temp_r9, s32 *, 4) = (s32)((char *)arg0 + 0x118);
    M2C_FIELD(temp_r9, s32 *, 0x18) = (s32)((char *)arg0 + 0x128);
    M2C_FIELD(temp_r9, s32 *, 0x1C) = (s32)((char *)arg0 + 0x138);
    M2C_FIELD(temp_r9, s32 *, 0x28) = (s32)((char *)arg0 + 0xA8);
    M2C_FIELD(temp_r9, s32 *, 0x2C) = (s32)((char *)arg0 + 0xB8);
    M2C_FIELD(temp_r9, s32 *, 0x30) = (s32)((char *)arg0 + 0x148);
    M2C_FIELD(temp_r9, s32 *, 0x38) = (s32)((char *)arg0 + 0x158);
    M2C_FIELD(temp_r9, s32 *, 0x70) = (s32)((char *)arg0 + 0x168);
    M2C_FIELD(arg0, s32 *, 0x1B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
}
