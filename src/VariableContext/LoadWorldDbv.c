/* VariableContext__LoadWorldDbv @ 0x8018E774 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int sprintf(char *destination, const char *format, ...);
void *Database__FindLoadedByPath(const char *path);
void *Database__GetTypedObject(int type, const char *name, void *object, int flags);
extern void *lbl_803DCC18 __attribute__((section(".sdata")));
extern char lbl_8033EBE4[] __attribute__((section(".data")));
void VariableContext__LoadWorldDbv(const char *world) {
    char path[200];
    void *database;
    sprintf(path, "Worlds\\%s\\%s.dbv", world, world);
    database = Database__FindLoadedByPath(path);
    if (database == 0) goto save;
    lbl_803DCC18 = Database__GetTypedObject(0x404, lbl_8033EBE4, database, 0);
    return;
save:
    lbl_803DCC18 = database;
}
