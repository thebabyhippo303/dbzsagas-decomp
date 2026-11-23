/* File__Init @ 0x8018766C (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: File__Init @ 0x8018766C (0x30). ProDG -O2. */
typedef struct FileObj {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
} FileObj;

FileObj *File__Init(FileObj *file) {
    file->field0 = 0;
    file->field10 = 0;
    file->field14 = 0;
    file->field8 = 0;
    file->field18 = 0;
    file->field1C = 0;
    file->field4 = 1;
    file->field20 = 0;
    return file;
}
