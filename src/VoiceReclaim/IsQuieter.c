/* VoiceReclaim__IsQuieter @ 0x8019BAEC (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;
typedef unsigned int u32;
f32 Voice__GetComputedVolume(void *);
u32 Voice__GetStartTimestamp(void *);
double fabs(double);
extern f32 lbl_8033FB74 __attribute__((section(".data")));

s32 VoiceReclaim__IsQuieter(void *unused, void *a, void *b) {
    f32 va = Voice__GetComputedVolume(a);
    f32 vb = Voice__GetComputedVolume(b);
    if (fabs(va - vb) < lbl_8033FB74) {
        return Voice__GetStartTimestamp(a) < Voice__GetStartTimestamp(b);
    }
    return va < vb;
}
