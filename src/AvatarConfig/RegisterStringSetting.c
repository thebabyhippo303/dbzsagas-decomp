/* AvatarConfig__RegisterStringSetting @ 0x8009C69C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int VarString__Create(void *, void *, void *, void *, void *, void *, void *, void *);
char * strncpy(char *, const char *, unsigned int);
extern void *lbl_803DCC10 __attribute__((section(".sdata")));

void AvatarConfig__RegisterStringSetting(void **arg0, s8 *arg1, void *arg2, s8 *arg3, u32 arg4, s32 arg5) {
    void *temp_r4;
    void *var_r9;

    strncpy(arg1, arg3, arg4);
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        void *global = lbl_803DCC10;
        var_r9 = (void *)-1;
        if (arg5 != 0) {
            var_r9 = (void *)0x10010;
        }
        VarString__Create(global, temp_r4, arg2, arg1, (void *) arg4, NULL, var_r9, NULL);
    }
}
