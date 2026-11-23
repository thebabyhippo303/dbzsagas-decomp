/* FileStream__Seek @ 0x8017F294 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct {
    char pad0[4];
    s32 size;
    char pad1[12];
    s32 pos;
} FileStream;

s32 FileStream__Seek(FileStream *self, s32 offset, s32 whence) {
    s32 temp;
    if (self == 0) {
        return 0;
    }
    switch (whence) {
    case 0:
        temp = self->pos + offset;
        if (temp > self->size) {
            return 0;
        }
        self->pos = temp;
        break;
    case 1:
        temp = self->size;
        {
            s32 moved = temp + offset;
            if (moved > temp) {
                return 0;
            }
            if (moved < 0) {
                return 0;
            }
            self->pos = moved;
        }
        break;
    case 2:
        if (offset < 0) {
            return 0;
        }
        if (offset > self->size) {
            return 0;
        }
        self->pos = offset;
        break;
    }
    return 1;
}
