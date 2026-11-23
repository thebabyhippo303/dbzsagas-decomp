/* Grid__BindDimensions @ 0x80150CE0 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Grid__BindDimensions @ 0x80150CE0 (0x5C). ProDG -O2. */
typedef int s32;
#define NULL 0

typedef struct {
    s32 field_00;
    char pad_04[0x10];
    s32 *field_14;
    s32 *field_18;
    s32 field_1C;
    s32 field_20;
} GridDims;

s32 Grid__BindDimensions(GridDims *self, s32 *arg1, s32 *arg2) {
    s32 dim0;
    s32 dim1;

    if (self->field_14 != NULL || arg1 == NULL || self->field_18 != NULL || arg2 == NULL) {
        return 0;
    }
    self->field_14 = arg1;
    self->field_18 = arg2;
    dim0 = *arg1;
    self->field_1C = dim0;
    dim1 = *arg2;
    self->field_20 = dim1;
    self->field_00 = dim0 * dim1;
    return 1;
}
