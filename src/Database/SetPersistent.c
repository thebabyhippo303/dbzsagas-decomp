/* Database__SetPersistent @ 0x80205E08 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { s32 persistent : 1; s32 reserved : 31; } PersistBits;

void *Database__FindObjectByType(s32, u16, s32, s32, s32, s32, s32, s32);
s32 TextureSet__SetPersistent(void *);
void *Database__FindRegisteredRecord(void);
void Database__SetPersistent(void *arg0, s32 arg1) {
    u16 buf;
    void *var_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, PersistBits *, 0x10).persistent = arg1;
        var_r3 = Database__FindObjectByType((s32) arg0, 0xFFFE, 0, 0, (s32) &buf, 0, 0, 0);
        if (var_r3 != NULL) {
            do {
                if (buf == 130 || buf == 134) {
                    TextureSet__SetPersistent(var_r3);
                }
                var_r3 = Database__FindRegisteredRecord();
            } while (var_r3 != NULL);
        }
    }
}
