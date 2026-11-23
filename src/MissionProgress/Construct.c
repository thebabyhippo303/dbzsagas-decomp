/* MissionProgress__Construct @ 0x80129E80 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * fn_80184348(int);
char * strcpy(char *, const char *);
int strlen(const char *);
extern M2C_UNK lbl_8032CDD8 __attribute__((section(".data")));

void *MissionProgress__Construct(void *arg0, s32 arg1, s8 *arg2, s32 arg3, s32 arg4) {
    s8 *temp_r3;

    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_8032CDD8;
    M2C_FIELD(arg0, s32 *, 0x14) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = arg4;
    if (arg2 != NULL) {
        temp_r3 = fn_80184348(strlen(arg2) + 1);
        M2C_FIELD(arg0, s8 **, 0) = temp_r3;
        strcpy(temp_r3, arg2);
    } else {
        M2C_FIELD(arg0, s8 **, 0) = arg2;
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}
