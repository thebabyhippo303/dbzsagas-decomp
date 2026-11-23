/* SfxPlayer__CreateVoiceForSound @ 0x80198F00 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;

typedef struct VT {
    char pad[0x98];
    s16 adjust;
    s16 pad2;
    s32 (*fn)(void *, s32, s32 *);
} VT;

typedef struct Src {
    char pad[0x60];
    VT *vt;
} Src;

typedef struct SfxPlayer {
    char pad[0x20];
    Src *src;
    s32 field24;
} SfxPlayer;

s32 fn_8019CEF8(s32);
s32 fn_8019D590(s32, void *, s32);

s32 SfxPlayer__CreateVoiceForSound(SfxPlayer *self, s32 arg1) {
    s32 sp8;
    s32 voice;
    s32 handle;
    Src *src;
    VT *vt;
    s32 (*fn)(void *, s32, s32 *);

    src = self->src;
    vt = src->vt;
    sp8 = 0;
    fn = vt->fn;
    voice = fn((char *)src + vt->adjust, arg1, &sp8);
    if (voice == 0) {
        return 0;
    }
    handle = fn_8019D590(self->field24, self, voice);
    if (handle == 0) {
        return 0;
    }
    return fn_8019CEF8(handle);
}
