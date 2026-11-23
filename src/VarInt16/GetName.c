/* VarInt16__GetName @ 0x8018F028 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef int M2C_UNK;

extern M2C_UNK lbl_8033E37C __attribute__((section(".data")));
extern M2C_UNK lbl_8033E384 __attribute__((section(".data")));

M2C_UNK *VarInt16__GetName(void *arg0) {
    M2C_UNK *result;
    if (*(s32 *)((char *)arg0 + 0x40) != 0) {
        result = &lbl_8033E37C;
    } else {
        result = &lbl_8033E384;
    }
    return result;
}
