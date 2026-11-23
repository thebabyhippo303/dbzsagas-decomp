/* inflateInit_ @ 0x802591AC (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: inflateInit_ @ 0x802591AC (0x2C). ProDG -O2. */
extern int inflateInit2_(void *stream, int window_bits, const char *version, int stream_size);

int inflateInit_(void *stream, const char *version, int stream_size) {
    return inflateInit2_(stream, 15, version, stream_size);
}
