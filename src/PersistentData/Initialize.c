/* PersistentData__Initialize @ 0x80126AD0 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void PersistentData__InitializeRecordTables(void);
void PersistentData__InitializeCoinCounters(void *data);
void PersistentData__InitializeCapsuleCounters(void *data);
void PersistentData__InitializeCurrentLevel(void *data);
void PersistentData__InitializePendulumFlags(void *data);
void PersistentData__ResetPlayerVitals(void *data);
s32 PersistentData__GetGlobalImpl(void *data, const char *name);
s32 PersistentData__SetGlobalImpl(void *data, const char *name, s32 value);
extern char lbl_803276D8[] __attribute__((section(".data")));
extern void *lbl_803DC368 __attribute__((section(".sdata")));

void PersistentData__Initialize(void *arg0) {
    PersistentData__InitializeRecordTables();
    PersistentData__InitializeCoinCounters((char *)arg0 + 0x30);
    PersistentData__InitializeCapsuleCounters((char *)arg0 + 0x3C);
    PersistentData__InitializeCurrentLevel((char *)arg0 + 0x45);
    PersistentData__InitializePendulumFlags((char *)arg0 + 0x44);
    M2C_FIELD(arg0, s32 *, 0x48) = -1;
    PersistentData__ResetPlayerVitals((char *)arg0 + 0x50);
    if ((u32)(PersistentData__GetGlobalImpl((char *)lbl_803DC368 + 0x12C, lbl_803276D8) - 1) > 1U) {
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 0x12C, lbl_803276D8, 1);
    }
}
