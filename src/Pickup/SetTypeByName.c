/* Pickup__SetTypeByName @ 0x800F165C (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__SetTypeByName @ 0x800F165C (0x64). ProDG -O2. */
typedef struct {
    char pad[0x5EC];
    int type_id;
    int type_index;
} Pickup;

extern int Pickup__FindTypeIndexByName(const char *name);
extern int lbl_80323D0C[];

void Pickup__SetTypeByName(Pickup *self, const char *name) {
    int index;
    int *entry;

    if (self->type_index == -1)
        self->type_index = Pickup__FindTypeIndexByName(name);
    index = self->type_index;
    if (index >= 0) {
        entry = lbl_80323D0C;
        ++entry;
        self->type_id = *(int *)((char *)entry + index * 76);
    }
}
