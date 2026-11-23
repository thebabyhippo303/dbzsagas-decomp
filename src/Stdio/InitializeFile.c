/* Stdio__InitializeFile @ 0x80167DAC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct StdioFile {
    volatile int field0;
    volatile int field4;
    volatile int field8;
    volatile short fieldC;
    volatile short fieldE;
    volatile int field10;
    int unused14;
    volatile int field18;
    volatile struct StdioFile *self;
    volatile void *readCb;
    volatile void *writeCb;
    volatile void *seekCb;
    volatile void *closeCb;
    char pad[0x5C - 0x30];
    volatile int field5C;
} StdioFile;

extern void Stdio__ReadCallback(void);
extern void Stdio__WriteCallback(void);
extern void Stdio__SeekCallback(void);
extern void Stdio__CloseCallback(void);

void Stdio__InitializeFile(StdioFile *file, short a, short b, int c) {
    void *read = Stdio__ReadCallback;
    void *write = Stdio__WriteCallback;
    void *seek = Stdio__SeekCallback;
    void *close = Stdio__CloseCallback;

    file->field5C = c;
    file->fieldC = a;
    file->fieldE = b;
    file->field18 = 0;
    file->readCb = read;
    file->writeCb = write;
    file->seekCb = seek;
    file->closeCb = close;
    file->field0 = 0;
    file->field4 = 0;
    file->field8 = 0;
    file->field10 = 0;
    file->self = file;
}
