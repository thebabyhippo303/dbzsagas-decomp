/* Table__GetCellAddress @ 0x80159E9C (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Table__GetCellAddress @ 0x80159E9C (0x1C). ProDG -O2. */
typedef struct {
    char pad[4];
    int *cells;
    int pad2;
    int width;
} Table;

int *Table__GetCellAddress(Table *table, int row, int col) {
    return table->cells + (row * table->width + col);
}
