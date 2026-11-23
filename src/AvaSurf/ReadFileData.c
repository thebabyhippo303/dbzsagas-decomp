/* AvaSurf__ReadFileData @ 0x801520C4 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int File__Read(void *file, void *buffer, int size);

int AvaSurf__ReadFileData(void *self, void *file, void *buffer, int size) {
    return File__Read(file, buffer, size);
}
