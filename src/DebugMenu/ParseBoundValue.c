/* DebugMenu__ParseBoundValue @ 0x802656C0 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

int atoi(const char *);
f64 String__ParseFloat(char *);
void fn_80263260(void *, s32, char *);

void DebugMenu__ParseBoundValue(void *arg0, s32 arg1, char *arg2) {
    fn_80263260(arg0, arg1, arg2);
    if (M2C_FIELD(arg0, s32 *, 1140) == arg1) {
        *M2C_FIELD(arg0, u8 **, 1136) = (u8)atoi(arg2);
    }
    if (M2C_FIELD(arg0, s32 *, 1148) == arg1) {
        *M2C_FIELD(arg0, u8 **, 1144) = (u8)atoi(arg2);
    }
    if (M2C_FIELD(arg0, s32 *, 1156) == arg1) {
        *M2C_FIELD(arg0, u16 **, 1152) = (u16)atoi(arg2);
    }
    if (M2C_FIELD(arg0, s32 *, 1164) == arg1) {
        *M2C_FIELD(arg0, u16 **, 1160) = (u16)atoi(arg2);
    }
    if (M2C_FIELD(arg0, s32 *, 1172) == arg1) {
        *M2C_FIELD(arg0, s32 **, 1168) = atoi(arg2);
    }
    if (M2C_FIELD(arg0, s32 *, 1180) == arg1) {
        *M2C_FIELD(arg0, s32 **, 1176) = atoi(arg2);
    }
    if (M2C_FIELD(arg0, s32 *, 1188) == arg1) {
        *M2C_FIELD(arg0, f32 **, 1184) = (f32)String__ParseFloat(arg2);
    }
}
