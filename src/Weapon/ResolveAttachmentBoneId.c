/* Weapon__ResolveAttachmentBoneId @ 0x800DD900 (size: 0x1F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
int Actor__FindBoneIdByName(void *, unsigned char *, const char *);
extern u8 lbl_8031E248 __attribute__((section(".data")));
extern u8 lbl_8031E9D0 __attribute__((section(".data")));
extern u8 lbl_8031F834 __attribute__((section(".data")));
extern u8 lbl_8031F840 __attribute__((section(".data")));
extern u8 lbl_80320DE4 __attribute__((section(".data")));
extern u8 lbl_80320DF0 __attribute__((section(".data")));
extern u8 lbl_80320DF8 __attribute__((section(".data")));
extern u8 lbl_80320E00 __attribute__((section(".data")));
extern u8 lbl_80320E08 __attribute__((section(".data")));
extern u8 lbl_80320E14 __attribute__((section(".data")));
extern u8 lbl_80320E20 __attribute__((section(".data")));
extern u8 lbl_80320E2C __attribute__((section(".data")));
u8 Weapon__ResolveAttachmentBoneId(s32 arg0, void *arg1, s32 arg2) {
    s8 sp8;
    sp8=0;
    switch(arg2) {
    case 15: case 0:
        if ((s32)(u8)sp8==0) Actor__FindBoneIdByName(arg1,&lbl_80320DE4,&sp8);
        break;
    case 16: case 1:
        if ((s32)(u8)sp8==0) Actor__FindBoneIdByName(arg1,&lbl_8031E248,&sp8);
        break;
    case 13: case 2:
        if ((u8)sp8==0) Actor__FindBoneIdByName(arg1,&lbl_8031F834,&sp8);
        break;
    case 14: case 3:
        if ((s32)(u8)sp8==0) Actor__FindBoneIdByName(arg1,&lbl_8031F840,&sp8);
        break;
    case 4: Actor__FindBoneIdByName(arg1,&lbl_80320DF0,&sp8); break;
    case 5: Actor__FindBoneIdByName(arg1,&lbl_80320DF8,&sp8); break;
    case 6: Actor__FindBoneIdByName(arg1,arg0+0x10,&sp8); break;
    case 7: Actor__FindBoneIdByName(arg1,&lbl_8031E9D0,&sp8); break;
    case 8: Actor__FindBoneIdByName(arg1,&lbl_80320E00,&sp8); break;
    case 9:
        if ((s32)(u8)sp8==0) Actor__FindBoneIdByName(arg1,&lbl_80320E08,&sp8);
        break;
    case 10: Actor__FindBoneIdByName(arg1,&lbl_80320E14,&sp8); break;
    case 11: Actor__FindBoneIdByName(arg1,&lbl_80320E20,&sp8); break;
    case 12: Actor__FindBoneIdByName(arg1,&lbl_80320E2C,&sp8); break;
    }
    return (u8)sp8;
}