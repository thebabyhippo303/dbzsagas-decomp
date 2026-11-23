/* MathUtil__OffsetPointXZByAngle @ 0x8017E208 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MathUtil__OffsetPointXZByAngle @ 0x8017E208 (0x7C). ProDG -O2. */
typedef struct {
    float x;
    float y;
    float z;
} Point;

extern const float lbl_803DE520;
extern float sinf(float angle);
extern float cosf(float angle);

void MathUtil__OffsetPointXZByAngle(float angle, float distance, Point *src, Point *dst) {
    float rad = angle * lbl_803DE520;
    float s = sinf(rad);
    float c = cosf(rad);
    dst->x = src->x + distance * s;
    dst->z = src->z + distance * c;
}
