/* ProtectMeter__LoadPortrait @ 0x8012019C (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ProtectMeter__LoadPortrait @ 0x8012019C (0xA8). ProDG -O2. */
#define NULL 0
typedef short s16;
typedef int s32;

typedef void (*PortraitSetupFn)(void *self, void *portrait, int a, int b, int c, int d);

extern char lbl_80326990[];
extern char lbl_8032735C[];

void *dblLoad(const char *path, void *arg, int flags);

void ProtectMeter__LoadPortrait(char *self) {
    char *obj;
    char *vt;
    PortraitSetupFn setup;

    switch (*(s32 *)(self + 0x14)) {
    case 1:
        *(void **)(self + 0x10) = dblLoad(lbl_80326990, NULL, 0);
        break;
    case 2:
    case 0:
        *(void **)(self + 0x10) = dblLoad(lbl_8032735C, NULL, 0);
        break;
    }
    obj = *(char **)(self + 0xC);
    vt = *(char **)(obj + 0x19C);
    setup = *(PortraitSetupFn *)(vt + 0x14);
    setup(obj + *(s16 *)(vt + 0x10), *(void **)(self + 0x10), 0, 0, 1, 1);
}
