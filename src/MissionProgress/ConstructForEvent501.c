/* MissionProgress__ConstructForEvent501 @ 0x8012A414 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissionProgress__ConstructForEvent501 @ 0x8012A414 (0x44). ProDG -O2. */
typedef struct {
    char pad[0x18];
    void *vtable;
    void *event;
} MissionProgress501;

extern char lbl_8032C820[];
extern void MissionProgress__Construct(
    MissionProgress501 *self, int a, int b, int c, int d, void *event);

MissionProgress501 *MissionProgress__ConstructForEvent501(
    MissionProgress501 *self, int a, int b, int c, int d, void *event) {
    MissionProgress__Construct(self, a, b, c, d, event);
    self->event = event;
    self->vtable = lbl_8032C820;
    return self;
}
