/* AvaSurfGrid__ClearDimensions @ 0x8009D228 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct AvaSurfGridClear {
    char pad[0x14];
    volatile int field_14;
    volatile int field_18;
    volatile int field_1C;
    volatile int field_20;
} AvaSurfGridClear;

void fn_80254E50(AvaSurfGridClear *self);

void AvaSurfGrid__ClearDimensions(AvaSurfGridClear *self) {
    fn_80254E50(self);
    self->field_20 = 0;
    self->field_14 = 0;
    self->field_18 = 0;
    self->field_1C = 0;
}
