/* File__Write @ 0x80187B28 (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct File {
    int field0;
    int field4;
    int field8;
    int size;
    int pos;
    int descriptor;
    void *buffer;
    int pending;
} File;

extern int fn_801806E4(int descriptor, void *buffer, int size, int mode);
extern void memcpy();

int File__Write(File *file, void *src, int n) {
    int newpos;
    int chunk;
    int pending;
    int space;
    char *p;
    int cap;

    if (file->field0 != 0) {
        return 0;
    }
    newpos = file->pos + n;
    file->pos = newpos;
    if (newpos > file->size) {
        file->size = newpos;
    }
    p = src;
    if (n == 0) {
        return 1;
    }
    cap = 0x10000;
    while (n != 0) {
        if (file->pending == cap) {
            if (fn_801806E4(file->descriptor, file->buffer, cap, 0) == 0) {
                return 0;
            }
            file->pending = 0;
        }
        pending = file->pending;
        chunk = n;
        space = cap - pending;
        if (space < n) {
            chunk = space;
        }
        if (chunk > 0) {
            n -= chunk;
            memcpy((char *)file->buffer + pending, p, chunk);
            p += chunk;
            file->pending = file->pending + chunk;
        }
    }
    return 1;
}
