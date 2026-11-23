/* ShatterPieces__ScaleGeometry @ 0x800F783C (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void SuspensionBridge__ScaleGeometry(void *arg0) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x84);
    temp_r10 = arg0 + 0x374;
    temp_r9 = temp_r11 + 0x10;
    M2C_FIELD(temp_r11, f32 *, 0x10) = (f32) (M2C_FIELD(temp_r11, f32 *, 0x10) * M2C_FIELD(arg0, f32 *, 0x374));
    M2C_FIELD(temp_r9, f32 *, 4) = (f32) (M2C_FIELD(temp_r9, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x374));
    M2C_FIELD(temp_r9, f32 *, 8) = (f32) (M2C_FIELD(temp_r9, f32 *, 8) * M2C_FIELD(arg0, f32 *, 0x374));
    M2C_FIELD(temp_r9, f32 *, 0x10) = (f32) (M2C_FIELD(temp_r9, f32 *, 0x10) * M2C_FIELD(temp_r10, f32 *, 4));
    M2C_FIELD(temp_r9, f32 *, 0x14) = (f32) (M2C_FIELD(temp_r9, f32 *, 0x14) * M2C_FIELD(temp_r10, f32 *, 4));
    M2C_FIELD(temp_r9, f32 *, 0x18) = (f32) (M2C_FIELD(temp_r9, f32 *, 0x18) * M2C_FIELD(temp_r10, f32 *, 4));
    M2C_FIELD(temp_r9, f32 *, 0x20) = (f32) (M2C_FIELD(temp_r9, f32 *, 0x20) * M2C_FIELD(temp_r10, f32 *, 8));
    M2C_FIELD(temp_r9, f32 *, 0x24) = (f32) (M2C_FIELD(temp_r9, f32 *, 0x24) * M2C_FIELD(temp_r10, f32 *, 8));
    M2C_FIELD(temp_r9, f32 *, 0x28) = (f32) (M2C_FIELD(temp_r9, f32 *, 0x28) * M2C_FIELD(temp_r10, f32 *, 8));
}

