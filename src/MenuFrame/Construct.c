/* MenuFrame__Construct @ 0x80266B7C (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__AddChild(void *, void *);
void Sphere__Construct(void *);
void Sphere__EnsureAnimSet(void *, s32);
M2C_UNK MenuPanelBox__Construct(s32);
extern char lbl_8034B498[] __attribute__((section(".data")));
void *MenuFrame__Construct(void *arg0) {
    s32 temp_r29;
    void *temp_r28;

    temp_r29 = arg0 + 0x1A4;
    Sphere__Construct(arg0);
    temp_r28 = arg0 + 0x2F88;
    M2C_FIELD(arg0, void **, 0x19C) = lbl_8034B498;
    MenuPanelBox__Construct(temp_r29);
    MenuPanelBox__Construct((s32) temp_r28);
    Sphere__AddChild(arg0, (void *) temp_r29);
    Sphere__AddChild((void *) temp_r29, temp_r28);
    Sphere__EnsureAnimSet(arg0, 0);
    Sphere__EnsureAnimSet((void *) temp_r29, 0);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    return arg0;
}
