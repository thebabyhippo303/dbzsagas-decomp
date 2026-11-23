/* Fade__StartOut @ 0x80228C78 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Fade__StartTransition(void *fade, int *start, int *duration);

void Fade__StartOut(void *fade, const int *start, const int *duration) {
    int startValue;
    int durationValue;

    startValue = *(volatile const int *)start;
    durationValue = *(volatile const int *)duration;
    Fade__StartTransition(fade, &startValue, &durationValue);
}
