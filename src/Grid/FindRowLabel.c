/* Grid__FindRowLabel @ 0x80150D7C (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Grid__FindRowLabel @ 0x80150D7C (0x28). ProDG -O2. */
typedef struct {
    char pad[0x14];
    void *row_labels;
} Grid;

extern int fn_80254BB8(void *labels, const char *label, int mode);

int Grid__FindRowLabel(Grid *grid, const char *label) {
    return fn_80254BB8(grid->row_labels, label, -1);
}
