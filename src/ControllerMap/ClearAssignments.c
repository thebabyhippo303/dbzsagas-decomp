/* ControllerMap__ClearAssignments @ 0x801D65B0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { int pad0; int *slots; unsigned int count; int assigned; } CMap;
void ControllerMap__ClearAssignments(CMap *self) {
    unsigned int i;
    for (i = 0; i < self->count; i++) {
        self->slots[i] = -1;
    }
    self->assigned = 0;
}
