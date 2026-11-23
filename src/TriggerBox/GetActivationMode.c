/* TriggerBox__GetActivationMode @ 0x800FCBDC (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: TriggerBox__GetActivationMode @ 0x800FCBDC (0x1C). ProDG -O2. */
typedef struct {
    char pad_000[0x508];
    int index;
} TriggerBoxSelf;

typedef struct {
    int unused;
    int activation_mode;
    char rest[24];
} TriggerInfo;

extern TriggerInfo lbl_8036B5BC[];

int TriggerBox__GetActivationMode(TriggerBoxSelf *self) {
    return lbl_8036B5BC[self->index].activation_mode;
}
