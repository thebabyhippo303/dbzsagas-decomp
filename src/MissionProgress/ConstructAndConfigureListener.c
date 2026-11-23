/* MissionProgress__ConstructAndConfigureListener @ 0x8011CF78 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void MissionProgress__ConstructListener(void *self, s32 a, s32 b, s32 c, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6);
void MissionProgress__ConfigureListenerWidgets(void *self, s32 a, s32 b);
extern char lbl_8032D388[] __attribute__((section(".data")));

void *MissionProgress__ConstructAndConfigureListener(void *self, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, f32 farg6) {
    MissionProgress__ConstructListener(self, arg3, arg4, arg5, farg1, farg2, farg3, farg4, farg5, farg6);
    M2C_FIELD(self, s32 *, 0x68) = arg1;
    M2C_FIELD(self, f32 *, 0x70) = farg0;
    M2C_FIELD(self, s32 *, 0x6C) = arg2;
    M2C_FIELD(self, char **, 0x64) = lbl_8032D388;
    MissionProgress__ConfigureListenerWidgets(self, arg4, arg2);
    return self;
}
