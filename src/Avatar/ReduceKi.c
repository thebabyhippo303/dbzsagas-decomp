/* Avatar__ReduceKi @ 0x800319AC (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float Script__PopFloat(void *, void *);
void * Script__PopInt(void *, void *);
M2C_UNK Avatar__AdjustKiImpl(void *, f32);          /* extern */
extern f32 lbl_803A35BC __attribute__((section(".data")));

void Avatar__ReduceKi(void *arg0, void *arg1) {
    f32 temp_f31;
    s32 var_r0;
    void *temp_r3;
    void *temp_r31;

    temp_r31 = Script__PopInt(arg0, arg1);
    temp_f31 = -Script__PopFloat(arg0, arg1);
    temp_r3 = Script__PopInt(arg0, arg1);
    var_r0 = 1;
    if (temp_r3 == NULL) {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        Avatar__AdjustKiImpl(temp_r31, temp_f31 * lbl_803A35BC);
        return;
    }
    Avatar__AdjustKiImpl(temp_r31, temp_f31);
}
