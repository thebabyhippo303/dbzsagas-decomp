/* AvatarVoice__PlaySound @ 0x802510C8 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;

s32 Sound__Play2DWithVolumePitch(char *, void *, f32, f32);
s32 Sound__Play3DAtActorWithVolumePitch(char *, void *, void *, f32, f32);
void Sound__SetHandleVolumeAndPitch(s32, f32, f32);
extern f32 lbl_80347D88 __attribute__((section(".data")));
extern f32 lbl_80347D8C __attribute__((section(".data")));

s32 AvatarVoice__PlaySound(void *arg0, char *name, void *actor, f32 vol, f32 pitch) {
    s32 handle;
    s32 ok;

    if (actor == 0) {
        ok = Sound__Play2DWithVolumePitch(name, &handle, vol, lbl_80347D88);
    } else {
        ok = Sound__Play3DAtActorWithVolumePitch(name, actor, &handle, vol, lbl_80347D88);
    }
    if (ok == 0) {
        return 0;
    }
    Sound__SetHandleVolumeAndPitch(handle, pitch, lbl_80347D8C);
    return handle;
}
