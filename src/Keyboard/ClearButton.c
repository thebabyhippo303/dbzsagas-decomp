/* Keyboard__ClearButton @ 0x801D6518 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
void Keyboard__ClearButton(char *arg0, s32 arg1) {
    s32 off = arg1 << 3;
    volatile s32 *second = (volatile s32 *)(arg0 + 4);
    s32 value = *(volatile s32 *)((char *)second + off);
    *(volatile s32 *)(arg0 + off) = value;
    *(volatile s32 *)((char *)second + off) = 0;
}
