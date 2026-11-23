/* CCameraFighter__Destroy @ 0x80159A10 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Camera__Destroy(void *, int);
void fn_801843CC(void *);
extern M2C_UNK lbl_803357C8 __attribute__((section(".data")));

void CCameraFighter__Destroy(void *arg0, s32 arg1) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = M2C_FIELD(arg0, void **, 0x60);
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &lbl_803357C8;
    if (temp_r3 != NULL) {
        fn_801843CC(temp_r3);
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x48);
    if (temp_r3_2 != NULL) {
        fn_801843CC(temp_r3_2);
    }
    Camera__Destroy(arg0, arg1);
}
