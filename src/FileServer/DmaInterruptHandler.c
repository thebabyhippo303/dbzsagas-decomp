/* FileServer__DmaInterruptHandler @ 0x8015E0C8 (size: 0x13C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef unsigned int u32;
typedef void (*FileServerCallback)(s32);
extern void FileServer__StartReadDma(s32 address, s32 size);
extern volatile s32 lbl_8036FB50 __attribute__((section(".data")));
extern FileServerCallback volatile lbl_8036FB54 __attribute__((section(".data")));
extern volatile s32 lbl_8036FB58 __attribute__((section(".data")));
extern volatile s32 lbl_8039E5E4 __attribute__((section(".data")));
extern volatile s32 lbl_8039E5E8 __attribute__((section(".data")));
extern volatile s32 lbl_8039E5EC __attribute__((section(".data")));
extern volatile s32 lbl_8039E5F0 __attribute__((section(".data")));
extern volatile s32 lbl_8039E5F4 __attribute__((section(".data")));
extern volatile s32 lbl_8039E5F8 __attribute__((section(".data")));
void FileServer__DmaInterruptHandler(void) {
    s32 amount;
    s32 address;
    s32 saved;
    FileServerCallback callback;
    s32 ticks;
    s32 n;
    s32 x;
    ticks = lbl_8036FB58;
    address = lbl_8039E5E4;
    lbl_8036FB58 = ticks + 1;
    *(volatile s32 *)0xCC006828 = 0x88;
    if (lbl_8036FB50 == 0) return;
    n = lbl_8039E5E8;
    if (n != 0) {
        if (lbl_8036FB50 == 4) {
            lbl_8039E5E4 = address + 0x200;
            amount = 0x200;
        } else {
            lbl_8039E5E4 = address + 0x400;
            amount = 0x400;
        }
        lbl_8039E5E8 -= 1;
        goto start_read;
    }
    x = lbl_8039E5EC;
    if (x != 0) {
        amount = lbl_8039E5EC;
        lbl_8039E5EC = n;
        goto start_read;
    }
    *(volatile s32 *)0xCC006828 = x;
    if (lbl_8039E5F0 != 0) {
        if (lbl_8036FB50 != 4) lbl_8036FB50 = 1;
        return;
    }
    saved = lbl_8039E5F4;
    if (saved != 0) {
        lbl_8036FB50 = 5;
        return;
    }
    callback = lbl_8036FB54;
    lbl_8036FB50 = saved;
    lbl_8039E5F8 = saved;
    if (callback != 0) {
        callback(0);
        lbl_8036FB54 = (FileServerCallback)saved;
    }
    return;
start_read:
    FileServer__StartReadDma(address, amount);
}
