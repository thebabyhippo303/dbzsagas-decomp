/* VolumeTrigger__StartAction @ 0x800FE7B8 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VolumeTrigger__StartAction @ 0x800FE7B8 (0x5C). ProDG -O2. */
typedef int s32;

extern void VolumeTrigger__StartAABBAction(char *self, void *arg);
extern void VolumeTrigger__StartPathAction(char *self, void *arg);

void VolumeTrigger__StartAction(char *self, void *arg) {
    s32 type = *(s32 *)(self + 0x41C);

    switch (type) {
    case 8:
        VolumeTrigger__StartAABBAction(self, arg);
        break;
    case 9:
        VolumeTrigger__StartPathAction(self, arg);
        break;
    }
    *(s32 *)(self + 0x420) = 1;
}
