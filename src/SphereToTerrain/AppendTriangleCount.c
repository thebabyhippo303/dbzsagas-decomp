/* SphereToTerrain__AppendTriangleCount @ 0x801D0B98 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

char * strcat(char *, char *);
void * sprintf(s8 *, void *, s8 *, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern M2C_UNK lbl_80341724 __attribute__((section(".data")));

void SphereToTerrain__AppendTriangleCount(void *arg0, s8 *arg1, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, f32 farg6, f32 farg7) {
    union { s8 value; unsigned char bytes[256]; } sp8;
    s8 *var_r5;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x40);
    if (temp_r5 != NULL) {
        var_r5 = M2C_FIELD(temp_r5, s8 **, 0x24);
    } else {
        var_r5 = NULL;
    }
    sprintf(((s8 *)sp8.bytes), &lbl_80341724, var_r5, arg3, arg4, arg5, arg6, arg7, farg0, farg1, farg2, farg3, farg4, farg5, farg6, farg7);
    strcat(arg1, ((s8 *)sp8.bytes));
}

