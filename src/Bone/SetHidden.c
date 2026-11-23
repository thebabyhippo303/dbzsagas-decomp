/* Bone__SetHidden @ 0x8023BD04 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Bone__MarkHierarchyDirty(void *);
M2C_UNK Bone__ResetTransform(void *);               /* extern */

void Bone__SetHidden(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r9;
    void *temp_r3;

    if (arg0 != NULL) {
        var_r9 = 0;
        if (arg1 != 0) {
            var_r9 = 0x20;
        }
        if ((s32) M2C_FIELD(arg0, u8 *, 0xDC) != var_r9) {
            M2C_FIELD(arg0, u8 *, 0xDC) = (u8) var_r9;
            if (var_r9 == 0x20) {
                Bone__ResetTransform(arg0);
            }
            temp_r0 = (s32) M2C_FIELD(arg0, s32 *, 0xDC);
            if (!(temp_r0 & 0x800000)) {
                temp_r3 = M2C_FIELD(arg0, void **, 0xC8);
                M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (temp_r0 | 0x800000);
                if (temp_r3 != NULL) {
                    Bone__MarkHierarchyDirty(temp_r3);
                }
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0), s32 *, 0x18) = 1;
        }
    }
}

