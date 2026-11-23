/* Bone__SetTransformMatrix @ 0x8023C19C (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Bone__MarkHierarchyDirty(void *);
void Bone__SetTransformMatrix(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r9_2;
    void *temp_r3;
    void *temp_r9;

    if (arg0 != NULL) {
        temp_r9 = arg0 + 0x40;
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_r9, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_r9, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(temp_r9, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
        M2C_FIELD(temp_r9, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
        M2C_FIELD(temp_r9, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
        M2C_FIELD(temp_r9, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
        M2C_FIELD(temp_r9, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
        M2C_FIELD(temp_r9, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
        M2C_FIELD(temp_r9, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
        M2C_FIELD(temp_r9, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
        M2C_FIELD(temp_r9, f32 *, 0x2C) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
        M2C_FIELD(temp_r9, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
        M2C_FIELD(temp_r9, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
        M2C_FIELD(temp_r9, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
        M2C_FIELD(temp_r9, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xDC);
        temp_r9_2 = temp_r0 & 0xFFBFFFFF;
        M2C_FIELD(arg0, s32 *, 0xDC) = temp_r9_2;
        if (!(temp_r0 & 0x800000)) {
            temp_r3 = M2C_FIELD(arg0, void **, 0xC8);
            M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (temp_r9_2 | 0x800000);
            if (temp_r3 != NULL) {
                Bone__MarkHierarchyDirty(temp_r3);
            }
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0), s32 *, 0x18) = 1;
    }
}
