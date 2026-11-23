/* MathUtil__SetPointPosXZ @ 0x802B2AC4 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    float x;
    float y;
    float z;
} Point;

extern float Script__PopFloat(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);
extern void MathUtil__OffsetPointXZByAngle(float angle, float distance, Point *src, Point *dst);
extern const float lbl_803DE524;

void MathUtil__SetPointPosXZ(void *script, void *context) {
    Point src;
    Point dst;
    Point *p = &src;
    float distance;

    p->x = Script__PopFloat(script, context);
    p->z = Script__PopFloat(script, context);
    distance = Script__PopFloat(script, context);
    MathUtil__OffsetPointXZByAngle(Script__PopFloat(script, context) * lbl_803DE524, distance, p, &dst);
    Script__PushFloat(script, context, dst.x);
    Script__PushFloat(script, context, dst.z);
}
