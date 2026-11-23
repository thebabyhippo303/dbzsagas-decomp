/* TextureMgr__LoadTextureSet @ 0x80246FC4 (size: 0x1B4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern char lbl_803B1D2C[];
extern char lbl_803B1D38[];
void *SList__PopFront(void *);
void SList__PushFront(void *, void *);
void SList__Init(void *, s32);
void *MemHeap__Alloc(u32, u32);
void TextureSet__RelocatePointers(void *, u32);
u16 gfxTexCache__LoadTexture(void *, s32, void *, void *, s32);

s32 TextureMgr__LoadTextureSet(void *arg0, void *arg1, void *arg2, void **arg3, s32 *arg4) {
    void *node;
    void *entry;
    void *src = NULL;
    s32 outer;
    s32 inner;
    u16 h;

    node = SList__PopFront(lbl_803B1D2C);
    SList__PushFront(lbl_803B1D38, node);
    M2C_FIELD(node, s32 *, 0x24) = M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(node, s32 *, 0x34) = (s32)src;
    M2C_FIELD(node, s32 *, 0x30) = (s32)src;
    M2C_FIELD(node, s32 *, 0x48) = (s32)src;
    M2C_FIELD(node, s32 *, 0x28) = M2C_FIELD(arg1, s32 *, 0x10);
    strcpy((char *)node + 4, (char *)arg1 + 0x18);
    SList__Init((char *)node + 0x38, 0);
    M2C_FIELD(node, void **, 0x2C) = MemHeap__Alloc(M2C_FIELD(node, s32 *, 0x24) * 2, 8);
    if (M2C_FIELD(node, s32 *, 0x28) != 0) {
        void *buf;
        src = (char *)arg1 + M2C_FIELD(arg1, s32 *, 0x14);
        buf = MemHeap__Alloc(M2C_FIELD(node, s32 *, 0x28) * 16, 8);
        M2C_FIELD(node, void **, 0x30) = buf;
        memcpy(buf, src, M2C_FIELD(node, s32 *, 0x28) * 16);
    }
    for (outer = 0; (u32)outer < M2C_FIELD(arg1, u32 *, 0xC); outer++) {
        entry = (char *)arg1 + 0x38;
        for (inner = 0; inner < M2C_FIELD(arg1, s32 *, 0); inner++) {
            if (M2C_FIELD(entry, s32 *, 0x18) != outer) {
                goto next_entry;
            }
            if (M2C_FIELD(arg1, s32 *, 4) >= 0) {
                TextureSet__RelocatePointers(entry, arg1);
            }
            h = gfxTexCache__LoadTexture(node, inner, entry, arg1, 0);
            M2C_FIELD(node, u16 **, 0x2C)[inner] = h;
            if (M2C_FIELD(node, u16 **, 0x2C)[inner] == 0) {
                return 0;
            }
next_entry:
            entry = (char *)entry + 0x48;
        }
    }
    M2C_FIELD(arg1, s32 *, 4) = M2C_FIELD(arg1, s32 *, 4) | 0x80000000;
    M2C_FIELD(arg2, u16 *, 2) = (u16)(M2C_FIELD(arg2, u16 *, 2) & 0xFFFE);
    M2C_FIELD(node, s32 *, 0x44) = M2C_FIELD(arg2, s32 *, 4);
    *arg3 = node;
    *arg4 = 0x4C;
    return 1;
}
