/* AI__InitializeControllerForActorType @ 0x80086AD0 (size: 0x440, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * AI__ConstructEnemyDismembermentVariant(void *, s32);
void * AI__ConstructFireShieldEnemy(void *, s32);
void * AI__ConstructEnemyAndGrantInventoryItem(void *, s32);
void * AI__ConstructDefaultEnemy(void *, void *);
void * AI__ConstructDefaultPlayer(void *, s32);
s32 Mem__New(s32);
M2C_UNK fn_80085F48(s32, s32);
M2C_UNK fn_80082B5C(s32, s32);
M2C_UNK fn_800782C8(s32, s32);
M2C_UNK fn_80078B40(s32, s32);
M2C_UNK fn_80079340(s32, s32);
M2C_UNK fn_8007EC20(s32, s32);
M2C_UNK fn_80085408(s32, s32);
M2C_UNK fn_8008681C(s32, s32);
M2C_UNK fn_8007B10C(s32, s32);
M2C_UNK AI__ConstructDismembermentVariant(s32, s32);
M2C_UNK fn_80083310(s32, s32);
M2C_UNK fn_800759B0(s32, s32);
M2C_UNK fn_8008044C(s32, s32);
M2C_UNK fn_80079C88(s32, s32);
M2C_UNK fn_800818EC(s32, s32);
M2C_UNK fn_80082308(s32, s32);
M2C_UNK fn_8007D6A4(s32, s32);
M2C_UNK fn_8007B8F4(s32, s32);
M2C_UNK fn_8007C03C(s32, s32);
M2C_UNK fn_8007C790(s32, s32);
M2C_UNK fn_8007DDDC(s32, s32);
M2C_UNK fn_8007A6E8(s32, s32);
M2C_UNK fn_80080FEC(s32, s32);
M2C_UNK fn_80084378(s32, s32);
M2C_UNK fn_8007E574(s32, s32);
M2C_UNK fn_8007CEE4(s32, s32);
extern f32 lbl_8031F3F0 __attribute__((section(".data")));

void AI__InitializeControllerForActorType(void *arg0) {
    s32 temp_r0;
    void *temp_r9_2;
    s32 var_r3;
    void *temp_r9;
    u8 *p_19b4;

    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x19B4);
    if (temp_r0 == 9) {
        var_r3 = fn_80085F48(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
    } else if (temp_r0 == 0xB) {
        var_r3 = fn_80082B5C(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
    } else if (temp_r0 == 0xD) {
        var_r3 = AI__ConstructEnemyDismembermentVariant(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
    } else if (temp_r0 == 0xE) {
        var_r3 = fn_800782C8(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
    } else if (temp_r0 == 0xF) {
        var_r3 = fn_80078B40(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
    } else if (temp_r0 == 0x10) {
        var_r3 = fn_80079340(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
    } else if (temp_r0 == 2) {
        var_r3 = fn_8007EC20(Mem__New(0x580), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
    } else if (temp_r0 == 7) {
        var_r3 = fn_80085408(Mem__New(0x580), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
    } else if (temp_r0 == 8) {
        var_r3 = fn_8008681C(Mem__New(0x580), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
    } else if (temp_r0 == 6) {
        var_r3 = fn_8007B10C(Mem__New(0x584), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
    } else {
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        p_19b4 = (char *)temp_r9 + 0x19b4;
        temp_r0 = M2C_FIELD(p_19b4, s32 *, 0x0);
        if (temp_r0 == 4) {
            var_r3 = AI__ConstructDismembermentVariant(Mem__New(0x5C4), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
        } else if (temp_r0 == 3) {
            var_r3 = fn_80083310(Mem__New(0x580), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
        } else if (temp_r0 == 0x1E) {
            var_r3 = fn_800759B0(Mem__New(0x584), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
        } else if (temp_r0 == 0x15) {
            var_r3 = fn_8008044C(Mem__New(0x5C4), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
        } else if (temp_r0 == 0x14) {
            var_r3 = fn_80079C88(Mem__New(0x5C4), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
        } else if (temp_r0 == 0x13) {
            var_r3 = fn_800818EC(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
        } else if (temp_r0 == 0x12) {
            var_r3 = fn_80082308(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
        } else if (temp_r0 == 0x11) {
            var_r3 = fn_8007D6A4(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
        } else if (temp_r0 == 0xA) {
            var_r3 = fn_8007B8F4(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
        } else if (temp_r0 == 0x19) {
            var_r3 = fn_8007C03C(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
        } else {
            temp_r9_2 = M2C_FIELD(p_19b4, s32 *, 0x0);
            if (0x16 == temp_r9_2) {
                var_r3 = fn_8007C790(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
            } else if (temp_r9_2 == 0x17) {
                var_r3 = AI__ConstructFireShieldEnemy(Mem__New(0x5CC), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
            } else if (temp_r9_2 == 0x18) {
                var_r3 = fn_8007DDDC(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
            } else if (temp_r9_2 == 0xC) {
                var_r3 = fn_8007A6E8(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
            } else if (temp_r9_2 == 0x1A) {
                var_r3 = AI__ConstructEnemyAndGrantInventoryItem(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
            } else if (temp_r9_2 == 5) {
                var_r3 = fn_80080FEC(Mem__New(0x580), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
            } else if (temp_r9_2 == 0x1C) {
                var_r3 = fn_80084378(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
            } else if (temp_r9_2 == 0x1D) {
                var_r3 = fn_8007E574(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
            } else if (temp_r9_2 == 0x1B) {
                var_r3 = fn_8007CEE4(Mem__New(0x5C0), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
            } else if ((u32) temp_r9_2 > 8U) {
                var_r3 = AI__ConstructDefaultEnemy(Mem__New(0x5C0), (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
            } else {
                var_r3 = AI__ConstructDefaultPlayer(Mem__New(0x580), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x84));
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0x88) = var_r3;
    M2C_FIELD(arg0, f32 *, 0x84) = lbl_8031F3F0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0x2328;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
}
