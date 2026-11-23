/* TriggerBox__SetEnabled @ 0x8002D91C (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

s32 Script__PopInt(void *, void *);
void fn_802CB514(void *);

void TriggerBox__SetEnabled(void *arg0, void *arg1) {
    char *box;
    s32 v;

    box = (char *)Script__PopInt(arg0, arg1);
    v = Script__PopInt(arg0, arg1) ^ 1;
    *(s32 *)(box + 0x53C) = (v == 0);
    fn_802CB514(box);
}
