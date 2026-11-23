/* Voice__ComputeVolume @ 0x8019D108 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
f32 fn_80198EF0(int);
extern f32 lbl_8033FBE4 __attribute__((section(".data")));
extern f32 lbl_8033FBE8 __attribute__((section(".data")));
typedef struct VoiceObj { int owner; char pad[0x28]; f32 gainA; char pad2[4]; f32 gainB; } VoiceObj;

f32 Voice__ComputeVolume(VoiceObj *self) {
    f32 v = fn_80198EF0(self->owner) * self->gainA * self->gainB;
    f32 lo = lbl_8033FBE4;
    f32 hi = lbl_8033FBE8;
    f32 r;
    if (!(v >= lo)) r = lo; else if (!(v <= hi)) r = hi; else r = v;
    return r;
}
