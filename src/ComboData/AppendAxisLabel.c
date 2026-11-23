/* ComboData__AppendAxisLabel @ 0x80151D8C (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * fn_80184348(int);
void fn_80184430(char *);
char * strcpy(char *, const char *);
int strlen(const char *);
void ComboData__AppendAxisLabel(void *unused, s8 *arg1, s8 **arg2, s32 *arg3) {
    s32 temp_r11;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r9;
    s8 *temp_r31;
    s8 *temp_r3;
    s8 *temp_r3_2;

    temp_r11 = *arg3;
    var_ctr = 0;
    temp_r31 = fn_80184348((*arg3 + 1) * 4);
    if (temp_r11 > 0) {
        var_ctr_2 = temp_r11;
        var_r9 = 0;
        do {
            *(var_r9 + temp_r31) = *(var_r9 + *arg2);
            var_r9 += 4;
            var_ctr_2 -= 1;
        } while (var_ctr_2 != 0);
        var_ctr = temp_r11;
    }
    temp_r3 = fn_80184348(strlen(arg1) + 1);
    *((var_ctr * 4) + temp_r31) = temp_r3;
    strcpy(temp_r3, arg1);
    temp_r3_2 = *arg2;
    if (temp_r3_2 != NULL) {
        fn_80184430(temp_r3_2);
    }
    *arg2 = temp_r31;
    *arg3 += 1;
}
