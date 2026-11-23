/* Camera__IsFollowCam @ 0x8003032C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Camera__IsFollowCam @ 0x8003032C (0x4C). ProDG -O2. */
extern void *lbl_803D8254;
extern char lbl_80311630[];
extern int CameraBag__IsCurrentNamed(void *bag, char *name);
extern void Script__PushInt(void *script, void *context, int value);

void Camera__IsFollowCam(void *script, void *context) {
    int active = CameraBag__IsCurrentNamed(lbl_803D8254, lbl_80311630);
    Script__PushInt(script, context, active);
}
