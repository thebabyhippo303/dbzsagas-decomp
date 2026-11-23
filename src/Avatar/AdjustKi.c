/* Avatar__AdjustKi @ 0x80031918 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Script__PopInt(void *script, void *context);
f32 Script__PopFloat(void *script, void *context);
void Avatar__AdjustKiImpl(void *avatar, f32 amount);
extern f32 lbl_803A35BC __attribute__((section(".data")));

void Avatar__AdjustKi(void *arg0, void *arg1) {
    f32 amount;
    void *avatar;
    void *flag;
    s32 scale;

    avatar = Script__PopInt(arg0, arg1);
    amount = Script__PopFloat(arg0, arg1);
    flag = Script__PopInt(arg0, arg1);
    scale = 1;
    if (flag == NULL) {
        scale = 0;
    }
    if (scale != 0) {
        Avatar__AdjustKiImpl(avatar, amount * lbl_803A35BC);
        return;
    }
    Avatar__AdjustKiImpl(avatar, amount);
}
