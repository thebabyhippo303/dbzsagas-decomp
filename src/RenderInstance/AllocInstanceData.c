/* RenderInstance__AllocInstanceData @ 0x80207CE0 (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *MemHeap__Alloc(u32, u32);
extern void *memset(void *, int, u32);
extern s32 lbl_803DCD04 __attribute__((section(".sdata")));
void *Database__GetFirstReferencedObject(void *);
void fn_8021464C(void *, void *, s32, void *, s32, s32, s32);
void fn_80214824(void *, void *);

typedef struct {
    u16 n0;
    u16 n2;
    s32 f4;
    s32 w8;
    s32 w12;
    void *p16;
    void *p20;
} Hdr28;

typedef struct {
    s32 w[7];
} W28;

void RenderInstance__AllocInstanceData(void *arg0) {
    s32 flag = (*(u8 *)((char *)arg0 + 1)) & 0x20;
    if (flag == 0) {
        void *ref = Database__GetFirstReferencedObject(arg0);
        if (lbl_803DCD04 != 0) {
            *(s32 *)((char *)arg0 + 12) = lbl_803DCD04;
            lbl_803DCD04 = flag;
            return;
        }
        if (((*(u16 *)((char *)ref + 2)) & 0x40) != 0) {
            void *hdr = MemHeap__Alloc(28, 8);
            void *src = *(void **)((char *)ref + 44);
            *(W28 *)hdr = *(W28 *)src;
            *(void **)((char *)arg0 + 12) = hdr;
            {
                void *buf = MemHeap__Alloc((*(u16 *)((char *)hdr + 0)) * 224, 8);
                s32 f4 = *(s32 *)((char *)hdr + 4);
                *(void **)((char *)hdr + 16) = buf;
                fn_8021464C(buf, buf, 0, hdr, f4, f4, 0);
                {
                    void *p3 = MemHeap__Alloc((*(u16 *)((char *)hdr + 2)) * 8, 8);
                    *(void **)((char *)hdr + 20) = p3;
                    memset(p3, 0, (*(u16 *)((char *)hdr + 2)) * 8);
                    fn_80214824(buf, *(void **)((char *)hdr + 20));
                }
            }
        }
    }
}
