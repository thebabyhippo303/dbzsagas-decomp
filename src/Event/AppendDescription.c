/* Event__AppendDescription @ 0x801BCB28 (size: 0x1C4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * strcat(char *, char *);
void sprintf(char *, char *, ...);
extern s8 lbl_80341830 __attribute__((section(".data")));
extern s8 lbl_8034183C __attribute__((section(".data")));
extern s8 lbl_80341844 __attribute__((section(".data")));
extern s8 lbl_8034184C __attribute__((section(".data")));
extern s8 lbl_80341858 __attribute__((section(".data")));
extern s8 lbl_80341864 __attribute__((section(".data")));

void Event__AppendDescription(u8 *arg0, char *arg1) {
    char sp8[12];
    void *obj;
    void *vt;
    s32 flag;

    strcat(arg1, (char *)&lbl_80341830);
    obj = M2C_FIELD(arg0, void **, 0x20);
    if (obj == NULL) {
        strcat(arg1, (char *)&lbl_8034183C);
    } else if ((flag = ((M2C_FIELD(obj, u32 *, 0x30) ^ 0x8FDB77BE) == 0)) == 0) {
        strcat(arg1, (char *)&lbl_80341844);
    } else {
        vt = M2C_FIELD(obj, void **, 0x34);
        strcat(arg1, M2C_FIELD(vt, char *(**)(void *), 0x2C)((char *)obj + M2C_FIELD(vt, s16 *, 0x28)));
        obj = M2C_FIELD(arg0, void **, 0x20);
        vt = M2C_FIELD(obj, void **, 0x34);
        M2C_FIELD(vt, void (**)(void *, char *), 0x34)((char *)obj + M2C_FIELD(vt, s16 *, 0x30), arg1);
    }
    sprintf(sp8, (char *)&lbl_8034184C, M2C_FIELD(arg0, void **, 0x20));
    strcat(arg1, sp8);
    strcat(arg1, (char *)&lbl_80341858);
    obj = M2C_FIELD(arg0, void **, 0x24);
    if (obj == NULL) {
        strcat(arg1, (char *)&lbl_8034183C);
    } else if ((flag = ((M2C_FIELD(obj, u32 *, 0x30) ^ 0x8FDB77BE) == 0)) == 0) {
        strcat(arg1, (char *)&lbl_80341844);
    } else {
        vt = M2C_FIELD(obj, void **, 0x34);
        strcat(arg1, M2C_FIELD(vt, char *(**)(void *), 0x2C)((char *)obj + M2C_FIELD(vt, s16 *, 0x28)));
        obj = M2C_FIELD(arg0, void **, 0x24);
        vt = M2C_FIELD(obj, void **, 0x34);
        M2C_FIELD(vt, void (**)(void *, char *), 0x34)((char *)obj + M2C_FIELD(vt, s16 *, 0x30), arg1);
    }
    sprintf(sp8, (char *)&lbl_80341864, M2C_FIELD(arg0, void **, 0x24));
    strcat(arg1, sp8);
}
