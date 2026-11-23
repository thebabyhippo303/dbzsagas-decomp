/* GameMenu__Construct @ 0x80263930 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * BaseMenu__Construct(void *);
void UiAnimator__Construct(void *);
void Sphere__Construct(void *);
extern char lbl_8034C3C8[];
extern s32 lbl_803DCE64;

void *GameMenu__Construct(void *arg0) {
    s32 var_ctr;
    void *var_r9;

    BaseMenu__Construct(arg0);
    M2C_FIELD(arg0, char **, 0x10) = lbl_8034C3C8;
    Sphere__Construct(arg0 + 0xC4);
    UiAnimator__Construct(arg0 + 0x384);
    var_ctr = 0x12;
    M2C_FIELD(arg0, s32 *, 0x448) = 0;
    M2C_FIELD(arg0, s32 *, 0x454) = 0;
    M2C_FIELD(arg0, s32 *, 0x458) = 0;
    var_r9 = arg0 + 0x3FC;
    do {
        M2C_FIELD(var_r9, s32 *, -0x198) = 0;
        M2C_FIELD(var_r9, s32 *, -0x150) = 0;
        M2C_FIELD(var_r9, s32 *, -0x108) = 0;
        M2C_FIELD(var_r9, s32 *, -0xC0) = 0;
        M2C_FIELD(var_r9, s32 *, -0x48) = 0;
        M2C_FIELD(var_r9, s32 *, 0) = 0;
        var_r9 += 4;
        var_ctr -= 1;
    } while (var_ctr != 0);
    lbl_803DCE64 += 0x45C;
    return arg0;
}
