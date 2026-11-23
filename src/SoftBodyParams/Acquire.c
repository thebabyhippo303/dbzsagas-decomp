/* SoftBodyParams__Acquire @ 0x80211664 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct SBPEntry {
    s32 f0;
    struct SBPEntry *next;
    char pad[4];
    char name[16];
} SBPEntry;

extern SBPEntry *lbl_803DCD20 __attribute__((section(".sdata")));
extern int SoftBodyParams__HasUser(void *entry, void *ref);
extern int strncmp(const char *left, const char *right, u32 n);
extern void *Mem__New(u32 size);
extern void *SoftBodyParams__Construct(void *mem);
extern void SoftBodyParams__Load(void *entry, char *name, s32 extra);
extern void SoftBodyParams__AddUser(void *entry, void *ref);

SBPEntry *SoftBodyParams__Acquire(void *ref, char *name, s32 extra) {
    SBPEntry *entry;

    for (entry = lbl_803DCD20; entry != NULL; entry = entry->next) {
        if (SoftBodyParams__HasUser(entry, ref) != 0) {
            return entry;
        }
    }
    for (entry = lbl_803DCD20; entry != NULL; entry = entry->next) {
        if (strncmp(entry->name, name, 9) == 0) {
            SoftBodyParams__AddUser(entry, ref);
            return entry;
        }
    }
    entry = SoftBodyParams__Construct(Mem__New(76));
    entry->f0 = 0;
    entry->next = lbl_803DCD20;
    lbl_803DCD20 = entry;
    SoftBodyParams__Load(entry, name, extra);
    SoftBodyParams__AddUser(entry, ref);
    return entry;
}
