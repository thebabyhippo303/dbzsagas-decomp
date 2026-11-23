/* SfxPlayer__IsActive @ 0x8019923C (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

s32 SfxPlayer__IsActive(void *arg0) {
    return *(s32 *)((char *)arg0 + 0x28) == 1;
}
