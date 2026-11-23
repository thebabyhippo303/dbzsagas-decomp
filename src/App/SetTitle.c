/* App__SetTitle @ 0x80180F40 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: App__SetTitle @ 0x80180F40 (0x2C). ProDG -O2. */
extern char lbl_80372B30[];
extern char *strcpy(char *dst, const char *src);

void App__SetTitle(const char *title) {
    strcpy(lbl_80372B30, title);
}
