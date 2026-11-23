/* AI__ResetToState119 @ 0x800637DC (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__SetState(void *, int);
void * Actor__GetStateHandler(int);
void AI__ResetToState119(void *arg0) {
    AI__SetState(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x74) = 0x77;
    M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler(0x77);
    M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg0, s32 *, 0x74);
}
