/* Water__GetSurfaceHeightImpl @ 0x80277084 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x398];
    float height;
} WaterPool;

WaterPool *Water__FindPoolByNumber(int number);
extern float lbl_80350000[];

float Water__GetSurfaceHeightImpl(int number) {
    WaterPool *pool = Water__FindPoolByNumber(number);
    float height;
    if (pool == 0)
        height = lbl_80350000[-1229];
    else
        height = pool->height;
    return height;
}
