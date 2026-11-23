/* SwooshStreak__Destroy @ 0x80233ADC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;

extern void *lbl_803ADE94 __attribute__((section(".data")));
extern void SwooshStreak__FreeEntry(void *entry);

void SwooshStreak__Destroy(u32 handle) {
    char *entry = (char *)lbl_803ADE94 + (handle >> 16) * 152;
    if (*(u32 *)entry == handle) {
        SwooshStreak__FreeEntry(entry);
    }
}
