/* Grid__ClearDimensions @ 0x80150D3C (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct GridClear {
    char pad[0x14];
    volatile int field_14;
    volatile int field_18;
    volatile int field_1C;
    volatile int field_20;
} GridClear;

void fn_80254E50(GridClear *self);

void Grid__ClearDimensions(GridClear *self) {
    fn_80254E50(self);
    self->field_20 = 0;
    self->field_14 = 0;
    self->field_18 = 0;
    self->field_1C = 0;
}
