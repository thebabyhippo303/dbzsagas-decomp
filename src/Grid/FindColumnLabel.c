/* Grid__FindColumnLabel @ 0x80150DA4 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Grid__FindColumnLabel @ 0x80150DA4 (0x28). ProDG -O2. */
typedef struct {
    char pad[0x18];
    void *column_labels;
} Grid;

extern int EnumTable__FindByName(void *labels, const char *label, int mode);

int Grid__FindColumnLabel(Grid *grid, const char *label) {
    return EnumTable__FindByName(grid->column_labels, label, -1);
}
