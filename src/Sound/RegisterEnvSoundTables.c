/* Sound__RegisterEnvSoundTables @ 0x80188A38 (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define NULL 0
extern void *lbl_803DCC08;
extern char lbl_8033DFB4[];
void *Database__GetTypedObject(int, char *, void *, int);
void *Database__GetArrayElement(void *, unsigned);
void SfxEnvPlayer__AddEmitter(void *, void *);
void SfxEnvPlayer__AddTrigger(void *, void *);

typedef struct { u16 count; } Tbl;

s32 Sound__RegisterEnvSoundTables(void *arg0) {
    Tbl *t;
    void *e;
    if (lbl_803DCC08 == 0)
        return 0;
    t = (Tbl *)Database__GetTypedObject(1536, lbl_8033DFB4, arg0, 0);
    if (t != NULL) {
        u32 i = 0;
        if (i < t->count) {
            do {
                e = Database__GetArrayElement(t, i);
                if (e != NULL)
                    SfxEnvPlayer__AddEmitter(lbl_803DCC08, e);
                i++;
            } while (i < t->count);
        }
    }
    t = (Tbl *)Database__GetTypedObject(1537, lbl_8033DFB4, arg0, 0);
    if (t != NULL) {
        u32 i = 0;
        if (i < t->count) {
            do {
                e = Database__GetArrayElement(t, i);
                if (e != NULL)
                    SfxEnvPlayer__AddTrigger(lbl_803DCC08, e);
                i++;
            } while (i < t->count);
        }
    }
    return 1;
}
