/* AvatarControls__InitializeCallbackState @ 0x80099CEC (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct AvatarControlsCallbackState {
    volatile int field_0;
    volatile int field_4;
    volatile int field_8;
    volatile int field_C;
    volatile int field_10;
} AvatarControlsCallbackState;

AvatarControlsCallbackState *AvatarControls__InitializeCallbackState(AvatarControlsCallbackState *self) {
    int zero = 0;

    self->field_10 = zero;
    self->field_0 = zero;
    self->field_4 = zero;
    self->field_8 = zero;
    self->field_C = zero;
    return self;
}
