/* AvatarControls__ResetActionInputState @ 0x800A4C30 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_803202A0 __attribute__((section(".data")));

typedef struct AvatarControlsReset {
    char pad[0x18C];
    volatile int field_18C;
    volatile int field_190;
    int pad_194;
    volatile int field_198;
    int pad_19C;
    volatile float field_1A0;
} AvatarControlsReset;

void AvatarControls__ResetActionInputState(AvatarControlsReset *self) {
    self->field_198 = 0;
    self->field_1A0 = lbl_803202A0;
    self->field_18C = 0;
    self->field_190 = 0;
}
