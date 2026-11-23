/* Light__EnableByName @ 0x8002DE5C (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Light__FindByName(void *, const char *);
void * Script__PopInt(void *, void *);
char * Script__PopString(void *, void *, int *);
void fn_80184430(char *);
extern M2C_UNK lbl_803ACF24 __attribute__((section(".data")));

void Light__EnableByName(void *arg0, void *arg1) {
    s32 sp8;
    s32 var_r0;
    s32 var_r28;
    s8 *temp_r31;
    void *temp_r3;

    var_r28 = 1;
    temp_r31 = Script__PopString(arg0, arg1, &sp8);
    if (Script__PopInt(arg0, arg1) == NULL) {
        var_r28 = 0;
    }
    temp_r3 = Light__FindByName(&lbl_803ACF24, temp_r31);
    if (temp_r3 != NULL) {
        if (var_r28 != 0) {
            var_r0 = M2C_FIELD(temp_r3, s32 *, 0x70) | 1;
        } else {
            var_r0 = M2C_FIELD(temp_r3, s32 *, 0x70) & 0xFFFFFFFE;
        }
        M2C_FIELD(temp_r3, s32 *, 0x70) = var_r0;
        if ((sp8 != 0) && (temp_r31 != NULL)) {
            fn_80184430(temp_r31);
        }
    }
}
