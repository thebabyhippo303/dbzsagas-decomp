/* SaveGame__InitializeState @ 0x8014E8D0 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;

typedef struct SaveState {
    /* 0x00 */ char pad0[4];
    /* 0x04 */ volatile s32 f4;
    /* 0x08 */ volatile s32 f8;
    /* 0x0C */ char pad1[0xC];
    /* 0x18 */ volatile void *f18;
    /* 0x1C */ char pad2[4];
    /* 0x20 */ volatile void *f20;
    /* 0x24 */ volatile void *f24;
    /* 0x28 */ char pad3[8];
    /* 0x30 */ void *f30;
    /* 0x34 */ void *f34;
    /* 0x38 */ char pad4[8];
    /* 0x40 */ void *f40;
    /* 0x44 */ volatile s32 f44;
    /* 0x48 */ char pad5[4];
    /* 0x4C */ volatile void *f4C;
    /* 0x50 */ volatile void *f50;
    /* 0x54 */ volatile s32 f54;
} SaveState;

extern s32 fn_8014E96C(void);
extern void *memset(void *, int, u32);

void SaveGame__InitializeState(SaveState *save) {
    void *z = 0;
    u32 n16 = 16;
    u32 n480 = 480;
    u32 nBig = 51200;

    save->f4 = -1;
    save->f20 = z;
    save->f54 = 1;
    save->f18 = z;
    save->f24 = z;
    save->f4C = z;
    save->f50 = z;
    save->f8 = fn_8014E96C();
    save->f44 = -1;
    memset(save->f40, 0, n16);
    memset(save->f30, 0, n480);
    memset(save->f34, 0, nBig);
}
