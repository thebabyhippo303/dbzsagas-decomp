/* Fade__KillAll @ 0x80228E78 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Fade__Kill(void *fade);
typedef struct { char d[40]; } FadeEntry;
extern struct {
    char pad[112];
    int count;
    FadeEntry items[1];
} lbl_803AD9E4 __attribute__((section(".data")));

void Fade__KillAll(void) {
    int i;
    for (i = 0; i < lbl_803AD9E4.count; i++) {
        Fade__Kill(&lbl_803AD9E4.items[i]);
    }
}
