/* ProcModel__SetIndices @ 0x8024D744 (size: 0x2F8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Mem__NewArray(u32);
void Mem__Delete(void *);
void *Mem__New(u32);
void MemHeap__TagAllocation(void);
void *memcpy(void *, const void *, unsigned int);
void *memmove(void *, void *, unsigned int);
void *memset(void *, int, u32);
extern void *lbl_803DCD7C __attribute__((section(".sdata")));

/* WIP 6.6% (structure decoded, regs not yet). Target: stmw r20 (12 kept),
 * entry via add+lwz/lwz (NOT indexed), loop1-then/loop2-else layout, r10+mr-r21
 * split for arg1*8, r30-reuse for tailv/flagv stores, memcpy has crclr 4th arg. */
s32 ProcModel__SetIndices(void *arg0, s32 arg1, u16 *arg2, u32 arg3) {
    s32 sv[2];
    void *chunk;
    char *ebase;
    s32 off10;
    s32 e0;
    s32 cap;
    u16 r6;
    u16 r7;
    s32 off2;
    void *arr;
    s32 r24;
    u16 *r25;
    void *chunkb;
    s32 r21v;
    s32 r30v;
    s32 oldsize;
    s32 growv;
    s32 newsize;
    void *newArr;
    void *oldArr;
    void *arr2;
    s32 offb;
    void *chunk2;
    s32 w80v;
    void *queue;
    void *tailv;
    void *nodeA;
    s32 ncountA;
    void *flagv;
    void *q16;
    void *nodeB;
    s32 ncountB;

    chunk = M2C_FIELD(arg0, void **, 0x14);
    off10 = arg1 * 8;
    ebase = M2C_FIELD(chunk, char **, 0);
    e0 = M2C_FIELD(ebase + off10, s32 *, 0);
    cap = M2C_FIELD(ebase + off10, s32 *, 4);
    if (arg3 <= (u32)cap) {
        r6 = 0;
        if (r6 >= arg3) {
            goto tail;
        }
        do {
            r7 = *(u16 *)((u8 *)arg2 + (r6 + r6));
            off2 = (r6 + e0) * 2;
            r6 += 1;
            arr = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0x18);
            *(u16 *)((u8 *)arr + off2) = r7;
        } while (r6 < arg3);
        goto tail;
    } else {
        chunkb = M2C_FIELD(arg0, void **, 0x14);
        r24 = 0;
        sv[0] = M2C_FIELD((char *)chunkb + 0x18, s32 *, 4);
        r21v = off10;
        r25 = arg2;
        if (r24 >= (s32)arg3) {
            goto stores;
        }
        do {
            r30v = M2C_FIELD((char *)chunkb + 0x18, s32 *, 4);
            if (r30v != M2C_FIELD((char *)chunkb + 0x18, s32 *, 8)) {
                goto append;
            }
            growv = M2C_FIELD((char *)chunkb + 0x18, s32 *, 0xC);
            oldsize = r30v + r30v;
            newsize = growv + r30v;
            newsize = newsize + newsize;
            newArr = Mem__NewArray(newsize);
            if (newArr == NULL) {
                goto cont;
            }
            oldArr = M2C_FIELD(chunkb, void **, 0x18);
            if (oldArr != NULL) {
                memcpy(newArr, oldArr, oldsize);
                oldArr = M2C_FIELD(chunkb, void **, 0x18);
                if (oldArr != NULL) {
                    Mem__Delete(oldArr);
                }
            }
            M2C_FIELD(chunkb, void **, 0x18) = newArr;
            M2C_FIELD((char *)chunkb + 0x18, s32 *, 8) = M2C_FIELD((char *)chunkb + 0x18, s32 *, 0xC) + M2C_FIELD((char *)chunkb + 0x18, s32 *, 8);
            if (M2C_FIELD((char *)chunkb + 0x18, s32 *, 0x10) != 0) {
                memset((char *)newArr + oldsize, 0, newsize - oldsize);
            }
append:
            arr2 = M2C_FIELD(chunkb, void **, 0x18);
            offb = r30v + r30v;
            if (M2C_FIELD((char *)chunkb + 0x18, s32 *, 4) != r30v) {
                memmove((char *)arr2 + offb + 2, (char *)arr2 + offb, (M2C_FIELD((char *)chunkb + 0x18, s32 *, 4) - r30v) * 2);
            }
            *(u16 *)((u8 *)arr2 + offb) = *r25;
            M2C_FIELD((char *)chunkb + 0x18, s32 *, 4) = M2C_FIELD((char *)chunkb + 0x18, s32 *, 4) + 1;
cont:
            r24 += 1;
            r25 += 1;
        } while (r24 < (s32)arg3);
    }
stores:
    sv[1] = arg3;
    chunk = M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD((char *)M2C_FIELD(chunk, char **, 0) + r21v, s32 *, 0) = sv[0];
    M2C_FIELD((char *)M2C_FIELD(chunk, char **, 0) + r21v, s32 *, 4) = sv[1];
tail:
    chunk2 = M2C_FIELD(arg0, void **, 0x14);
    w80v = M2C_FIELD(chunk2, s32 *, 0x80);
    if (w80v != 0) {
        queue = lbl_803DCD7C;
        tailv = M2C_FIELD(queue, void **, 0x20);
        if (tailv == NULL) {
            tailv = Mem__New(412);
            M2C_FIELD(tailv, s32 *, 408) = (s32)tailv;
            M2C_FIELD(queue, void **, 0x20) = tailv;
            MemHeap__TagAllocation();
            if (M2C_FIELD(queue, void **, 0x10) == NULL) {
                q16 = (char *)queue + 0x10;
                M2C_FIELD(q16, void **, 4) = M2C_FIELD(queue, void **, 0x20);
                M2C_FIELD(queue, void **, 0x10) = M2C_FIELD(queue, void **, 0x20);
                M2C_FIELD(M2C_FIELD(queue, void **, 0x20), void **, 0) = tailv;
                M2C_FIELD(M2C_FIELD(queue, void **, 0x20), void **, 4) = tailv;
            } else {
                q16 = (char *)queue + 0x10;
                M2C_FIELD(M2C_FIELD(queue, void **, 0x20), void **, 4) = M2C_FIELD(queue, void **, 0x10);
                M2C_FIELD(M2C_FIELD(queue, void **, 0x20), void **, 0) = tailv;
                M2C_FIELD(M2C_FIELD(queue, void **, 0x10), void **, 0) = M2C_FIELD(queue, void **, 0x20);
                M2C_FIELD(queue, void **, 0x10) = M2C_FIELD(queue, void **, 0x20);
            }
            M2C_FIELD(q16, s32 *, 0xC) = M2C_FIELD(q16, s32 *, 0xC) + 1;
        }
        nodeA = M2C_FIELD(queue, void **, 0x20);
        ncountA = M2C_FIELD(nodeA, s32 *, 408);
        flagv = NULL;
        if (ncountA > 99) {
            goto chkflag;
        }
        ((s32 *)((char *)nodeA + 8))[ncountA] = w80v;
        flagv = (void *)1;
        M2C_FIELD(nodeA, s32 *, 408) = M2C_FIELD(nodeA, s32 *, 408) + 1;
chkflag:
        if (flagv == NULL) {
            nodeB = Mem__New(412);
            M2C_FIELD(nodeB, s32 *, 408) = (s32)flagv;
            M2C_FIELD(queue, void **, 0x20) = nodeB;
            MemHeap__TagAllocation();
            if (M2C_FIELD(queue, void **, 0x10) == NULL) {
                q16 = (char *)queue + 0x10;
                M2C_FIELD(q16, void **, 4) = M2C_FIELD(queue, void **, 0x20);
                M2C_FIELD(queue, void **, 0x10) = M2C_FIELD(queue, void **, 0x20);
                M2C_FIELD(M2C_FIELD(queue, void **, 0x20), void **, 0) = flagv;
                M2C_FIELD(M2C_FIELD(queue, void **, 0x20), void **, 4) = flagv;
            } else {
                q16 = (char *)queue + 0x10;
                M2C_FIELD(M2C_FIELD(queue, void **, 0x20), void **, 4) = M2C_FIELD(queue, void **, 0x10);
                M2C_FIELD(M2C_FIELD(queue, void **, 0x20), void **, 0) = flagv;
                M2C_FIELD(M2C_FIELD(queue, void **, 0x10), void **, 0) = M2C_FIELD(queue, void **, 0x20);
                M2C_FIELD(queue, void **, 0x10) = M2C_FIELD(queue, void **, 0x20);
            }
            M2C_FIELD(q16, s32 *, 0xC) = M2C_FIELD(q16, s32 *, 0xC) + 1;
            nodeB = M2C_FIELD(queue, void **, 0x20);
            ncountB = M2C_FIELD(nodeB, s32 *, 408);
            if (ncountB > 99) {
                goto doclear;
            }
            ((s32 *)((char *)nodeB + 8))[ncountB] = w80v;
            M2C_FIELD(nodeB, s32 *, 408) = M2C_FIELD(nodeB, s32 *, 408) + 1;
        }
doclear:
        M2C_FIELD(chunk2, s32 *, 0x80) = 0;
    }
    return arg1;
}
