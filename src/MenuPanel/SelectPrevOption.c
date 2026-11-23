/* MenuPanel__SelectPrevOption @ 0x8026857C (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EzNode__GetFirstChild(void *);
void MenuPanel__SelectPrevOption(void *arg0) {
    void *vt;
    void *prev;
    void *cur = *(void **)((char *)arg0 + 0xADF8);
    *(void **)((char *)arg0 + 0xADFC) = cur;
    if (cur != NULL) {
        vt = *(void **)((char *)cur + 0x10);
        prev = M2C_FIELD(vt, void *(**)(void *), 0x5C)((char *)cur + M2C_FIELD(vt, s16 *, 0x58));
        *(int *)((char *)arg0 + 0xAE8C) = 0;
        *(void **)((char *)arg0 + 0xADF8) = prev;
        if (prev != NULL) {
            goto tail;
        }
    }
    {
        void *vt2;
        *(int *)((char *)arg0 + 0xAE8C) = 1;
        *(void **)((char *)arg0 + 0xADF8) = (void *)EzNode__GetFirstChild((char *)arg0 + 0xADE4);
        while (*(void **)((char *)arg0 + 0xADF8) != NULL
            && (vt2 = *(void **)((char *)*(void **)((char *)arg0 + 0xADF8) + 0x10),
                M2C_FIELD(vt2, void *(**)(void *), 0x54)(*(char **)((char *)arg0 + 0xADF8) + M2C_FIELD(vt2, s16 *, 0x50)) != NULL)) {
            void *vt4 = *(void **)((char *)*(void **)((char *)arg0 + 0xADF8) + 0x10);
            *(void **)((char *)arg0 + 0xADF8) = M2C_FIELD(vt4, void *(**)(void *), 0x54)(*(char **)((char *)arg0 + 0xADF8) + M2C_FIELD(vt4, s16 *, 0x50));
        }
    }
tail:
    {
        void *vt3 = *(void **)((char *)arg0 + 0x19C);
        M2C_FIELD(vt3, void (**)(void *), 0x534)((char *)arg0 + M2C_FIELD(vt3, s16 *, 0x530));
    }
}
