/* AvaSurfGrid__GetAxisEntriesByLinearIndex @ 0x8009D2F4 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef struct VTable { char pad[8]; s16 thisOffset; char padA[2]; s32 (*get)(void *, s32); } VTable;
typedef struct AxisEntries { char pad[4]; VTable *vtable; } AxisEntries;
typedef struct Grid { char pad[0x14]; AxisEntries *x; AxisEntries *y; s32 rowCount; s32 columnCount; } Grid;
s32 AvaSurfGrid__GetAxisEntriesByLinearIndex(Grid *self, s32 index, s32 *xOut, s32 *yOut) {
    s32 quotient;
    s32 remainder;
    AxisEntries *axis;
    VTable *vtable;
    if (index < 0) return 0;
    quotient = index / self->columnCount;
    if (quotient >= self->rowCount) return 0;
    axis = self->x;
    vtable = axis->vtable;
    *xOut = vtable->get((char *)axis + vtable->thisOffset, quotient);
    axis = self->y;
    vtable = axis->vtable;
    remainder = index - quotient * self->columnCount;
    *yOut = vtable->get((char *)axis + vtable->thisOffset, remainder);
    return 1;
}
