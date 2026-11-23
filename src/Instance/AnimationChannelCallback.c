/* Instance__AnimationChannelCallback @ 0x8023E714 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void fn_8023EDEC(void *, void *, u16, s32, s32);
void fn_8023F4A0(void *, void *, u16, void *, u32);
void Instance__AnimationChannelCallback(void *arg0, void *arg1, void *arg2, void *arg3, s32 arg4) {
    void *S;
    void *A2;
    u32 flags;
    s32 v6;
    s32 v7;
    S = arg3;
    A2 = arg2;
    flags = *(u32 *)((char *)S + 8);
    v6 = arg4;
    if ((((flags ^ 1) & 1) != 0)) {
        if (((flags & 2) != 0)) {
            v7 = *(s16 *)((char *)S + 2);
        }
        else {
            if (((flags & 4096) == 0)) goto third;
            v6 = *(s16 *)((char *)S + 4);
            v7 = 32767;
        }
        fn_8023EDEC(*(void **)((char *)S + 16), arg1, *(u16 *)S, v6, v7);
        return;
    }
third:
    fn_8023F4A0(*(void **)((char *)S + 12), arg1, *(u16 *)S, A2, flags);
}
