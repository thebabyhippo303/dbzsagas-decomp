/* Pickup__NotifyMissionProgress @ 0x800F20D0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__NotifyMissionProgress @ 0x800F20D0 (0x40). ProDG -O2. */
typedef struct PickupProgress {
    char pad[0x5EC];
    void *progress;
} PickupProgress;

extern void MissionProgress__DisplayAll(int eventId, void *progress);
extern void fn_80119DE0(void *progress, PickupProgress *self);

void Pickup__NotifyMissionProgress(PickupProgress *self) {
    MissionProgress__DisplayAll(201, self->progress);
    fn_80119DE0(self->progress, self);
}
