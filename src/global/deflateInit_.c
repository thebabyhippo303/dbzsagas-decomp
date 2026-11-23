/* deflateInit_ @ 0x80255C04 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: deflateInit_ @ 0x80255C04 (0x38). ProDG -O2. */
extern int deflateInit2_(
    void *stream, int level, int method, int window_bits, int memory_level,
    int strategy, const char *version, int stream_size);

int deflateInit_(void *stream, int level, const char *version, int stream_size) {
    return deflateInit2_(stream, level, 8, 15, 8, 0, version, stream_size);
}
