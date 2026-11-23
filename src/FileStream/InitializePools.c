/* FileStream__InitializePools @ 0x8017ECAC (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *MemHeap__Alloc(unsigned int size, unsigned int align);
extern void *memset(void *dst, int value, unsigned int size);
extern void FileIO__SetDefaultSourceMode(int mode);

extern void *lbl_803DCB4C;
extern int lbl_803DCB50;
extern void *lbl_803DCB54;
extern int lbl_803DCB58;

int FileIO__InitializePools(int archiveCount, int streamCount, int sourceMode) {
    unsigned int archiveBytes;
    unsigned int streamBytes;
    void *archives;
    void *streams;
    int ok;

    archiveBytes = (unsigned int)archiveCount * 40;
    lbl_803DCB50 = archiveCount;
    if (archiveBytes != 0) {
        archives = MemHeap__Alloc(archiveBytes, 8);
        lbl_803DCB4C = archives;
        if (archives == 0) {
            return 0;
        }
        memset(archives, 0, archiveBytes);
    }
    streamBytes = (unsigned int)streamCount * 24;
    lbl_803DCB58 = streamCount;
    streams = MemHeap__Alloc(streamBytes, 8);
    lbl_803DCB54 = streams;
    if (streams != 0) {
        memset(streams, 0, streamBytes);
        FileIO__SetDefaultSourceMode(sourceMode);
        ok = 1;
    } else {
        ok = 0;
    }
    return ok;
}
