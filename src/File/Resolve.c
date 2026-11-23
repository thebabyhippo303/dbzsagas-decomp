/* File__Resolve @ 0x80187F48 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;

void *File__FindResolved(char *);
void *Mem__New(u32);
void *File__Init(void *);
void *File__Open(char *, s32, s32);
s32 File__RegisterResolved(void *, char *);

typedef struct {
    s32 f0;
    s32 f4;
    char pad[4];
    s32 fC;
    s32 f10;
} FileObj;

void *File__Resolve(char *path, s32 arg1, s32 arg2) {
    void *found;
    FileObj *file;

    found = File__FindResolved(path);
    if (found != 0) {
        return found;
    }
    if (arg1 != 0) {
        file = File__Init(Mem__New(0x24));
        file->f0 = arg1;
        file->fC = arg2;
        file->f4 = (s32)found;
        file->f10 = (s32)found;
    } else {
        file = File__Open(path, 0, 0);
    }
    if (file == 0) {
        return 0;
    }
    File__RegisterResolved(file, path);
    return file;
}
