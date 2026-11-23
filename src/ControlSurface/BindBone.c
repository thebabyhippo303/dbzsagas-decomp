/* ControlSurface__BindBone @ 0x802B2DBC (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void *Skeleton__FindBoneByName(void *, void *, void *);
void fn_8023CE60(void *, void *);
void ControlSurface__BindBone(void *arg0, void *arg1, void *arg2) {
    void *bone = Skeleton__FindBoneByName(arg2, arg0, arg1);
    if (bone != NULL) {
        fn_8023CE60(*(void **)arg0, (char *)arg0 + 4);
    } else {
        *(void **)arg0 = bone;
    }
}
