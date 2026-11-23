/* Sound__PlayVoiceOverImpl @ 0x800225B8 (size: 0x280, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * PersistentData__FindFirstRecord(void *, void *, void *, void *, void *, void *);
void PersistentData__SetValue(void *, void *, char *, s32, s32);
void Sound__SetVoiceOverPlaybackParameters(void *, s32, s32, f32, f32);
void fn_801945FC(void *, float);
M2C_UNK fn_801954F4(s32, s32, s32, f32, f32);
extern M2C_UNK lbl_803104F8 __attribute__((section(".data")));
extern f32 lbl_80310504 __attribute__((section(".data")));
extern f32 lbl_80310508 __attribute__((section(".data")));
extern f32 lbl_8031050C __attribute__((section(".data")));
extern f32 lbl_80310510;
extern s32 lbl_803DC368;
extern void *lbl_803DCC20;

s32 Sound__PlayVoiceOverImpl(void *arg0, s8 *arg1, s32 arg2) {
    u8 *rec;
    s32 allow;
    s32 force;
    s32 flags;
    s32 val;
    s32 grp;
    s32 cnt;
    s32 base;
    s32 n;
    f32 vol;
    char *p;

    flags = arg2;
    rec = PersistentData__FindFirstRecord(0x12C + lbl_803DC368, &lbl_803104F8, arg1, (void *)-1, NULL, (void *)3);
    allow = 1;
    force = 0;
    val = 0;
    if (rec != NULL) {
        val = M2C_FIELD(rec, s32 *, 0x3C);
    }
    base = 0;
    grp = val & 0xFF00;
    cnt = (u8) val;
    if (flags == 0) {
        flags = 1;
    }
    if ((M2C_FIELD(arg0, u32 *, 0x213C) != 0) && !(flags & 0x200)) {
        force = 1;
    } else if (flags & 8) {
        if (grp == 0x100 && cnt > 0) allow = 0;
        base = 0x100;
    } else if (flags & 0x10) {
        if (grp <= 0x200 && cnt > 0) allow = 0;
        base = 0x200;
    } else if (flags & 0x20) {
        if (grp == 0x300 && cnt > 0) allow = 0;
        base = 0x300;
    } else if (flags & 0x40) {
        if (grp == 0x100 && cnt > 2) allow = 0;
        base = 0x100;
    } else if (flags & 0x80) {
        if (grp <= 0x200 && cnt > 2) allow = 0;
        base = 0x200;
    } else if (flags & 0x100) {
        if (grp == 0x300 && cnt > 2) allow = 0;
        base = 0x300;
    }
    if (flags & 4) {
        p = (char *)lbl_803DCC20 + 0x14c;
        n = 1;
        if (M2C_FIELD(p, s32 *, 0) == 0) {
            n = 0;
        }
        if (n + M2C_FIELD(p, s32 *, 0x2c) != 0) {
            allow = 0;
        }
    } else if (flags & 1) {
        force = 1;
    }
    if (force != 0) {
        fn_801945FC((char *)lbl_803DCC20 + 0xCC, lbl_80310504);
    }
    if (allow != 0) {
        if (flags & 0x400) {
            vol = lbl_80310508;
        } else {
            vol = lbl_80310504;
        }
        fn_801954F4((s32) ((char *)lbl_803DCC20 + 0xCC), (s32) arg1, 0, lbl_80310504, vol);
        if (rec == NULL || (flags & 0x1F8)) {
            cnt++;
            if (cnt > 0xFF) {
                cnt = 0xFF;
            }
            val = base | cnt;
            if (rec != NULL) {
                M2C_FIELD(rec, s32 *, 0x3C) = val;
            } else {
                PersistentData__SetValue(0x12C + lbl_803DC368, &lbl_803104F8, arg1, -1, val);
            }
        }
        M2C_FIELD(arg0, u32 *, 0x213C) = (flags & 0x200) != 0;
        if (!(flags & 0x800)) {
            Sound__SetVoiceOverPlaybackParameters(arg0, 1, 0, lbl_8031050C, lbl_80310510);
        }
        return 1;
    }
    return 0;
}
