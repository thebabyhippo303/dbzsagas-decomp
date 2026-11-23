/* AI__SelectFuzzyRangeForTargetDistance @ 0x80072990 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
void AI__ComputeTargetingInfo(void *, void *);
float sqrtf(float);
int AI__SelectHighestFuzzyRangeScore(void *, int, int, int, int, int, float, float);
int AI__SelectFuzzyRangeForTargetDistance(void *arg0) {
    struct { char pad[24]; float value; } out;
    AI__ComputeTargetingInfo(&out, arg0);
    return AI__SelectHighestFuzzyRangeScore(arg0, 1, 2, 5, 5, 0, sqrtf(out.value), *(float *)((char *)arg0 + 0x348));
}
