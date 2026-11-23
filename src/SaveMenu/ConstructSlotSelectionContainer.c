/* SaveMenu__ConstructSlotSelectionContainer @ 0x8004D748 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__AddChild(void *, void *);
void fn_802678CC(s32);
void fn_8026B590(void *);
M2C_UNK fn_80261F48(s32);
extern M2C_UNK lbl_8031C300 __attribute__((section(".data")));

s32 SaveMenu__ConstructSlotSelectionContainer(s32 arg0) {
    u32 var_r27;
    void *var_r31;

    var_r27 = 1;
    fn_802678CC(arg0);
    var_r31 = arg0 + 0x24EB4;
    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8031C300;
    fn_802678CC(arg0 + 0xAE90);
    fn_802678CC(arg0 + 0x15D20);
    fn_80261F48(arg0 + 0x20BB0);
    fn_8026B590(arg0 + 0x24D14);
    do {
        fn_8026B590(var_r31);
        var_r31 += 0x1A0;
    } while (var_r27-- != 0);
    Sphere__AddChild((void *) arg0, arg0 + 0x5D6C);
    Sphere__AddChild((void *) arg0, arg0 + 0xAE90);
    Sphere__AddChild((void *) arg0, arg0 + 0x15D20);
    Sphere__AddChild(arg0 + 0x15EC4, arg0 + 0x20BB0);
    return arg0;
}
