/* Grid__GetLinearIndex @ 0x80150DCC (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Grid__GetLinearIndex @ 0x80150DCC (0x3C). ProDG -O2. */
typedef struct {
	char pad[0x1C];
	int rows;
	int columns;
} Grid;

int Grid__GetLinearIndex(Grid *grid, int row, int column) {
	if (row < 0 || row >= grid->rows || column < 0 ||
		column >= grid->columns)
		return -1;
	return row * grid->columns + column;
}
