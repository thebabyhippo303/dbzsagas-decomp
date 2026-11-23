/* Plant__UpdateSimulationIfNeeded @ 0x800F43B0 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *Plant__AcquireReference(void *reference, char *name, int extra);
extern void Plant__UpdateSimulation(void *self);

void Plant__UpdateSimulationIfNeeded(void *self) {
    void *node;
    void *inner;
    char *name;

    if (*(int *)((char *)self + 0x414) == 0) {
        node = *(void **)((char *)self + 0x84);
        if (*(unsigned short *)((char *)node + 2) & 4) {
            inner = *(void **)*(void **)((char *)node + 0x78);
            name = (char *)inner + 48;
            if (name != 0 && *name != 0) {
                *(void **)((char *)self + 0x414) = Plant__AcquireReference(self, name, 0);
            }
        } else {
            inner = *(void **)((char *)node + 0x78);
            name = (char *)inner + 48;
            if (name != 0 && *name != 0) {
                *(void **)((char *)self + 0x414) = Plant__AcquireReference(self, name, 0);
            }
        }
        if (*(int *)((char *)self + 0x414) == 0) {
            return;
        }
    }
    Plant__UpdateSimulation(self);
}
