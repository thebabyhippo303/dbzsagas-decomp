/* VolumeTrigger__StopAction @ 0x800FE814 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VolumeTrigger__StopAction @ 0x800FE814 (0x48). ProDG -O2. */
extern void VolumeTrigger__StopAABBAction(void *self, void *action);
extern void VolumeTrigger__StopPathAction(void *self, void *action);

void VolumeTrigger__StopAction(void *self, void *action) {
    int action_type = *(int *)((char *)self + 0x41C);
    *(int *)((char *)self + 0x420) = 0;
    switch (action_type) {
    case 8:
        VolumeTrigger__StopAABBAction(self, action);
        break;
    case 9:
        VolumeTrigger__StopPathAction(self, action);
        break;
    }
}
