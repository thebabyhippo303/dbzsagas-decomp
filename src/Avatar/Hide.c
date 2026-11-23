/* Avatar__Hide @ 0x80024F34 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__Hide @ 0x80024F34 (0x90). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;

extern s32 Script__PopInt(void *script, void *lane);

typedef void (*AvatarSetFn)(void *self, s32 value);

typedef struct {
    char pad[96];
    s16 offset;
    char pad2[2];
    AvatarSetFn set;
} AvatarBinding;

typedef struct {
    char pad[52];
    AvatarBinding *binding;
    char pad2[1648 - 56];
    s32 locked;
} AvatarHideState;

void Avatar__Hide(void *arg0, void *arg1) {
    AvatarHideState *avatar;
    s32 visible;

    avatar = (AvatarHideState *) Script__PopInt(arg0, arg1);
    visible = Script__PopInt(arg0, arg1);
    if (avatar->locked == 0) {
        if (visible == 1) {
            avatar->binding->set((char *) avatar + avatar->binding->offset, 1);
            return;
        }
        avatar->binding->set((char *) avatar + avatar->binding->offset, 0);
    }
}
