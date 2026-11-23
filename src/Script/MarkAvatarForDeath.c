/* Script__MarkAvatarForDeath @ 0x800461B8 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Script__PopInt(void *, void *);
extern f32 lbl_8031200C __attribute__((section(".data")));

void Script__MarkAvatarForDeath(void *arg0, void *arg1) {
    s32 var_r9;
    void *temp_r3;
    void *temp_r9;

    temp_r3 = Script__PopInt(arg0, arg1);
    if (temp_r3 != NULL) {
        var_r9 = 0;
        if (((s32) M2C_FIELD(temp_r3, s32 *, 0x90) != 0) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x94) <= 0)) {
            var_r9 = 1;
        }
        if (var_r9 == 0) {
            temp_r9 = M2C_FIELD(temp_r3, void **, 0x34);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32), 0x174)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x170), lbl_8031200C);
        }
    }
}
