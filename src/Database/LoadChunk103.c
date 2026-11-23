/* Database__LoadChunk103 @ 0x802478C0 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Database__FixupPointerArray(char *);
void *Database__GetArrayElement(void *, s32);
void fn_802479A4(void *, int);
void *TextureMgr__GetActiveDatabase(void);
extern s8 *lbl_803B1CAC __attribute__((section(".data")));

s32 Database__LoadChunk103(s8 *arg0, void *arg1, s8 **arg2, s32 *arg3) {
    u16 i = 0;
    void *db;

    Database__FixupPointerArray((char *)arg0);
    if (i < *(u16 *)arg0) {
        do {
            fn_802479A4(Database__GetArrayElement(arg0, i), 1);
            i++;
        } while (i < *(u16 *)arg0);
    }
    lbl_803B1CAC = arg0;
    db = TextureMgr__GetActiveDatabase();
    if (db != 0) {
        M2C_FIELD(db, s8 **, 0x48) = arg0;
    }
    M2C_FIELD(arg1, u16 *, 2) &= (u16)~1;
    *arg2 = arg0;
    *arg3 = M2C_FIELD(arg1, s32 *, 4);
    return 1;
}
