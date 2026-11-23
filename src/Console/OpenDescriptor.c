/* Console__OpenDescriptor @ 0x802CDB20 (size: 0x10, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Console__OpenDescriptor @ 0x802CDB20 (0x10). ProDG -O2. */
typedef struct {
    int descriptor;
    int buffer_size;
} ConsoleDescriptor;

int Console__OpenDescriptor(const char *path, ConsoleDescriptor *descriptor) {
    descriptor->buffer_size = 8192;
    return 0;
}
