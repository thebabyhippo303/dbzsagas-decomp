/* Game__AnyButtonPressed @ 0x8002F290 (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Script__PushInt(void *, void *, int);
void * fn_801D6674(void *, int);
extern s32 lbl_803A35DC __attribute__((section(".data")));
extern void *lbl_803DCC74;

void Game__AnyButtonPressed(void *arg0, void *arg1) {
    s32 temp_r9;
    s32 temp_r9_2;
    s32 temp_r9_3;
    s32 temp_r9_4;
    s32 var_r31;
    s32 var_r5;
    s32 var_r9;
    s32 var_r9_2;
    s32 var_r9_3;
    s32 var_r9_4;
    void *temp_r3;

    var_r31 = 0;
    temp_r3 = fn_801D6674(lbl_803DCC74, 0);
    var_r9 = 0;
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x30) == 0) {
        temp_r9 = M2C_FIELD(temp_r3, s32 *, 0x34) ^ 1;
        var_r9 = temp_r9 == 0;
    }
    if (var_r9 == 0) {
        var_r9_2 = 0;
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x38) == 0) {
            temp_r9_2 = M2C_FIELD(temp_r3, s32 *, 0x3C) ^ 1;
            var_r9_2 = temp_r9_2 == 0;
        }
        if (var_r9_2 == 0) {
            var_r9_3 = 0;
            if ((s32) M2C_FIELD(temp_r3, s32 *, 0x40) == 0) {
                temp_r9_3 = M2C_FIELD(temp_r3, s32 *, 0x44) ^ 1;
                var_r9_3 = temp_r9_3 == 0;
            }
            if (var_r9_3 == 0) {
                var_r9_4 = 0;
                if ((s32) M2C_FIELD(temp_r3, s32 *, 0x28) == 0) {
                    temp_r9_4 = M2C_FIELD(temp_r3, s32 *, 0x2C) ^ 1;
                    var_r9_4 = temp_r9_4 == 0;
                }
                if (var_r9_4 != 0) {
                    goto block_12;
                }
            } else {
                goto block_12;
            }
        } else {
            goto block_12;
        }
    } else {
block_12:
        var_r31 = 1;
    }
    if ((s32) lbl_803A35DC == 0) {
        var_r31 = 0;
    }
    var_r5 = 0;
    if (var_r31 != 0) {
        var_r5 = 1;
    }
    Script__PushInt(arg0, arg1, var_r5);
}

