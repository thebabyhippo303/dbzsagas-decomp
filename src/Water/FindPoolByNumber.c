/* Water__FindPoolByNumber @ 0x802769FC (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct WaterPool WaterPool;

struct WaterPool {
    char pad0[0x40];
    int number;
    char pad1[0x3B4 - 0x44];
    WaterPool *next;
};

typedef struct {
    char pad[4];
    WaterPool *pools;
} Water;

WaterPool *Water__FindPoolByNumber(Water *water, int number) {
    WaterPool *pool = water->pools;

    while (pool != 0) {
        if (number == pool->number)
            return pool;
        pool = pool->next;
    }
    return 0;
}
