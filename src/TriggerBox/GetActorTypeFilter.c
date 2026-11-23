/* TriggerBox__GetActorTypeFilter @ 0x800FCC30 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct TriggerBoxSelf {
    char pad[0x508];
    int index;
} TriggerBoxSelf;

typedef struct ActorTypeRow {
    char pad[12];
    int filter;
    char rest[16];
} ActorTypeRow;

extern ActorTypeRow lbl_8036B5BC[];

int TriggerBox__GetActorTypeFilter(TriggerBoxSelf *self) {
    return lbl_8036B5BC[self->index].filter;
}
