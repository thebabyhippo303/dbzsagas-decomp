/* GroundDecalSet__Destroy @ 0x802836C8 (size: 0x154, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void GroundDecalSet__ReleaseDecal(void *, void *);
void Mem__DeleteArray(void *);
void Mem__Delete(void *);
void GroundDecalSet__Destroy(void *arg0, s32 arg1) {
    void *head;
    void *cur;
    char *p2;
    char *p3;
    void *arr;
    s32 n;
    s32 cnt;
    s32 idx;
    void *e;
    void *data;
    void *node;
    void *tail;

    head = M2C_FIELD(arg0, void **, 0x34);
    if (head != NULL) {
        do {
            cur = head;
            head = M2C_FIELD(head, void **, 0xF8);
            GroundDecalSet__ReleaseDecal(arg0, cur);
        } while (head != NULL);
    }
    p2 = (char *)arg0 + 68;
    p3 = (char *)arg0 + 52;
    arr = M2C_FIELD(p2, void **, 8);
    if (arr != NULL) {
        n = M2C_FIELD(arr, s32 *, 4);
        if (n > 0) {
            cnt = n;
            idx = 0;
            do {
                e = *(void **)((char *)M2C_FIELD(M2C_FIELD(p2, void **, 8), void **, 0) + idx);
                if (e != NULL) {
                    Mem__DeleteArray(e);
                }
                idx += 4;
                cnt -= 1;
            } while (cnt != 0);
        }
        data = M2C_FIELD(p2, void **, 8);
        if (data != NULL) {
            e = M2C_FIELD(data, void **, 0);
            if (e != NULL) {
                Mem__Delete(e);
            }
            Mem__Delete(data);
        }
        M2C_FIELD(p2, void **, 8) = NULL;
    }
    if (M2C_FIELD(p3, void **, 8) != NULL && M2C_FIELD(arg0, void **, 0x34) != NULL) {
        do {
            node = M2C_FIELD(p3, void **, 0);
            tail = M2C_FIELD(p3, void **, 4);
            M2C_FIELD(p3, void **, 0) = M2C_FIELD(node, void **, 0xF8);
            if (tail == node) {
                M2C_FIELD(p3, void **, 4) = M2C_FIELD(node, void **, 0xF4);
            } else {
                M2C_FIELD(M2C_FIELD(node, void **, 0xF8), void **, 0xF4) = M2C_FIELD(node, void **, 0xF4);
            }
            if (M2C_FIELD(p3, void **, 8) != NULL) {
                Mem__Delete(node);
            } else {
                M2C_FIELD(node, void **, 0xF4) = NULL;
                M2C_FIELD(node, void **, 0xF8) = NULL;
            }
            M2C_FIELD(p3, s32 *, 12) = M2C_FIELD(p3, s32 *, 12) - 1;
        } while (M2C_FIELD(p3, void **, 0) != NULL);
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
