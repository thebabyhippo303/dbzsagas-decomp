/* Distort__SetEffectTransform @ 0x802A1228 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

extern s32 lbl_803DD690;

void Distort__SetEffectTransform(void *arg0, s32 *arg1, s32 *arg2) {
    volatile s32 *s1;
    volatile s32 *d1;
    volatile s32 *s2;
    volatile s32 *d2;
    s32 a0;
    s32 a2;
    s32 a1;
    s32 b0;
    s32 b2;
    s32 b1;

    if (lbl_803DD690 == 0) {
        return;
    }
    s1 = (volatile s32 *)arg1;
    d1 = (volatile s32 *)((char *)arg0 + 0x48);
    a0 = s1[0];
    d2 = (volatile s32 *)((char *)arg0 + 0x54);
    a2 = s1[2];
    s2 = (volatile s32 *)arg2;
    a1 = s1[1];
    d1[0] = a0;
    d1[2] = a2;
    d1[1] = a1;
    b0 = s2[0];
    b2 = s2[2];
    b1 = s2[1];
    d2[0] = b0;
    d2[2] = b2;
    d2[1] = b1;
}
