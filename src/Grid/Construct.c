/* Grid__Construct @ 0x80150C50 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Grid__Construct @ 0x80150C50 (0x48). ProDG -O2. */
typedef struct {
    char pad[0x10];
    void *vtable;
    int field_14;
    int field_18;
} Grid;

extern char lbl_80333068[] __attribute__((section(".data")));
extern void fn_80254DAC(void *self);

Grid *Grid__Construct(Grid *self) {
    fn_80254DAC(self);
    self->field_14 = 0;
    self->vtable = lbl_80333068;
    self->field_18 = 0;
    return self;
}
