/* MathUtil__AdvanceBallisticPathTime @ 0x8017DD5C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct BallisticPath {
    int done;
    int gate;
    int flag;
    char pad[28];
    float time;
    float limit;
} BallisticPath;

void MathUtil__AdvanceBallisticPathTime(BallisticPath *self, float dt) {
    if (self->gate != 0)
        return;
    self->time += dt;
    if (self->flag == 0)
        return;
    if (self->time < self->limit)
        return;
    self->done = self->gate;
}
