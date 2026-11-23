/* MenuFrame__Destroy @ 0x80266C08 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void MenuPanelBox__Destroy(void *, s32);
void Sphere__DestroyCore(void *, s32);
extern char lbl_8034B498[];

void MenuFrame__Destroy(void *arg0, s32 arg1) {
    *(void **)((char *)arg0 + 412) = lbl_8034B498;
    MenuPanelBox__Destroy((char *)arg0 + 12168, 2);
    MenuPanelBox__Destroy((char *)arg0 + 420, 2);
    Sphere__DestroyCore(arg0, arg1);
}
