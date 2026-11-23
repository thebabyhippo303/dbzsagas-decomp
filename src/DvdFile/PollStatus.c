/* DvdFile__PollStatus @ 0x80180E70 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;

s32 DVD__MapStatusToFileError(s32, s32);
s32 DVDGetDriveStatus(void);
s32 DVDGetTransferredSize(void *);
extern s32 lbl_803DCB90;

typedef struct DvdFile {
    char pad0[4];
    s32 pos;
    char pad8[8];
    s32 len;
    s32 pending;
    s32 kind;
    s32 pad1c_;
    char pad20[8];
    char cb[1];
} DvdFile;

s32 DvdFile__PollStatus(DvdFile *self, s32 *transferred) {
    s32 status;
    s32 drive;
    s32 err;

    switch (self->kind) {
    case 1:
        status = 2;
        break;
    case 3:
        status = 9;
        break;
    case 2:
        status = 3;
        break;
    }
    if (self->pending == 0) {
        self->pos = self->pos + self->len;
        return 1;
    }
    drive = DVDGetDriveStatus();
    if ((u32)(drive - 1) <= 1U && transferred != 0) {
        *transferred = DVDGetTransferredSize(self->cb);
    }
    err = DVD__MapStatusToFileError(drive, status);
    lbl_803DCB90 = err;
    self->pad1c_ = err;
    return 0;
}
