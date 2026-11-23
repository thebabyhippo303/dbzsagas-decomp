/* MissionProgress__ConstructForEvent401_402 @ 0x8012A338 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissionProgress__ConstructForEvent401_402 @ 0x8012A338 (0x44). ProDG -O2. */
typedef struct {
    char pad[0x18];
    void *vtable;
    void *event;
} MissionProgress401;

extern char lbl_8032C840[];
extern void MissionProgress__Construct(MissionProgress401 *self, int a, int b, int c, int d, void *event);

MissionProgress401 *MissionProgress__ConstructForEvent401_402(
    MissionProgress401 *self, int a, int b, int c, int d, void *event) {
    MissionProgress__Construct(self, a, b, c, d, event);
    self->event = event;
    self->vtable = lbl_8032C840;
    return self;
}
