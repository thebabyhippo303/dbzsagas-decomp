/* MainMenu__DestroySelectionListState @ 0x80012D10 (size: 0x22C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void Sphere__DestroyCore(void *, s32);
void fn_802704BC(void *, s32);
extern M2C_UNK lbl_8030E8F0 __attribute__((section(".data")));

void MainMenu__DestroySelectionListState(void *arg0, s32 arg1) {
    s32 idx;
    s32 off;
    void *node;
    void *item;
    void *vt;
    void *r30;
    void *r27;
    void *r26;
    void *t1;
    void *t2;
    void *r0u;

    node = M2C_FIELD(arg0, void **, 0x538);
    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8030E8F0;
    if (node != NULL) {
        do {
            vt = M2C_FIELD(node, void **, 0x19C);
            M2C_FIELD(vt, M2C_UNK (**)(void *, M2C_UNK), 0xC)(node + M2C_FIELD(vt, s16 *, 8), 3);
            node = M2C_FIELD(node, void **, 0x208);
        } while (node != NULL);
    }
    idx = 0;
    r30 = (char *)arg0 + 0x538;
    r27 = (char *)arg0 + 0x368;
    if (idx < M2C_FIELD(arg0, s32 *, 0x1A0)) {
        off = 0;
        do {
            item = *(void **)((char *)M2C_FIELD(arg0, void **, 0x520) + off);
            if (item != NULL) {
                vt = M2C_FIELD(item, void **, 0x19C);
                M2C_FIELD(vt, M2C_UNK (**)(void *, M2C_UNK), 0xC)(item + M2C_FIELD(vt, s16 *, 8), 3);
            }
            idx += 1;
            off += 4;
        } while (idx < M2C_FIELD(arg0, s32 *, 0x1A0));
    }
    r26 = (char *)arg0 + 0x1C8;
    if (M2C_FIELD(arg0, void **, 0x538) != NULL) {
        do {
            node = M2C_FIELD(r30, void **, 0);
            M2C_FIELD(r30, void **, 0) = M2C_FIELD(node, void **, 0x208);
            if (M2C_FIELD(r30, void **, 4) == node) {
                M2C_FIELD(r30, void **, 4) = M2C_FIELD(node, void **, 0x204);
            } else {
                M2C_FIELD(M2C_FIELD(node, void **, 0x208), void **, 0x204) = M2C_FIELD(node, void **, 0x204);
            }
            r0u = M2C_FIELD(r30, void **, 8);
            if (r0u != NULL) {
                if (node != NULL) {
                    fn_802704BC(node, 2);
                    Mem__Delete(node);
                }
            } else {
                M2C_FIELD(node, void **, 0x204) = r0u;
                M2C_FIELD(node, void **, 0x208) = r0u;
            }
            M2C_FIELD(r30, s32 *, 0xC) = M2C_FIELD(r30, s32 *, 0xC) - 1;
        } while (M2C_FIELD(r30, void **, 0) != NULL);
    }
    if ((M2C_FIELD(r30, void **, 8) != NULL) && (M2C_FIELD(arg0, void **, 0x538) != NULL)) {
        do {
            node = M2C_FIELD(r30, void **, 0);
            M2C_FIELD(r30, void **, 0) = M2C_FIELD(node, void **, 0x208);
            if (M2C_FIELD(r30, void **, 4) == node) {
                M2C_FIELD(r30, void **, 4) = M2C_FIELD(node, void **, 0x204);
            } else {
                M2C_FIELD(M2C_FIELD(node, void **, 0x208), void **, 0x204) = M2C_FIELD(node, void **, 0x204);
            }
            r0u = M2C_FIELD(r30, void **, 8);
            if (r0u != NULL) {
                if (node != NULL) {
                    fn_802704BC(node, 2);
                    Mem__Delete(node);
                }
            } else {
                M2C_FIELD(node, void **, 0x204) = r0u;
                M2C_FIELD(node, void **, 0x208) = r0u;
            }
            M2C_FIELD(r30, s32 *, 0xC) = M2C_FIELD(r30, s32 *, 0xC) - 1;
        } while (M2C_FIELD(r30, void **, 0) != NULL);
    }
    t1 = M2C_FIELD(arg0, void **, 0x520);
    if (t1 != NULL) {
        Mem__Delete(t1);
    }
    t2 = M2C_FIELD(arg0, void **, 0x508);
    if (t2 != NULL) {
        Mem__Delete(t2);
    }
    Sphere__DestroyCore(r27, 2);
    Sphere__DestroyCore(r26, 2);
    Sphere__DestroyCore(arg0, arg1);
}
