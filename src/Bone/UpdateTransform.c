/* Bone__UpdateTransform @ 0x8023C38C (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void Bone__UpdateWorldTransformTree(void *bone);    /* extern */
M2C_UNK fn_8023BEB8(void *);                        /* extern */

void Bone__UpdateTransform(void *arg0) {
    void *temp_r31;
    void *temp_r9;

    temp_r31 = M2C_FIELD(arg0, void **, 0x10);
    if (M2C_FIELD(temp_r31, s32 *, 0xDC) & 0x800000) {
        temp_r9 = temp_r31 + 0x40;
        M2C_FIELD(temp_r31, f32 *, 0) = (f32) M2C_FIELD(temp_r31, f32 *, 0x40);
        M2C_FIELD(temp_r31, f32 *, 4) = (f32) M2C_FIELD(temp_r9, f32 *, 4);
        M2C_FIELD(temp_r31, f32 *, 8) = (f32) M2C_FIELD(temp_r9, f32 *, 8);
        M2C_FIELD(temp_r31, f32 *, 0xC) = (f32) M2C_FIELD(temp_r9, f32 *, 0xC);
        M2C_FIELD(temp_r31, f32 *, 0x10) = (f32) M2C_FIELD(temp_r9, f32 *, 0x10);
        M2C_FIELD(temp_r31, f32 *, 0x14) = (f32) M2C_FIELD(temp_r9, f32 *, 0x14);
        M2C_FIELD(temp_r31, f32 *, 0x18) = (f32) M2C_FIELD(temp_r9, f32 *, 0x18);
        M2C_FIELD(temp_r31, f32 *, 0x1C) = (f32) M2C_FIELD(temp_r9, f32 *, 0x1C);
        M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) M2C_FIELD(temp_r9, f32 *, 0x20);
        M2C_FIELD(temp_r31, f32 *, 0x24) = (f32) M2C_FIELD(temp_r9, f32 *, 0x24);
        M2C_FIELD(temp_r31, f32 *, 0x28) = (f32) M2C_FIELD(temp_r9, f32 *, 0x28);
        M2C_FIELD(temp_r31, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r9, f32 *, 0x2C);
        M2C_FIELD(temp_r31, f32 *, 0x30) = (f32) M2C_FIELD(temp_r9, f32 *, 0x30);
        M2C_FIELD(temp_r31, f32 *, 0x34) = (f32) M2C_FIELD(temp_r9, f32 *, 0x34);
        M2C_FIELD(temp_r31, f32 *, 0x38) = (f32) M2C_FIELD(temp_r9, f32 *, 0x38);
        M2C_FIELD(temp_r31, f32 *, 0x3C) = (f32) M2C_FIELD(temp_r9, f32 *, 0x3C);
        if ((s32) (u8) M2C_FIELD(temp_r31, u8 *, 0xDC) != 0x20) {
            fn_8023BEB8(temp_r31);
        }
        M2C_FIELD(temp_r31, s32 *, 0xDC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xDC) & 0xFF7FFFFF);
    }
    {
        void *child = M2C_FIELD(temp_r31, void **, 0xC8);

        if (child != 0) {
            Bone__UpdateWorldTransformTree(child);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
