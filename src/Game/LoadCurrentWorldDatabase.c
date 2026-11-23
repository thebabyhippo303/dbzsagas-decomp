/* Game__LoadCurrentWorldDatabase @ 0x8001E35C (size: 0x2D0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Game__GetCurrentLevelDescriptor(void *);
char * strcat(char *, char *);
void * Database__GetTypedObject(void *, void *, void *, void *);
void * Curve__Construct(void *, void *);
void * fn_801842C4(unsigned int);
void * fn_80184348(int);
void fn_80184430(char *);
void * fn_801FCDB8(void);
void * memcpy(void *, const void *, unsigned int);
char * strcpy(char *, const char *);
int strlen(const char *);
M2C_UNK Game__BuildCurrentWorldDirectory(s32, s32);
M2C_UNK fn_8025216C(s32, s32, s32);
M2C_UNK fn_801B1214(s32, s32);
M2C_UNK SurfaceType__LoadTable(s32, s32, s32);
M2C_UNK fn_801F8664(s32, s32);
M2C_UNK fn_801EAA1C(s32, s32);
M2C_UNK fn_801FCD8C(void);
M2C_UNK fn_801FCE0C(s32, s32, s32, s32);
M2C_UNK fn_801FCF74(s32, s32);
M2C_UNK fn_80208E04(s32);
typedef struct { s32 v[5]; } Def5;
typedef struct { Def5 d; char rest[232]; } Def5Buf;
typedef struct { void *curve; char *name; } Entry;
typedef struct { char pad[0x10]; s32 db; char pad2[0x24]; s32 f38; } WorldDb;
extern Def5 lbl_8030FD74 __attribute__((section(".data")));
extern M2C_UNK lbl_8030FD88 __attribute__((section(".data")));
extern M2C_UNK lbl_8030FD90 __attribute__((section(".data")));
extern M2C_UNK lbl_8030FD98 __attribute__((section(".data")));
extern M2C_UNK lbl_8030FDA0 __attribute__((section(".data")));
extern M2C_UNK lbl_8030FDA4 __attribute__((section(".data")));
extern M2C_UNK lbl_8030FDA8 __attribute__((section(".data")));
extern M2C_UNK lbl_8030FDAC __attribute__((section(".data")));
extern M2C_UNK lbl_8030FDB0 __attribute__((section(".data")));
extern WorldDb lbl_803ACF24 __attribute__((section(".data")));
extern WorldDb lbl_803B1E84 __attribute__((section(".data")));
extern s32 lbl_803DCC50;
extern s32 lbl_803DCCB4;
extern s32 lbl_803DCCBC;
extern s32 lbl_803DCCC0;
extern void *lbl_803DCCCC;
extern s32 lbl_803DD140;
extern s8 *lbl_803DD144;

s32 Game__LoadCurrentWorldDatabase(s32 arg0) {
    char sp8[256];
    Def5Buf sp108;
    s32 temp_r11;
    s32 var_r26;
    s32 off;
    Entry *e;
    s8 *temp_r29;
    s8 *temp_r3_2;
    u16 *temp_r3;
    void **var_r27;
    void *temp_r28;
    void *temp_r30;

    Game__BuildCurrentWorldDirectory(arg0, (s32) sp8);
    strcat(sp8, Game__GetCurrentLevelDescriptor((void *) arg0));
    if ((fn_8025216C((s32) &lbl_803B1E84, (s32) sp8, 0) == 0) || (fn_801B1214(lbl_803DCC50, lbl_803B1E84.db) == 0)) {
        return 0;
    }
    sp108.d = lbl_8030FD74;
    SurfaceType__LoadTable(lbl_803DCCC0, lbl_803B1E84.db, (s32) &sp108);
    fn_801F8664(lbl_803DCCBC, lbl_803DCCC0);
    fn_801EAA1C(lbl_803DCCB4, (s32) &lbl_8030FD88);
    lbl_803DCCCC = Database__GetTypedObject((void *)0x203, &lbl_8030FD90, (void *) lbl_803B1E84.db, NULL);
    fn_801FCD8C();
    fn_801FCE0C(fn_801FCDB8(), (s32) &lbl_8030FD98, 1, 1);
    fn_801FCE0C(fn_801FCDB8(), (s32) &lbl_8030FDA0, 2, 1);
    fn_801FCE0C(fn_801FCDB8(), (s32) &lbl_8030FDA4, 4, 1);
    fn_801FCE0C(fn_801FCDB8(), (s32) &lbl_8030FDA8, 8, 1);
    fn_801FCE0C(fn_801FCDB8(), (s32) &lbl_8030FDAC, 0x10, 1);
    fn_801FCE0C(fn_801FCDB8(), (s32) &lbl_8030FDB0, 0x20, 1);
    fn_801FCF74(fn_801FCDB8(), (s32) lbl_803DCCCC);
    temp_r3 = Database__GetTypedObject((void *)0x210, &lbl_8030FD90, (void *) lbl_803B1E84.db, NULL);
    if (temp_r3 != NULL) {
        var_r26 = 0;
        if (var_r26 < (s32) *temp_r3) {
            var_r27 = temp_r3 + 4;
            do {
                temp_r30 = *var_r27;
                var_r27 += 4;
                temp_r11 = M2C_FIELD(temp_r30, s32 *, 4) * 0xC;
                M2C_FIELD(temp_r30, void **, 0xC) = (void *) (temp_r30 + 0x20);
                M2C_FIELD(temp_r30, void **, 0x10) = (void *) (temp_r30 + (temp_r11 + 0x20));
                M2C_FIELD(temp_r30, s8 **, 0x14) = (s8 *) (temp_r30 + (temp_r11 + (M2C_FIELD(temp_r30, s32 *, 8) * 4) + 0x20));
                temp_r28 = Curve__Construct(fn_801842C4(0x14U), temp_r30);
                temp_r29 = M2C_FIELD(temp_r30, s8 **, 0x14);
                temp_r3_2 = fn_80184348((lbl_803DD140 + 1) * 8);
                memcpy(temp_r3_2, lbl_803DD144, lbl_803DD140 * 8);
                off = lbl_803DD140 << 3;
                *(void **)(off + (s32)temp_r3_2) = temp_r28;
                off += (s32)temp_r3_2;
                e = (Entry *)off;
                e->name = fn_80184348(strlen(temp_r29) + 1);
                strcpy(((Entry *)temp_r3_2)[lbl_803DD140].name, temp_r29);
                if ((s8 *) lbl_803DD144 != NULL) {
                    fn_80184430(lbl_803DD144);
                }
                var_r26 += 1;
                lbl_803DD144 = temp_r3_2;
                lbl_803DD140 += 1;
            } while (var_r26 < (s32) *temp_r3);
        }
    }
    fn_80208E04((s32) &lbl_803ACF24);
    lbl_803ACF24.f38 = 0;
    return 1;
}
