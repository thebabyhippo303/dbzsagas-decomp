/* MissionProgress__Event501 @ 0x8012A458 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissionProgress__Event501 @ 0x8012A458 (0x50). ProDG -O2. */
typedef struct {
	char pad[0x1C];
	int event;
} MissionProgress;

extern void MissionCollect__Event(MissionProgress *self, int event, int id);
extern void MissionProgress__Complete(MissionProgress *self);

void MissionProgress__Event501(MissionProgress *self, int event, int id) {
	MissionCollect__Event(self, event, id);
	if (id == self->event && event == 501)
		MissionProgress__Complete(self);
}
