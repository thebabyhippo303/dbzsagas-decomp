/* DebugMenuScreen__Initialize @ 0x802629C4 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * GameMenu__LoadDatabase(void *, void *);
void Sphere__SetPosition(void *, f32, f32);
void Sphere__SetAnchor(void *, f32, f32);
void Sphere__AddChild(void *, void *);
M2C_UNK GameMenu__BuildWidgets(s32);
extern f32 lbl_80349C10 __attribute__((section(".data")));
extern f32 lbl_80349C14 __attribute__((section(".data")));
extern f32 lbl_80349C18 __attribute__((section(".data")));
extern f32 lbl_80349C1C __attribute__((section(".data")));
extern char lbl_80349C04[] __attribute__((section(".data")));

void DebugMenuScreen__Initialize(void *arg0) {
    void *temp_r29;
    void *temp_r30;

    temp_r30 = arg0 + 0x43D0;
    temp_r29 = arg0 + 0x41DC;
    GameMenu__LoadDatabase(temp_r30, lbl_80349C04);
    GameMenu__BuildWidgets((s32) temp_r30);
    Sphere__SetPosition(temp_r29, lbl_80349C10, lbl_80349C14);
    Sphere__SetAnchor(temp_r29, lbl_80349C18, lbl_80349C1C);
    Sphere__AddChild(arg0, temp_r29);
}
