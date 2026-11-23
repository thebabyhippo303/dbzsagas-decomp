/* CameraCurve__AtEnd @ 0x8002CF50 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CameraCurve__AtEnd @ 0x8002CF50 (0x74). ProDG -O2. */
extern void *lbl_803DC5B4;
extern char lbl_80311648[];
extern int CameraBag__IsCurrentNamed(void *bag, char *name);
extern void *CameraBag__GetCurrent(void *bag);
extern int CameraCurve__AtEndImpl(void *camera);
extern void Script__PushInt(void *script, void *context, int value);

void CameraCurve__AtEnd(void *script, void *context) {
    if (CameraBag__IsCurrentNamed(lbl_803DC5B4, lbl_80311648) != 0) {
        void *camera = CameraBag__GetCurrent(lbl_803DC5B4);
        int at_end = CameraCurve__AtEndImpl(camera);
        Script__PushInt(script, context, at_end);
    } else {
        Script__PushInt(script, context, 1);
    }
}
