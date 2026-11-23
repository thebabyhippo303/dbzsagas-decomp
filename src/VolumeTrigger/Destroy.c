/* VolumeTrigger__Destroy @ 0x800FE170 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VolumeTrigger__Destroy @ 0x800FE170 (0x94). ProDG -O2. */
extern char lbl_80331DF0[];
extern char lbl_80331DD0[];
extern char lbl_80331E98[];
extern void fn_80188FB0(void *node);
extern void Emitter__Kill(void *emitter);
extern void fn_802304A8(int flag);
extern void fn_802C2624(void *self, int flags);

void VolumeTrigger__Destroy(char *self, int flags) {
    char *vt198 = lbl_80331DF0;
    char *vt1B4 = lbl_80331DD0;
    char *vt34 = lbl_80331E98;
    void *emitA;
    void *emitB;
    int flag;

    *(void **)(self + 0x198) = vt198;
    *(void **)(self + 0x1B4) = vt1B4;
    *(void **)(self + 0x34) = vt34;
    fn_80188FB0(self + 0x450);
    emitA = *(void **)(self + 0x42C);
    if (emitA != 0) {
        Emitter__Kill(emitA);
    }
    emitB = *(void **)(self + 0x428);
    if (emitB != 0) {
        Emitter__Kill(emitB);
    }
    flag = *(int *)(self + 0x430);
    if (flag != 0) {
        fn_802304A8(flag);
    }
    fn_802C2624(self, flags);
}
