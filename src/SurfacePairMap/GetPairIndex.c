/* SurfacePairMap__GetPairIndex @ 0x801F894C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x18];
    int limit;
    int count;
    int *table;
} SurfacePairMap;

int SurfacePairMap__GetPairIndex(SurfacePairMap *self, int a, int b) {
    int n;
    int x;
    int y;
    int t;

    if (a >= 0) {
        n = self->count;
        if (a < n) {
            if (b >= 0) {
                if (b >= n) {
                    return -1;
                }
                x = self->table[a];
                y = self->table[b];
                if (x > y) {
                    t = x;
                    x = y;
                    y = t;
                }
                if (x < self->limit) {
                    return y + ((x * ((n << 1) - x - 1)) >> 1);
                }
            }
        }
    }
    return -1;
}
