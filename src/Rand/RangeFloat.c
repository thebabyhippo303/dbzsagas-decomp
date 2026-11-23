/* Rand__RangeFloat @ 0x802547DC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Rand__RangeFloat @ 0x802547DC (0x5C). ProDG -O2. */
extern float Rand__FloatScaled(float span);

float Rand__RangeFloat(float a, float b) {
    if (a <= b)
        return a + Rand__FloatScaled(b - a);
    return b + Rand__FloatScaled(a - b);
}
