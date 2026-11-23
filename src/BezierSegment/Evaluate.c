/* BezierSegment__Evaluate @ 0x801A2854 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

void Bezier__EvaluateCubic(void *, char *, char *, char *, s32, s32);

void BezierSegment__Evaluate(char *self, s32 t, s32 out) {
    Bezier__EvaluateCubic(self, self + 12, self + 24, self + 36, t, out);
}
