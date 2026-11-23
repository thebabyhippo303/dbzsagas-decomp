/* AxStream__Destroy @ 0x80197950 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SoundDriver__FreeAram(void *, s32);
void Mem__Delete(void *);
void memFree(void *);
void DVDCancel(s32);
M2C_UNK DVDClose(s32);
M2C_UNK fn_802D2728(s32);
extern M2C_UNK lbl_8033FD30 __attribute__((section(".data")));
extern M2C_UNK lbl_803403F8 __attribute__((section(".data")));

void AxStream__Destroy(void *arg0, s32 arg1) {
    s32 off;
    s32 i;
    s32 temp_r3_2;
    void *buf;

    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &lbl_8033FD30;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 0x384) = 0;
    i = 0;
    do {
        off = i * 0x90;
        if (M2C_FIELD(arg0, s32 *, 0xA4 + off) != 0) {
            DVDCancel((s32) ((char *)arg0 + (off + 0x30)));
        }
        if (M2C_FIELD(arg0, s32 *, 0xA0 + off) != 0) {
            DVDClose((s32) ((char *)arg0 + (off + 0x30)));
        }
        i += 1;
        while (M2C_FIELD(arg0, s32 *, 0xB8 + off) != 0) {
        }
        buf = M2C_FIELD(arg0, void **, 0x6C + off);
        if (buf != NULL) {
            memFree(buf);
        }
    } while (i <= 1);
    SoundDriver__FreeAram(M2C_FIELD(arg0, void **, 0x2C), M2C_FIELD(arg0, s32 *, 0x98));
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x1C0);
    if (0 != temp_r3_2) {
        fn_802D2728(temp_r3_2);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &lbl_803403F8;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
