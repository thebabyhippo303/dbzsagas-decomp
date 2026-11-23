/* AvatarControls__ConstructBase @ 0x800B617C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarControls__ConstructBase @ 0x800B617C (0x4C). ProDG -O2. */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void *AvatarControls__ClearCallbackState(void *);
extern int lbl_80335428 __attribute__((section(".data")));

void *AvatarControls__ConstructBase(void *arg0, int arg1, int arg2) {
    M2C_FIELD(arg0, int *, 0) = arg1;
    M2C_FIELD(arg0, int **, 4) = &lbl_80335428;
    AvatarControls__ClearCallbackState((char *)arg0 + 8);
    M2C_FIELD(arg0, int *, 0x7C) = arg2;
    return arg0;
}
