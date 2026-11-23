/* BoneChain__ApplyRootTransform @ 0x801E098C (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void BoneChain__ApplyRootTransform(void *arg0) {
    void *temp_r10;
    void *temp_r11;
    s32 temp_r8;
    void *temp_r9;
    s32 b0, b1, b2, c0, c1, c2;
    volatile s32 sp8;
    volatile s32 spC;
    volatile s32 sp10;
    f32 t[4];
    f32 u[4];
    f32 temp_f11;
    f32 temp_f13;
    f32 fh;
    f32 ff;
    f32 fg;
    f32 fu1;
    f32 fu2;

    temp_r11 = arg0 + 0x1C;
    temp_f11 = M2C_FIELD(arg0, f32 *, 0x14) * M2C_FIELD(arg0, f32 *, 0x18);
    t[0] = M2C_FIELD(arg0, f32 *, 0x1C) - temp_f11;
    t[1] = M2C_FIELD(temp_r11, f32 *, 4) - temp_f11;
    t[2] = M2C_FIELD(temp_r11, f32 *, 8) - temp_f11;
    b0 = *(s32 *)&t[0];
    b1 = *(s32 *)&t[1];
    b2 = *(s32 *)&t[2];
    M2C_FIELD(arg0, s32 *, 0x1C) = b0;
    temp_r10 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r11, s32 *, 4) = b1;
    M2C_FIELD(temp_r11, s32 *, 8) = b2;
    spC = b1;
    sp10 = b2;
    sp8 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r8 = (s32)arg0 + 0x28;
    fg = M2C_FIELD((char *)arg0 + 0x18, volatile f32 *, 0);
    ff = M2C_FIELD((char *)arg0 + 0x14, volatile f32 *, 0);
    fh = M2C_FIELD((char *)arg0 + 0x28, volatile f32 *, 0);
    temp_f13 = ff * fg;
    fu1 = M2C_FIELD((void *)temp_r8, f32 *, 4);
    fu2 = M2C_FIELD((void *)temp_r8, f32 *, 8);
    u[0] = fh + temp_f13;
    u[1] = fu1 + temp_f13;
    u[2] = fu2 + temp_f13;
    c0 = *(s32 *)&u[0];
    c1 = *(s32 *)&u[1];
    c2 = *(s32 *)&u[2];
    M2C_FIELD(arg0, s32 *, 0x28) = c0;
    M2C_FIELD((void *)temp_r8, s32 *, 4) = c1;
    M2C_FIELD((void *)temp_r8, s32 *, 8) = c2;
    sp8 = M2C_FIELD(arg0, s32 *, 0x28);
    temp_r10 = M2C_FIELD(arg0, void **, 0);
    spC = c1;
    sp10 = c2;
    if (temp_r10 != NULL) {
        temp_r9 = M2C_FIELD(temp_r10, void **, 0x34);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r10 + M2C_FIELD(temp_r9, s16 *, 0x38));
    }
}
