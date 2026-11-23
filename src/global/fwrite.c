/* fwrite @ 0x80167800 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* fwrite @ 0x80167800 */

extern void Stdio__CopyBytes(void *src, void *dst, unsigned n);
extern int Stdio__FillFile(void *file);

typedef struct FWriteFile {
    unsigned char *ptr;
    int cnt;
} FWriteFile;

unsigned fwrite(void *data, unsigned size, unsigned count, FWriteFile *file) {
    unsigned remain;
    unsigned total;
    unsigned char *src;
    unsigned avail;

    remain = count * size;
    if (remain == 0) {
        return 0;
    }
    if (file->cnt < 0) {
        file->cnt = 0;
    }
    src = (unsigned char *)data;
    total = remain;
    avail = (unsigned)file->cnt;
    while (remain > avail) {
        remain -= avail;
        Stdio__CopyBytes(src, file->ptr, avail);
        src += avail;
        file->ptr += avail;
        if (Stdio__FillFile(file) != 0) {
            return (total - remain) / size;
        }
        avail = (unsigned)file->cnt;
    }
    Stdio__CopyBytes(src, file->ptr, remain);
    file->cnt -= (int)remain;
    file->ptr += remain;
    return count;
}
