/* CmdCon__ExecuteFile @ 0x8018A170 (size: 0x1A0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern int VariableContext__ExecuteFromBinaryData(char *data);
extern void CmdCon__BuildVarPath(void *self, const char *name, char *out);
extern void *File__Open(const char *path, int mode, int flags);
extern unsigned int File__GetSize(void *file);
extern void *Mem__NewArray(unsigned int size);
extern int File__Read(void *file, void *dst, int size);
extern void Mem__DeleteArray(void *ptr);
extern void File__Destroy(void *file, int how);
extern void CmdCon__PrintError(void *self, const char *fmt, ...);
extern void CmdCon__PrintNotify(void *self, const char *fmt, ...);
extern int CmdCon__ExecuteScriptText(void *self, char *text);
extern char lbl_8033E5D4[];
extern char lbl_8033E5F8[];
extern char lbl_8033E618[];
extern char lbl_8033E638[];
extern int lbl_803DCC14;
extern int lbl_803DCC18;
typedef struct {
    char pad0[4];
    int mode;
    char pad8[8];
    const char *fallback;
} CmdCon;
int CmdCon__ExecuteFile(CmdCon *self, char *name) {
    char path[512];
    void *file;
    unsigned int size;
    char *data;
    int saved;
    int result;
    int enabled;
    enabled = 1;
    if (lbl_803DCC18 == 0) {
        enabled = 0;
    }
    if (enabled != 0) {
        return VariableContext__ExecuteFromBinaryData(name);
    }
    if (*name != 0) {
        CmdCon__BuildVarPath(self, name, path);
    } else {
        CmdCon__BuildVarPath(self, self->fallback, path);
    }
    file = File__Open(path, 0, 0);
    if (file == 0) {
        CmdCon__PrintError(self, lbl_8033E5D4, path);
        return 0;
    }
    size = File__GetSize(file);
    data = Mem__NewArray(size + 1);
    if (data == 0) {
        CmdCon__PrintError(self, lbl_8033E5F8, name);
        File__Destroy(file, 3);
        return 0;
    }
    if ((unsigned int)File__Read(file, data, (int)size) == size) {
        data[size] = 0;
        File__Destroy(file, 3);
        CmdCon__PrintNotify(self, lbl_8033E638, path);
        lbl_803DCC14 = 0;
        saved = self->mode;
        self->mode = 1;
        result = CmdCon__ExecuteScriptText(self, data);
        self->mode = saved;
        Mem__DeleteArray(data);
        return result;
    } else {
        CmdCon__PrintError(self, lbl_8033E618, name);
        Mem__DeleteArray(data);
        File__Destroy(file, 3);
        return 0;
    }
}
