/* Device__Destroy @ 0x800E51E8 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Device__Destroy @ 0x800E51E8 (0x54). ProDG -O2. */
typedef struct DeviceObj {
    char pad[0x34];
    void *vt34;
    char mid[0x198 - 0x38];
    void *vt198;
    char mid2[0x1B4 - 0x19C];
    void *vt1B4;
    char mid3[0x4C8 - 0x1B8];
    void *vt4C8;
} DeviceObj;

extern char lbl_803323F0[];
extern char lbl_803323D0[];
extern char lbl_80332300[];
extern char lbl_80332498[];
extern void fn_802B32C4(DeviceObj *self);

void Device__Destroy(DeviceObj *self) {
    self->vt198 = lbl_803323F0;
    self->vt1B4 = lbl_803323D0;
    self->vt4C8 = lbl_80332300;
    self->vt34 = lbl_80332498;
    fn_802B32C4(self);
}
