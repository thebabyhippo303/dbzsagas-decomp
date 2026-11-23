/* Fade__Kill @ 0x80228ED8 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef float f32;

void fn_8029068C(void);
void EffectHandle__Release(u32);
extern f32 lbl_803468B4 __attribute__((section(".data")));

typedef struct Fade {
    char pad0[4];
    s32 flags;
    f32 field_8;
    char padC[12];
    s32 handle;
    s32 field_1C;
} Fade;

void Fade__Kill(Fade *fade) {
    s32 flags;

    if (fade->field_8 != lbl_803468B4) {
        flags = fade->flags;
        fade->field_8 = lbl_803468B4;
        if (flags & 0x10) {
            fn_8029068C();
        }
        flags = fade->flags;
        if (flags & 0x40) {
            if (fade->handle != 0) {
                EffectHandle__Release((u32)fade->handle);
                fade->handle = 0;
                fade->field_1C = 0;
            }
        } else {
            fade->flags = flags | 0x80;
        }
    }
}
