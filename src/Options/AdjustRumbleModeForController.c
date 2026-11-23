/* Options__AdjustRumbleModeForController @ 0x8012878C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__AdjustRumbleModeForController @ 0x8012878C (0xA4). ProDG -O2. */
typedef int (*RumbleFn)(void *self);

extern void *lbl_803DCC74;

int Options__AdjustRumbleModeForController(void *self, int mode) {
    char *obj;
    char *vt;
    short adjust;
    RumbleFn fn;

    switch (mode) {
    case 0:
        obj = (char *)lbl_803DCC74;
        vt = *(char **)(obj + 16);
        adjust = *(short *)(vt + 32);
        fn = *(RumbleFn *)(vt + 36);
        if (fn(obj + adjust) == 1)
            mode = 1;
        break;
    case 1:
        break;
    case 2:
        obj = (char *)lbl_803DCC74;
        vt = *(char **)(obj + 16);
        adjust = *(short *)(vt + 32);
        fn = *(RumbleFn *)(vt + 36);
        if (fn(obj + adjust) == 1)
            mode = 3;
        break;
    }
    return mode;
}
