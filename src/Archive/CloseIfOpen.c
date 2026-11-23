/* Archive__CloseIfOpen @ 0x8017F034 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
extern void Archive__Close(void *archive);

void Archive__CloseIfOpen(void *archive) {
    if (archive != 0)
        Archive__Close(archive);
}
