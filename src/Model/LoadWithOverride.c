/* Model__LoadWithOverride @ 0x80252768 (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
char *strcpy(char *, const char *);
char *strcat(char *, const char *);
int String__CompareIgnoreCase(const char *, const char *);
void *Model__FindLoaded(char *);
s32 DBFileMgr__TestFlags(s32);
void *Database__FindLoadedByPath(const char *);
void *LoadContext__LoadDbl(void *, char *, s32, void *);
void Model__RegisterLoaded(void *, s32);
void CmdCon__PrintNotify(void *, const char *, ...);
extern char *lbl_803B1E84 __attribute__((section(".data")));
extern void *lbl_803DCC10;
void *Model__LoadWithOverride(void *arg0, char *name, char *variant, void *loadArg) {
    char buf[256];
    char *p;
    void *model;
    if (String__CompareIgnoreCase(name, "none") == 0) { return NULL; }
    p = buf;
    strcpy(p, lbl_803B1E84);
    if (variant != NULL) { strcat(p, variant); } else { strcat(p, "Replace\\"); }
    strcat(buf, name);
    strcat(buf, ".dbl");
    model = Model__FindLoaded(buf);
    if (model == NULL) {
        if (DBFileMgr__TestFlags(32) != 0) {
            if (Database__FindLoadedByPath(buf) == NULL) { return NULL; }
        }
        model = LoadContext__LoadDbl(&lbl_803B1E84, buf, 0, loadArg);
        if (model != NULL) {
            Model__RegisterLoaded(model, buf);
            CmdCon__PrintNotify(lbl_803DCC10, " >>>>>>>> Overriding %s with file: %s\n", name, buf);
        }
    }
    return model;
}
