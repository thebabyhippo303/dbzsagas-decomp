/* Attacher__Destroy @ 0x80216D18 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;

extern void *lbl_803ACFA8 __attribute__((section(".data")));
extern void Attacher__FreeEntry(void *entry);

void Attacher__Destroy(u32 handle) {
    char *entry = (char *)lbl_803ACFA8 + (handle >> 16) * 92;
    if (*(u32 *)entry == handle) {
        Attacher__FreeEntry(entry);
    }
}
