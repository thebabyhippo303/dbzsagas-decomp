/* Grid__Destroy @ 0x80150C98 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Grid__Destroy @ 0x80150C98 (0x48). ProDG -O2. */
typedef struct {
    char pad[0x10];
    void *vtable;
} Grid;

extern char lbl_80333068[];
extern void Grid__ClearDimensions(Grid *self);
extern void fn_80254DF8(Grid *self, unsigned int flags);

void Grid__Destroy(Grid *self, unsigned int flags) {
    self->vtable = lbl_80333068;
    Grid__ClearDimensions(self);
    fn_80254DF8(self, flags);
}
