/* Sphere__GetWorldMatrix @ 0x8026DDD0 (size: 0x284, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Matrix__Copy4x4(void *, void *);
extern f32 lbl_80349F90 __attribute__((section(".data")));
extern f32 lbl_80349F94 __attribute__((section(".data")));

typedef void (*VtFn)(void *, void *);

void *Sphere__GetWorldMatrix(void *arg0, void *arg1) {
    u8 A[64];
    u8 B[64];
    u8 T[64];
    u8 C[64];
    f32 *ap;
    void *tptr;
    void *cdst;
    void *csrc;
    void *vt;
    void *papa;
    void *dstp;
    s32 cnt;
    s32 w;

    if (M2C_FIELD(arg1, void **, 0) == NULL) {
        vt = M2C_FIELD(arg1, void **, 0x19C);
        ((VtFn)M2C_FIELD(vt, void **, 0x254))(arg0, (char *)arg1 + M2C_FIELD(vt, s16 *, 0x250));
    } else {
        vt = M2C_FIELD(arg1, void **, 0x19C);
        tptr = T;
        ((VtFn)M2C_FIELD(vt, void **, 0x254))((void *)A, (char *)arg1 + M2C_FIELD(vt, s16 *, 0x250));
        papa = M2C_FIELD(arg1, void **, 0);
        vt = M2C_FIELD(papa, void **, 0x19C);
        ((VtFn)M2C_FIELD(vt, void **, 0x25C))((void *)B, (char *)papa + M2C_FIELD(vt, s16 *, 0x258));
        ap = (f32 *)A;
        cdst = tptr;
        csrc = (void *)C;
        {
            f32 c0;
            f32 c1;
            f32 c2;
            c1 = ap[1];
            c2 = ap[2];
            M2C_FIELD(C, f32 *, 0) = (c2 * M2C_FIELD(B, f32 *, 32)) + ((M2C_FIELD(A, f32 *, 0) * M2C_FIELD(B, f32 *, 0)) + (c1 * M2C_FIELD(B, f32 *, 16)));
            M2C_FIELD(C, f32 *, 4) = (c2 * M2C_FIELD(B, f32 *, 36)) + ((M2C_FIELD(A, f32 *, 0) * M2C_FIELD(B, f32 *, 4)) + (c1 * M2C_FIELD(B, f32 *, 20)));
            M2C_FIELD(C, f32 *, 8) = (c2 * M2C_FIELD(B, f32 *, 40)) + ((M2C_FIELD(A, f32 *, 0) * M2C_FIELD(B, f32 *, 8)) + (c1 * M2C_FIELD(B, f32 *, 24)));
            c1 = ap[5];
            c0 = ap[4];
            c2 = ap[6];
            M2C_FIELD(C, f32 *, 24) = (c2 * M2C_FIELD(B, f32 *, 40)) + ((c0 * M2C_FIELD(B, f32 *, 8)) + (c1 * M2C_FIELD(B, f32 *, 24)));
            M2C_FIELD(C, f32 *, 16) = (c2 * M2C_FIELD(B, f32 *, 32)) + ((c0 * M2C_FIELD(B, f32 *, 0)) + (c1 * M2C_FIELD(B, f32 *, 16)));
            M2C_FIELD(C, f32 *, 20) = (c2 * M2C_FIELD(B, f32 *, 36)) + ((c0 * M2C_FIELD(B, f32 *, 4)) + (c1 * M2C_FIELD(B, f32 *, 20)));
            M2C_FIELD(C, f32 *, 12) = lbl_80349F90;
            M2C_FIELD(C, f32 *, 28) = lbl_80349F90;
            c1 = ap[9];
            c0 = ap[8];
            c2 = ap[10];
            M2C_FIELD(C, f32 *, 36) = (c2 * M2C_FIELD(B, f32 *, 36)) + ((c0 * M2C_FIELD(B, f32 *, 4)) + (c1 * M2C_FIELD(B, f32 *, 20)));
            M2C_FIELD(C, f32 *, 40) = (c2 * M2C_FIELD(B, f32 *, 40)) + ((c0 * M2C_FIELD(B, f32 *, 8)) + (c1 * M2C_FIELD(B, f32 *, 24)));
            M2C_FIELD(C, f32 *, 32) = (c2 * M2C_FIELD(B, f32 *, 32)) + ((c0 * M2C_FIELD(B, f32 *, 0)) + (c1 * M2C_FIELD(B, f32 *, 16)));
            M2C_FIELD(C, f32 *, 44) = lbl_80349F90;
            c1 = ap[13];
            c0 = ap[12];
            c2 = ap[14];
            M2C_FIELD(C, f32 *, 60) = lbl_80349F94;
            M2C_FIELD(C, f32 *, 48) = (c2 * M2C_FIELD(B, f32 *, 32)) + ((c0 * M2C_FIELD(B, f32 *, 0)) + (c1 * M2C_FIELD(B, f32 *, 16))) + M2C_FIELD(B, f32 *, 48);
            M2C_FIELD(C, f32 *, 52) = (c2 * M2C_FIELD(B, f32 *, 36)) + ((c0 * M2C_FIELD(B, f32 *, 4)) + (c1 * M2C_FIELD(B, f32 *, 20))) + M2C_FIELD(B, f32 *, 52);
            M2C_FIELD(C, f32 *, 56) = (c2 * M2C_FIELD(B, f32 *, 40)) + ((c0 * M2C_FIELD(B, f32 *, 8)) + (c1 * M2C_FIELD(B, f32 *, 24))) + M2C_FIELD(B, f32 *, 56);
        }
        Matrix__Copy4x4(cdst, csrc);
        dstp = arg0;
        cnt = 0x30;
        do {
            cnt -= 0x18;
            M2C_FIELD(dstp, s32 *, 0) = M2C_FIELD(tptr, s32 *, 0);
            M2C_FIELD(dstp, s32 *, 4) = M2C_FIELD(tptr, s32 *, 4);
            M2C_FIELD(dstp, s32 *, 8) = M2C_FIELD(tptr, s32 *, 8);
            M2C_FIELD(dstp, s32 *, 0xC) = M2C_FIELD(tptr, s32 *, 0xC);
            M2C_FIELD(dstp, s32 *, 0x10) = M2C_FIELD(tptr, s32 *, 0x10);
            w = M2C_FIELD(tptr, s32 *, 0x14);
            tptr = (char *)tptr + 0x18;
            M2C_FIELD(dstp, s32 *, 0x14) = w;
            dstp = (char *)dstp + 0x18;
        } while (cnt != 0);
        M2C_FIELD(dstp, s32 *, 0) = M2C_FIELD(tptr, s32 *, 0);
        M2C_FIELD(dstp, s32 *, 4) = M2C_FIELD(tptr, s32 *, 4);
        M2C_FIELD(dstp, s32 *, 8) = M2C_FIELD(tptr, s32 *, 8);
        M2C_FIELD(dstp, s32 *, 0xC) = M2C_FIELD(tptr, s32 *, 0xC);
    }
    return arg0;
}
