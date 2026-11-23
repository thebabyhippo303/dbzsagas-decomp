/* TriggerBox__GetEventDispatchData @ 0x800FCC4C (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: TriggerBox__GetEventDispatchData @ 0x800FCC4C (0x30). ProDG -O2.
   lbl_8036B5BC + 0x10 is a table of 0x20-byte entries; first word -1 means empty. */
extern char lbl_8036B5BC[];

void *TriggerBox__GetEventDispatchData(char *self) {
    int index = *(int *)(self + 0x508);
    char *base = lbl_8036B5BC;
    char *table = base + 0x10;
    int offset = index * 32;
    if (*(int *)(table + offset) == -1) {
        return 0;
    }
    return table + offset;
}
