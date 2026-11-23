/* TriggerBox__GetSurfaceTypeNameIndex @ 0x800FCC7C (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern M2C_UNK lbl_8036B5BC __attribute__((section(".data")));

s32 TriggerBox__GetSurfaceTypeNameIndex(void *arg0) {
    volatile char *base = (volatile char *)&lbl_8036B5BC;
    base += 0x1C;
    return *(s32 *)(base + (M2C_FIELD(arg0, s32 *, 0x508) << 5));
}
