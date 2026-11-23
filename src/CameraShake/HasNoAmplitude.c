/* CameraShake__HasNoAmplitude @ 0x801590F0 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;
extern f32 lbl_80337D2C __attribute__((section(".data")));
s32 CameraShake__HasNoAmplitude(void *self) {
    return *(f32 *)((char *)self + 8) <= lbl_80337D2C;
}
