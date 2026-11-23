/* Audio__SetMasterSfxVolume @ 0x801904E4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
void SoundDriver__SetSfxVolume(float);
extern float lbl_8033F2CC __attribute__((section(".data")));
extern float lbl_8033F2D0 __attribute__((section(".data")));

int Audio__SetMasterSfxVolume(float vol) {
    float lo = lbl_8033F2CC;
    float hi = lbl_8033F2D0;
    float v = lo;
    if (!(vol < lo)) {
        if (!(vol <= hi)) v = hi; else v = vol;
    }
    SoundDriver__SetSfxVolume(v);
    return 1;
}
