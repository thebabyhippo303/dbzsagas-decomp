/* VolumeTrigger__InitializePathAction @ 0x800FE85C (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VolumeTrigger__InitializePathAction @ 0x800FE85C (0x2C). ProDG -O2. */
typedef struct {
    char pad_000[0x41C];
    int action_type;
} VolumeTrigger;

extern void VolumeTrigger__LoadPathActionId(VolumeTrigger *self);

void VolumeTrigger__InitializePathAction(VolumeTrigger *self) {
    if (self->action_type == 9)
        VolumeTrigger__LoadPathActionId(self);
}
