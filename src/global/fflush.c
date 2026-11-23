/* fflush @ 0x801678E0 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int Stdio__FlushFile(void *file);

int fflush(void *file) {
    return Stdio__FlushFile(file);
}
