/* UiSpriteResources__ClearDatabaseHandles @ 0x8000EA84 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct UiSpriteResources {
    volatile int handles[13];
    char pad[0x88 - sizeof(int) * 13];
    volatile int field_88;
} UiSpriteResources;

void UiSpriteResources__ClearDatabaseHandles(UiSpriteResources *self) {
    int zero = 0;

    self->field_88 = zero;
    self->handles[0] = zero;
    self->handles[1] = zero;
    self->handles[2] = zero;
    self->handles[3] = zero;
    self->handles[4] = zero;
    self->handles[5] = zero;
    self->handles[6] = zero;
    self->handles[7] = zero;
    self->handles[8] = zero;
    self->handles[9] = zero;
    self->handles[10] = zero;
    self->handles[11] = zero;
    self->handles[12] = zero;
}
