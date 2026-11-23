/* MissionProgress__NotifyListeners @ 0x80119DE0 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;

int MissionProgress__GetListenerCount(void);
extern void *lbl_80394194 __attribute__((section(".data")));

typedef void (*NotifyFn)(void *self, s32 arg0, s32 arg1);

void MissionProgress__NotifyListeners(s32 arg0, s32 arg1) {
    s32 i;
    s32 offset;
    void *obj;
    char *vt;

    for (i = 0; i < MissionProgress__GetListenerCount(); i++) {
        offset = i * 4;
        obj = *(void **)((char *)lbl_80394194 + offset);
        vt = *(char **)((char *)obj + 100);
        ((NotifyFn)(*(void **)(vt + 28)))((char *)obj + *(s16 *)(vt + 24), arg0, arg1);
    }
}
