/* Missile__Destroy @ 0x800D4D60 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Missile__Destroy @ 0x800D4D60 (0xA4). ProDG -O2. */
#define NULL 0
typedef int s32;

typedef struct Missile {
    char pad0[0x34];
    char *vt34;
    char pad1[0x198 - 0x38];
    char *vt198;
    char pad2[0x368 - 0x19C];
    void *emitter;
    char pad3[0x3AC - 0x36C];
    void *handle;
} Missile;

extern char lbl_803330A8[];
extern char lbl_80333168[];
extern char lbl_80340F30[];
extern char lbl_80340FF0[];
extern void *lbl_803DCE84;

void Emitter__Kill(void *emitter);
int Render__ReleaseObjectHandle(void *owner, void **handle);
void fn_801A6764(void *obj, int arg);
void fn_801F101C(void *obj, int arg);

void Missile__Destroy(Missile *missile, s32 arg1) {
    void *emitter;

    missile->vt198 = lbl_803330A8;
    missile->vt34 = lbl_80333168;
    if (missile->handle != NULL) {
        Render__ReleaseObjectHandle(lbl_803DCE84, &missile->handle);
    }
    emitter = missile->emitter;
    if (emitter != NULL) {
        Emitter__Kill(emitter);
        missile->emitter = NULL;
    }
    missile->vt198 = lbl_80340F30;
    missile->vt34 = lbl_80340FF0;
    fn_801A6764(&missile->vt198, 0);
    fn_801F101C(missile, arg1);
}
