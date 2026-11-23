/* DebugMenu__FormatBoundValue @ 0x802657BC (size: 0x17C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern char lbl_80349CB0[] __attribute__((section(".data")));
extern char lbl_80349CB4[] __attribute__((section(".data")));
char *String__FormatTemp(char *, ...);
void *fn_802632A8(void *, s32);
void *DebugMenu__FormatBoundValue(void *arg0, s32 arg1) {
    if (*(u32 *)((char *)arg0 + 1140) == (u32)arg1 && *(void **)((char *)arg0 + 1136) != NULL) {
        return String__FormatTemp(lbl_80349CB0, *(u8 *)*(u8 **)((char *)arg0 + 1136));
    }
    if (*(u32 *)((char *)arg0 + 1148) == (u32)arg1 && *(void **)((char *)arg0 + 1144) != NULL) {
        return String__FormatTemp(lbl_80349CB0, *(s8 *)*(s8 **)((char *)arg0 + 1144));
    }
    if (*(u32 *)((char *)arg0 + 1156) == (u32)arg1 && *(void **)((char *)arg0 + 1152) != NULL) {
        return String__FormatTemp(lbl_80349CB0, *(u16 *)*(u16 **)((char *)arg0 + 1152));
    }
    if (*(u32 *)((char *)arg0 + 1164) == (u32)arg1 && *(void **)((char *)arg0 + 1160) != NULL) {
        return String__FormatTemp(lbl_80349CB0, *(s16 *)*(s16 **)((char *)arg0 + 1160));
    }
    if (*(u32 *)((char *)arg0 + 1172) == (u32)arg1 && *(void **)((char *)arg0 + 1168) != NULL) {
        return String__FormatTemp(lbl_80349CB0, *(u32 *)*(u32 **)((char *)arg0 + 1168));
    }
    if (*(u32 *)((char *)arg0 + 1180) == (u32)arg1 && *(void **)((char *)arg0 + 1176) != NULL) {
        return String__FormatTemp(lbl_80349CB0, *(u32 *)*(u32 **)((char *)arg0 + 1176));
    }
    if (*(u32 *)((char *)arg0 + 1188) == (u32)arg1 && *(void **)((char *)arg0 + 1184) != NULL) {
        return String__FormatTemp(lbl_80349CB4, *(f32 *)*(f32 **)((char *)arg0 + 1184));
    }
    return fn_802632A8(arg0, arg1);
}
