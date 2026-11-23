/* Game__PreloadTableResource @ 0x80007C58 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
void *File__Resolve(const char *path, void *options, int flags);
void *fn_80188064(void *self, int mode);

void *Game__PreloadTableResource(void *self, const char *path, void *options, int flags) {
    void *resource = File__Resolve(path, options, flags);
    if (resource != 0) {
        resource = fn_80188064(resource, 1);
    }
    return resource;
}
