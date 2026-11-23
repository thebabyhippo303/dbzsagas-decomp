/* AvatarInventory__TransferSaveData @ 0x8009BCD4 (size: 0x1E0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct Slot { s32 w[9]; } Slot;
s32 AvatarInventory__EquipHandItem(void *, s32, s32);
void AvatarInventory__GetSaveDataSize(void *);
s32 AvatarInventory__UnequipHandItem(void *, s32);

void AvatarInventory__TransferSaveData(char *inv, char *save, s32 toSave) {
    s32 cur;
    s32 was;
    s32 i;
    s32 j;
    s32 t2;
    Slot *d;
    Slot *s;

    if (toSave != 0) {
        cur = *(s32 *)(inv + 0x112C);
        was = 0;
        if (cur != 0 && (*(s32 *)(*(char **)(inv + 0x1128) + cur * 0x18) & 2)) {
            was = 1;
            AvatarInventory__UnequipHandItem(inv, 0);
        }
        i = 1;
        do {
            d = (Slot *)(i * 0x24 + (s32)save + 0x10);
            s = (Slot *)(i * 0x24 + (s32)inv + 0x24);
            *d = *s;
            i++;
            if (i > 120) {
                break;
            }
        } while (1);
        *(s32 *)(save + 0) = *(s32 *)(inv + 0x112C);
        *(s32 *)(save + 4) = *(s32 *)(inv + 0x1134);
        *(s32 *)(save + 8) = *(s32 *)(inv + 0x113C);
        *(s32 *)(save + 0xC) = *(s32 *)(inv + 0x1140);
        *(s32 *)(save + 0x1114) = *(s32 *)(inv + 0x1130);
        *(s32 *)(save + 0x1118) = *(s32 *)(inv + 0x1138);
        if (was != 0) {
            AvatarInventory__EquipHandItem(inv, cur, 0);
        }
    } else {
        j = 1;
        do {
            d = (Slot *)(j * 0x24 + (s32)inv + 0x24);
            s = (Slot *)(j * 0x24 + (s32)save + 0x10);
            *d = *s;
            j++;
            if (j > 120) {
                break;
            }
        } while (1);
        *(s32 *)(inv + 0x1134) = *(s32 *)(save + 4);
        *(s32 *)(inv + 0x113C) = *(s32 *)(save + 8);
        *(s32 *)(inv + 0x1140) = *(s32 *)(save + 0xC);
        t2 = *(s32 *)(save + 0x1118);
        *(s32 *)(inv + 0x112C) = 0;
        *(s32 *)(inv + 0x1138) = t2;
    }
    AvatarInventory__GetSaveDataSize(inv);
}
