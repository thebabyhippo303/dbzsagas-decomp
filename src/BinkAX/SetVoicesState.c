/* BinkAX__SetVoicesState @ 0x802EB23C (size: 0x50, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
typedef signed int s32;
#define NULL 0
void AXSetVoiceState(void *voice, s32 state);
void BinkAX__SetVoicesState(void *self, s32 state) {
    void *v0 = *(void **)((char *)self + 80);
    void *v1;
    if (v0 != NULL)
        AXSetVoiceState(v0, state);
    v1 = *(void **)((char *)self + 84);
    if (v1 != NULL)
        AXSetVoiceState(v1, state);
}
