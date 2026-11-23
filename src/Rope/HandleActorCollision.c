/* Rope__HandleActorCollision @ 0x802C1FD0 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern s32 lbl_80394584[];
extern s32 lbl_803DE610;

void Rope__HandleActorCollision(void *arg0, void *arg1, void *arg2) {
    s32 flags = *(s32 *)arg1;
    char *d;

    if ((flags & lbl_80394584[1]) == lbl_80394584[0])
        goto docall;
    if (*(s32 *)((char *)arg0 + 0x644) == 3)
        return;
    goto join;
docall:
    {
        void *o = *(void **)((char *)arg1 + 0x34);
        s32 (*fn)(void *, void *) = *(s32 (**)(void *, void *))((char *)o + 0xF4);
        if ((fn((char *)arg1 + *(s16 *)((char *)o + 0xF0), arg0) & lbl_803DE610) != 0)
            return;
    }
    goto join;
    if (*(s32 *)((char *)arg0 + 0x644) == 3)
        return;
join:
    d = (char *)arg0 + 0x590;
    *(s32 *)((char *)arg0 + 0x644) = 0;
    if (arg2 == NULL)
        return;
    if (arg0 == *(void **)((char *)arg2 + 0x20)) {
        void *r5 = *(void **)((char *)arg2 + 0x28);
        if (r5 == NULL)
            return;
        do {
            s32 c = *(s32 *)(d + 4);
            if (c >= *(s32 *)(d + 8))
                return;
            ((s32 *)*(void **)(d + 0xC))[c] = *(s32 *)((char *)r5 + 0x24);
            *(s32 *)(d + 4) = c + 1;
            r5 = *(void **)((char *)r5 + 0x34);
        } while (r5 != NULL);
    } else if (arg0 == *(void **)((char *)arg2 + 0x24)) {
        void *r5 = *(void **)((char *)arg2 + 0x28);
        if (r5 == NULL)
            return;
        do {
            s32 c = *(s32 *)(d + 4);
            if (c >= *(s32 *)(d + 8))
                return;
            ((s32 *)*(void **)(d + 0xC))[c] = *(s32 *)((char *)r5 + 0x20);
            *(s32 *)(d + 4) = c + 1;
            r5 = *(void **)((char *)r5 + 0x34);
        } while (r5 != NULL);
    }
}
