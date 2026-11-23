/* SoundDriver__AxFrameCallback @ 0x80196980 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;

int OSEnableInterrupts(void);
void OSRestoreInterrupts(int);
void fn_802D6E80(void);
void AxStream__UploadBuffer(void *);
extern char *lbl_803DCC2C;

void SoundDriver__AxFrameCallback(void) {
    int ie;
    char *s;
    char *obj;
    u32 pos;
    u32 cur;
    u32 cur2;
    u32 lim;
    int flag;
    s32 delta;
    s32 total;

    ie = OSEnableInterrupts();
    fn_802D6E80();
    if (lbl_803DCC2C != 0) {
        s = *(char **)(lbl_803DCC2C + 900);
        if (s != 0) {
            obj = *(char **)(s + 448);
            flag = 0;
            pos = *(u32 *)(obj + 434);
            if (obj != 0) {
                flag = *(u16 *)(obj + 326);
            }
            if (flag == 1) {
                cur = *(u32 *)(s + 432);
                if (pos < cur) {
                    if (*(s32 *)(s + 324) != 0) {
                        *(s32 *)(s + 464) = 0;
                    }
                    AxStream__UploadBuffer(s + 192);
                } else {
                    lim = *(u32 *)(s + 296) * 2;
                    if (pos >= lim && cur < lim) {
                        if (*(s32 *)(s + 180) != 0) {
                            *(s32 *)(s + 464) = 0;
                        }
                        AxStream__UploadBuffer(s + 48);
                    }
                }
            }
            if (flag == 1) {
                cur2 = *(u32 *)(s + 432);
                if (pos < cur2) {
                    delta = *(u32 *)(s + 152);
                    total = *(s32 *)(s + 436);
                    delta = pos - delta;
                    delta += 0x8000;
                    delta -= cur2;
                } else {
                    total = *(s32 *)(s + 436);
                    delta = pos - cur2;
                }
                total += delta;
                *(s32 *)(s + 436) = total;
            }
            *(u32 *)(s + 432) = pos;
        }
    }
    OSRestoreInterrupts(ie);
}
