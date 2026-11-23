/* CCameraStick__OnDeactivate @ 0x800CD684 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void CameraCollisionBlockers__SetNonProtagonistCast(void *);
void SimLoop__ActivateControls(void *, s32);
extern void *lbl_803DC3C0;
extern void *lbl_803DC5B4;

void CCameraStick__Deactivate(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x88);
    if (temp_r3 != NULL) {
        CameraCollisionBlockers__SetNonProtagonistCast(temp_r3);
    }
    if ((s32) M2C_FIELD(lbl_803DC5B4, s32 *, 0xC4) == 0) {
        SimLoop__ActivateControls(lbl_803DC3C0, 0);
    }
}

