/* SaveMenu__Construct @ 0x8004E1F0 (size: 0x21C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__AddChild(void *, void *);
void fn_802678CC(void);
void fn_8026B590(void *);
void fn_8026C508(void *, float, float);
void fn_8026C5A0(void *, float, float);
void fn_8026C634(void *, float, float);
void fn_80270450(void *);
M2C_UNK SaveMenu__ConstructSlotSelectionContainer(void *);
M2C_UNK fn_80269C84(void *);
f32 fn_8026B86C();
f32 fn_8026B8B8();
extern M2C_UNK lbl_80319A54;
extern f32 lbl_80319A5C;
extern M2C_UNK lbl_8031BE08 __attribute__((section(".data")));
extern void *lbl_803DC414;

void *SaveMenu__Construct(void *arg0) {
    f32 arg_load;
    s32 temp_cr0_eq;
    s32 var_r31;
    void *temp_r3;
    void *var_r30;

    var_r31 = 1;
    var_r30 = arg0 + 0x67F4;
    fn_8026B590(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8031BE08;
    fn_80269C84(arg0 + 0x1A4);
    fn_8026B590(arg0 + 0x6654);
    do {
        fn_8026B590(var_r30);
        var_r30 += 0x1A0;
        temp_cr0_eq = var_r31 == 0;
        var_r31 -= 1;
    } while (temp_cr0_eq == 0);
    temp_r3 = arg0 + 0x6B34;
    fn_80269C84(temp_r3);
    var_r31 = 1;
    var_r30 = arg0 + 0xD184;
    fn_8026B590(arg0 + 0xCFE4);
    do {
        fn_8026B590(var_r30);
        var_r30 += 0x1A0;
        temp_cr0_eq = var_r31 == 0;
        var_r31 -= 1;
    } while (temp_cr0_eq == 0);
    var_r30 = arg0 + 0x184F4;
    fn_802678CC();
    var_r31 = 1;
    fn_8026B590(arg0 + 0x18354);
    do {
        fn_8026B590(var_r30);
        var_r30 += 0x1A0;
        temp_cr0_eq = var_r31 == 0;
        var_r31 -= 1;
    } while (temp_cr0_eq == 0);
    var_r30 = arg0 + 0x48A58;
    SaveMenu__ConstructSlotSelectionContainer(arg0 + 0x18834);
    var_r31 = 1;
    fn_802678CC();
    fn_8026B590(arg0 + 0x488B8);
    do {
        fn_8026B590(var_r30);
        var_r30 += 0x1A0;
        temp_cr0_eq = 1;
        if (var_r31 != 0) {
            temp_cr0_eq = 0;
        }
        var_r31 -= 1;
    } while (temp_cr0_eq == 0);
    fn_80270450(arg0 + 0x48D98);
    fn_8026B590(arg0 + 0x48F8C);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x49144) = (s32) M2C_FIELD(&lbl_80319A54, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x49148) = (s32) M2C_FIELD(&lbl_80319A54, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x4913C) = 0;
    M2C_FIELD(arg0, s32 *, 0x49140) = 0;
    arg_load = lbl_80319A5C;
    M2C_FIELD(arg0, s32 *, 0x49138) = 0;
    fn_8026C5A0(arg0, arg_load, lbl_80319A5C);
    fn_8026C634(arg0, fn_8026B86C(), fn_8026B8B8());
    fn_8026C508(arg0, lbl_80319A5C, lbl_80319A5C);
    var_r30 = lbl_803DC414;
    if (var_r30 == NULL) {
        lbl_803DC414 = arg0;
    } else {
loop_11:
        if ((void *) M2C_FIELD(var_r30, void **, 0x49138) == NULL) {
            M2C_FIELD(var_r30, void **, 0x49138) = arg0;
        } else {
            var_r30 = M2C_FIELD(var_r30, void **, 0x49138);
            goto loop_11;
        }
    }
    Sphere__AddChild(arg0, temp_r3);
    Sphere__AddChild(arg0, arg0 + 0x1A4);
    Sphere__AddChild(arg0, arg0 + 0x48D98);
    Sphere__AddChild(arg0, arg0 + 0x18834);
    Sphere__AddChild(arg0, arg0 + 0xD4C4);
    Sphere__AddChild(arg0, arg0 + 0x3DA28);
    return arg0;
}
