/* PathCam__AtEnd @ 0x8002CE24 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PathCam__AtEnd @ 0x8002CE24 (0x74). ProDG -O2. */
typedef signed char s8;

void *CameraBag__GetCurrent(void *);
int CameraBag__IsCurrentNamed(void *, char *);
int PathCam__AtEndImpl(void *);
void Script__PushInt(void *, void *, int);
extern s8 lbl_80311640 __attribute__((section(".data")));
extern void *lbl_803DC5B4;

void PathCam__AtEnd(void *arg0, void *arg1) {
    if (CameraBag__IsCurrentNamed(lbl_803DC5B4, &lbl_80311640) != 0) {
        Script__PushInt(arg0, arg1, PathCam__AtEndImpl(CameraBag__GetCurrent(lbl_803DC5B4)));
        return;
    }
    Script__PushInt(arg0, arg1, 1);
}
