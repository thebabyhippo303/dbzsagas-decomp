/* AI__ResetToState13 @ 0x80063828 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Actor__GetStateHandler(int);
void AI__SetState(void *, int);

void AI__ResetToState13(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x464) = 0;
    AI__SetState(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x74) = 0xD;
    M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler(0xD);
    *(volatile s32 *)((char *)arg0 + 0x78) = (s32) M2C_FIELD(arg0, s32 *, 0x74);
    *(volatile s32 *)((char *)arg0 + 0x530) = 0;
}
