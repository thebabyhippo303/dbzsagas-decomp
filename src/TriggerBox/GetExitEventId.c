/* TriggerBox__GetExitEventId @ 0x800FCC14 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct {
    char pad[0x18];
    s32 exit_id;
    char rest[4];
} ExitEventRow;
extern ExitEventRow lbl_8036B5BC[];
typedef struct { char pad[0x508]; s32 index; } TriggerBox;
s32 TriggerBox__GetExitEventId(TriggerBox *self) {
    return lbl_8036B5BC[self->index].exit_id;
}
