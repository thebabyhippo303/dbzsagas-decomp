/* File__Open @ 0x801876DC (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: File__Open @ 0x801876DC (0x78). ProDG -O2. */
extern void *fn_801842C4(unsigned int size);
extern void *File__Init(void *file);
extern int File__OpenPath(void *file, const char *path, int mode, int flags);
extern void File__Destroy(void *file, int mode);

void *File__Open(const char *path, int mode, int flags) {
    void *file = File__Init(fn_801842C4(36));
    if (file != 0) {
        if (File__OpenPath(file, path, mode, flags) == 0) {
            File__Destroy(file, 3);
            return 0;
        }
    }
    return file;
}
