/* Grid__GetCoordinatesForIndex @ 0x80150E08 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Grid__GetCoordinatesForIndex @ 0x80150E08 (0xA8). ProDG -O2. */
typedef int s32;

typedef struct {
    char pad[8];
    short adjust;
    char pad2[2];
    s32 (*getCoordinate)(void *self, s32 index);
} GridAxisVtable;

typedef struct {
    char pad[4];
    GridAxisVtable *vtable;
} GridAxis;

typedef struct {
    char pad[0x14];
    GridAxis *rowAxis;
    GridAxis *colAxis;
    s32 count;
    s32 stride;
} GridCoords;

s32 Grid__GetCoordinatesForIndex(GridCoords *grid, s32 index, s32 *row, s32 *col) {
    s32 quotient;
    GridAxis *axis;

    if (index >= 0) {
        quotient = index / grid->stride;
        if (quotient < grid->count) {
            axis = grid->rowAxis;
            *row = axis->vtable->getCoordinate((char *)axis + axis->vtable->adjust, quotient);
            axis = grid->colAxis;
            *col = axis->vtable->getCoordinate((char *)axis + axis->vtable->adjust,
                                               index - quotient * grid->stride);
            return 1;
        }
    }
    return 0;
}
