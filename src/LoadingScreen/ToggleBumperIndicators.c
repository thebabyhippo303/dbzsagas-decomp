/* LoadingScreen__ToggleBumperIndicators @ 0x801298C4 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern char lbl_803279D4[];
extern char lbl_803279DC[];
extern int lbl_803DC6D8;
extern int lbl_803DC6DC;
extern int lbl_803DC6E8;

int FmvQueue__AddMovie(void *queue, char *name, int mode);
void FmvBackground__SetSkipAllowed(void *bg, int allowed);

int LoadingScreen__ToggleBumperIndicators(void *arg0, void *arg1) {
    int flag = lbl_803DC6E8;

    if (flag != 0) {
        FmvQueue__AddMovie(arg1, lbl_803279D4, 0);
        FmvBackground__SetSkipAllowed(arg1, 0);
        lbl_803DC6DC = lbl_803DC6D8 = lbl_803DC6E8 = 0;
        return 1;
    } else {
        FmvQueue__AddMovie(arg1, lbl_803279DC, 1);
        lbl_803DC6D8 = flag;
        lbl_803DC6DC = 1;
        return 1;
    }
}
