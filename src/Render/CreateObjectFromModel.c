/* Render__CreateObjectFromModel @ 0x80281984 (size: 0x234, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * MemHeap__Alloc(unsigned int, unsigned int);
void SceneMgr__AttachInstance(void *, int, void *);
void RenderInstance__InitFromModel(void *, void *, void *, s32);
extern f32 lbl_8034F2AC __attribute__((section(".data")));
extern f32 lbl_8034F2B0 __attribute__((section(".data")));
extern f32 lbl_803DD534;

void *Render__CreateObjectFromModel(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4) {
    s32 var_r30;
    void *temp_r0;
    void *temp_r3;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_2;

    var_r30 = arg1;
    if (arg1 == 0) {
        var_r30 = M2C_FIELD(arg0, s32 *, 4);
    }
    if (var_r30 == 0) {
        return NULL;
    }
    {
        temp_r3 = MemHeap__Alloc(0x178U, 8U);
        if (temp_r3 == NULL) {
            return NULL;
        }
        {
            RenderInstance__InitFromModel(var_r30, temp_r3, temp_r3 + 0xB0, 1);
            temp_r9 = temp_r3 + 0x13C;
            M2C_FIELD(temp_r3, s32 *, 0xF0) = var_r30;
            M2C_FIELD(temp_r3, f32 *, 0xF8) = farg4;
            M2C_FIELD(temp_r3, s32 *, 0x108) = arg2;
            M2C_FIELD(temp_r3, s32 *, 0x10C) = arg3;
            M2C_FIELD(temp_r3, s32 *, 0xF4) = 0;
            M2C_FIELD(temp_r3, s32 *, 0x138) = 0;
            M2C_FIELD(temp_r3, s32 *, 0x148) = 0;
            M2C_FIELD(temp_r3, f32 *, 0x13C) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9, f32 *, 8) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9, f32 *, 4) = (f32) lbl_8034F2B0;
            M2C_FIELD(temp_r3, s32 *, 0x128) = arg4;
            M2C_FIELD(temp_r3, s32 *, 0x110) = 0;
            M2C_FIELD(temp_r3, f32 *, 0x14C) = (f32) (farg2 * farg2);
            M2C_FIELD(temp_r3, f32 *, 0x120) = (f32) lbl_8034F2B0;
            M2C_FIELD(temp_r3, f32 *, 0x12C) = (f32) lbl_8034F2B0;
            M2C_FIELD(temp_r3, f32 *, 0x130) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r3, f32 *, 0x134) = (f32) lbl_8034F2B0;
            M2C_FIELD(temp_r3, f32 *, 0x124) = (f32) lbl_8034F2B0;
            if (farg1 <= farg0) {
                M2C_FIELD(temp_r3, f32 *, 0x150) = (f32) lbl_8034F2AC;
                M2C_FIELD(temp_r3, f32 *, 0x154) = (f32) lbl_8034F2AC;
            } else {
                M2C_FIELD(temp_r3, f32 *, 0x150) = farg0;
                M2C_FIELD(temp_r3, f32 *, 0x154) = (f32) (lbl_8034F2B0 / (farg1 - farg0));
            }
            M2C_FIELD(temp_r3, f32 *, 0x160) = farg3;
            M2C_FIELD(temp_r3, s32 *, 0x164) = arg5;
            temp_r9_2 = temp_r3 + 0x10;
            M2C_FIELD(temp_r3, s32 *, 0x168) = arg6;
            temp_r8 = arg0 + 0x10;
            M2C_FIELD(temp_r3, u16 *, 2) = (u16) (M2C_FIELD(temp_r3, u16 *, 2) | 0x1480);
            M2C_FIELD(temp_r3, u8 *, 1) = (u8) (M2C_FIELD(temp_r3, u8 *, 1) | 0x82);
            M2C_FIELD(temp_r3, f32 *, 0x158) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r3, f32 *, 0x15C) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r3, f32 *, 0x10) = (f32) lbl_8034F2B0;
            M2C_FIELD(temp_r9_2, f32 *, 0x3C) = (f32) lbl_8034F2B0;
            M2C_FIELD(temp_r9_2, f32 *, 0x38) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9_2, f32 *, 4) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9_2, f32 *, 8) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9_2, f32 *, 0xC) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9_2, f32 *, 0x10) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9_2, f32 *, 0x14) = (f32) lbl_8034F2B0;
            M2C_FIELD(temp_r9_2, f32 *, 0x18) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9_2, f32 *, 0x1C) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9_2, f32 *, 0x20) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9_2, f32 *, 0x24) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9_2, f32 *, 0x28) = (f32) lbl_8034F2B0;
            M2C_FIELD(temp_r9_2, f32 *, 0x2C) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9_2, f32 *, 0x30) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r9_2, f32 *, 0x34) = (f32) lbl_8034F2AC;
            M2C_FIELD(temp_r3, f32 *, 0x44) = (f32) lbl_803DD534;
            temp_r0 = M2C_FIELD(arg0, void **, 0x10);
            if (temp_r0 == NULL) {
                M2C_FIELD(temp_r8, void **, 4) = temp_r3;
                M2C_FIELD(arg0, void **, 0x10) = temp_r3;
                M2C_FIELD(temp_r3, void **, 0x170) = temp_r0;
                M2C_FIELD(temp_r3, void **, 0x174) = temp_r0;
            } else {
                M2C_FIELD(temp_r3, void **, 0x174) = NULL;
                M2C_FIELD(temp_r3, void **, 0x170) = (void *) M2C_FIELD(temp_r8, void **, 4);
                M2C_FIELD(M2C_FIELD(temp_r8, void **, 4), void **, 0x174) = temp_r3;
                M2C_FIELD(temp_r8, void **, 4) = temp_r3;
            }
            M2C_FIELD(temp_r8, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r8, s32 *, 0xC) + 1);
            SceneMgr__AttachInstance(temp_r3, 0, NULL);
            return temp_r3;
        }
    }
}
