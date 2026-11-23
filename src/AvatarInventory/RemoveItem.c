/* AvatarInventory__RemoveItem @ 0x8009B924 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int String__CompareIgnoreCase(const char *, const char *);
M2C_UNK AvatarInventory__SelectActiveItem(void *, s32, s32, M2C_UNK);
M2C_UNK fn_80188D94(s8 *, void *, M2C_UNK);
extern s8 lbl_8031D820 __attribute__((section(".data")));
extern f32 lbl_8031FC3C __attribute__((section(".data")));

void AvatarInventory__RemoveItem(void *arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 temp_r9;
    s32 off;
    u32 cnt;
    s32 var_r0;
    s8 *name;
    void *base;

    if (arg3 != 0) {
        temp_r9 = arg1 * 0x18;
        name = M2C_FIELD((temp_r9 + M2C_FIELD(arg0, s32 *, 0x1128)), s8 **, 0xC);
        if (name != NULL && String__CompareIgnoreCase(name, &lbl_8031D820) != 0) {
            fn_80188D94(M2C_FIELD((temp_r9 + M2C_FIELD(arg0, s32 *, 0x1128)), s8 **, 0xC), M2C_FIELD(arg0, void **, 0x1154), 0);
        }
        if (arg1 == M2C_FIELD(arg0, s32 *, 0x1134)) {
            AvatarInventory__SelectActiveItem(arg0, 0, 0, 1);
            return;
        }
        off = arg1 * 0x24;
        base = (char *)arg0 + 0x24;
        cnt = *(u32 *)((char *)base + off);
        if (cnt < arg3) {
            var_r0 = 0;
        } else {
            var_r0 = cnt - arg3;
        }
        *(s32 *)((char *)base + off) = var_r0;
        base = (char *)arg0 + 0x28;
        *(s32 *)((char *)base + off) = *(s32 *)((char *)base + off) & ~arg2;
        if (*(s32 *)(temp_r9 + M2C_FIELD(arg0, s32 *, 0x1128)) & 0x20) {
            M2C_FIELD(arg0, s32 *, 4) = arg1;
            M2C_FIELD(arg0, f32 *, 0x1C) = lbl_8031FC3C;
        }
    }
}
