/* Animation__SetBlendRatio @ 0x8023EAB0 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_8034703C __attribute__((section(".data")));

void Animation__SetBlendRatio(void *anim, float ratio) {
    *(short *)((char *)anim + 4) = (short)(ratio * lbl_8034703C);
}
