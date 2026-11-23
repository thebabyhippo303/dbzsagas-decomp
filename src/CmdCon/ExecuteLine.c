/* CmdCon__ExecuteLine @ 0x8018B4D4 (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 String__ReadToken(char *, char *, char *, s32, void *);
int String__CompareIgnoreCase(const char *, const char *);
void CmdCon__SetVariable(void *, char *, char *, s32);
extern s8 lbl_8033E708 __attribute__((section(".data")));
extern s8 lbl_8033E70C __attribute__((section(".data")));

typedef struct CmdEntry { s16 adj; s16 pad; s32 (*fn)(void *, char *, s32); char *name; s32 pad2; } CmdEntry;
typedef struct CmdCon { char pad[0x1C]; CmdEntry *table; s32 count; } CmdCon;

s32 CmdCon__ExecuteLine(CmdCon *arg0, s32 arg1) {
    char buf[256];
    char buf2[256];
    s32 flag;
    s32 tok;
    s32 i;
    char *res;

    if (*(char *) arg1 == '#') {
        return 1;
    }
    arg1 = String__ReadToken((char *) arg1, (char *) &lbl_8033E708, buf, 255, NULL);
    for (i = 0; i < arg0->count; i++) {
        if (String__CompareIgnoreCase(buf, arg0->table[i].name) == 0) {
            return arg0->table[i].fn((char *) arg0 + arg0->table[i].adj, buf, arg1);
        }
    }
    res = (char *) String__ReadToken(buf, (char *) &lbl_8033E70C, buf2, 255, &flag);
    if (flag != 0) {
        CmdCon__SetVariable(arg0, buf2, res, arg1);
    } else {
        CmdCon__SetVariable(arg0, NULL, buf, arg1);
    }
    return 1;
}
