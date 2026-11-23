/* DvdStream__Construct @ 0x80197768 (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef struct Stream {
    char name[31];
    char z;
    int result;
    int entry;
    void *vt;
    int busy;
    int arg;
    int f34, f38, f3C, f40, f44, f48, f4C, f50;
    u8 f54;
} Stream;
typedef struct Info { char pad[44]; Stream *owner; } Info;
char *strncpy(char *, char *, int);
void DvdStream__ConvertPathSlashes(char *, char *);
int DVDConvertPathToEntrynum(char *);
int DVDFastOpen(int, Info *);
int DVDPrepareStreamAsync(Info *, int, int, void *);
extern char DvdStream__PrepareCallback[] __attribute__((section(".data")));
extern char lbl_8033FDB0[] __attribute__((section(".data")));
extern char lbl_803403F8[] __attribute__((section(".data")));
extern Info lbl_803DC2D8 __attribute__((section(".data")));
extern Stream *lbl_803DC340 __attribute__((section(".data")));

Stream *DvdStream__Construct(Stream *s, char *path, int arg) {
    char buf[256];
    int zero = 0;
    int r;
    s->vt = lbl_803403F8;
    strncpy(s->name, path, 31);
    s->z = 0;
    s->vt = lbl_8033FDB0;
    DvdStream__ConvertPathSlashes(path, buf);
    s->f40 = zero;
    s->arg = arg;
    s->f3C = zero;
    s->f38 = zero;
    s->busy = zero;
    s->f50 = zero;
    s->f44 = zero;
    s->f48 = zero;
    s->f4C = zero;
    s->f54 = 128;
    s->entry = DVDConvertPathToEntrynum(buf);
    if (s->entry == -1) {
        s->result = zero;
    } else if ((r = DVDFastOpen(s->entry, &lbl_803DC2D8)) != 0) {
        int one = 1;
        s->busy = one;
        lbl_803DC340 = s;
        lbl_803DC2D8.owner = s;
        s->f34 = one;
        if ((r = DVDPrepareStreamAsync(&lbl_803DC2D8, 0, 0, DvdStream__PrepareCallback)) == 0) {
            s->result = r;
        } else {
            s->result = one;
        }
    }
    return s;
}
