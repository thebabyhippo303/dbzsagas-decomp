/* Simple__LoadAnimScriptFromProperties @ 0x802C5034 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_802B2FB0(void *, void *, void *);
void fn_802B2FB4(void *);
void fn_802B2FB8(void *, char *);
char *PropertyStream__ReadString(void *, char *, char *);
s32 AnimScript__LoadActorThread(void *, char *, s32);
extern char lbl_803BEFC0[];
extern char lbl_80353028[];
extern char lbl_80353034[];
extern char lbl_80353048[];

s32 Simple__LoadAnimScriptFromProperties(void *arg0, s32 arg1) {
    char *str;

    fn_802B2FB0(lbl_803BEFC0, M2C_FIELD(arg0, void **, 0x1BC), M2C_FIELD(arg0, void **, 0x1B8));
    fn_802B2FB4(lbl_803BEFC0);
    fn_802B2FB8(lbl_803BEFC0, lbl_80353028);
    str = PropertyStream__ReadString(lbl_803BEFC0, lbl_80353034, lbl_80353048);
    if ((str == NULL) || (str[0] == 0))
        return 1;
    return AnimScript__LoadActorThread(M2C_FIELD(arg0, void **, 0x84), str, arg1);
}
