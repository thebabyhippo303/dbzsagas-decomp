/* File__Seek @ 0x80187A68 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct File {
    void *data;
    int ownsData;
    char pad0[4];
    int field_0c;
    int field_10;
    void *uberHandle;
} File;

void File__Flush(File *file);
void fn_80180618(void *handle, int position);

int File__Seek(File *file, int offset, int whence) {
    int size;
    int pos;

    File__Flush(file);
    if (whence == 1) {
        goto from_end;
    }
    if (whence > 1) {
        goto absolute;
    }
    if (whence != 0) {
        goto absolute;
    }
    pos = file->field_10 + offset;
    if (pos > file->field_0c) {
        return 0;
    }
    file->field_10 = pos;
    goto done;
from_end:
    size = file->field_0c;
    {
        register int neu;
        neu = size + offset;
        if (neu > size) {
            return 0;
        }
        if (neu < 0) {
            return 0;
        }
        file->field_10 = neu;
    }
    goto done;
absolute:
    if (offset < 0) {
        return 0;
    }
    if (offset > file->field_0c) {
        return 0;
    }
    file->field_10 = offset;
done:
    if (file->data == 0) {
        fn_80180618(file->uberHandle, file->field_10);
    }
    return 1;
}
