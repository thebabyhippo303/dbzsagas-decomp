/* DebugScreen__Construct @ 0x802628E4 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern void Sphere__Construct(void *o);
extern void Sphere__ResetProperties(void *o);
extern char lbl_8034BDB0[] __attribute__((section(".rodata")));
typedef struct DebugScreen { char pad[412]; void *f412; } DebugScreen;
DebugScreen *DebugScreen__Construct(DebugScreen *this) {
    Sphere__Construct(this);
    this->f412 = (void *)lbl_8034BDB0;
    Sphere__ResetProperties(this);
    return this;
}
