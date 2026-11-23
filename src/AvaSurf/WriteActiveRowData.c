/* AvaSurf__WriteActiveRowData @ 0x800B8840 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void AvaSurf__WriteActiveRowData(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 (*temp_r9_2)(void *);
    s32 temp_r10;
    s32 temp_r3_2;
    void *temp_r3;
    void *temp_r9;

    temp_r3 = M2C_FIELD(arg0, void **, 0);
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x10);
    temp_r9_2 = M2C_FIELD(temp_r9, s32 (**)(void *), 0x2C);
    temp_r3_2 = temp_r9_2(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x28));
    if (temp_r3_2 >= 0) {
        temp_r10 = temp_r3_2 * 0x28;
        M2C_FIELD((temp_r10 + M2C_FIELD(arg0, s32 *, 0x2C)), f32 *, 0) = M2C_FIELD(arg3, f32 *, 0);
        M2C_FIELD((temp_r10 + M2C_FIELD(arg0, s32 *, 0x2C)), f32 *, 4) = (f32) M2C_FIELD(arg3, f32 *, 4);
        M2C_FIELD((temp_r10 + M2C_FIELD(arg0, s32 *, 0x2C)), f32 *, 8) = (f32) M2C_FIELD(arg3, f32 *, 8);
        M2C_FIELD((temp_r10 + M2C_FIELD(arg0, s32 *, 0x2C)), f32 *, 0xC) = (f32) M2C_FIELD(arg3, f32 *, 0xC);
        M2C_FIELD((temp_r10 + M2C_FIELD(arg0, s32 *, 0x2C)), f32 *, 0x10) = (f32) M2C_FIELD(arg3, f32 *, 0x10);
        M2C_FIELD((temp_r10 + M2C_FIELD(arg0, s32 *, 0x2C)), f32 *, 0x14) = (f32) M2C_FIELD(arg3, f32 *, 0x14);
        M2C_FIELD((temp_r10 + M2C_FIELD(arg0, s32 *, 0x2C)), f32 *, 0x18) = (f32) M2C_FIELD(arg3, f32 *, 0x18);
        M2C_FIELD((temp_r10 + M2C_FIELD(arg0, s32 *, 0x2C)), f32 *, 0x1C) = (f32) M2C_FIELD(arg3, f32 *, 0x1C);
        M2C_FIELD((temp_r10 + M2C_FIELD(arg0, s32 *, 0x2C)), s32 *, 0x20) = (s32) M2C_FIELD(arg3, s32 *, 0x20);
        M2C_FIELD((temp_r10 + M2C_FIELD(arg0, s32 *, 0x2C)), s32 *, 0x24) = (s32) M2C_FIELD(arg3, s32 *, 0x24);
    }
}

