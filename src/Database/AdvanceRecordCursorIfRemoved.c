/* Database__AdvanceRecordCursorIfRemoved @ 0x80203EC4 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern s32 lbl_803ADB5C __attribute__((section(".data")));

void Database__AdvanceRecordCursorIfRemoved(s32 arg0) {
    volatile char *base = (volatile char *)&lbl_803ADB5C;
    void *cursor = M2C_FIELD(base, void **, 0x3C);
    if (cursor == (void *)arg0) {
        M2C_FIELD(base, void **, 0x3C) = M2C_FIELD(cursor, void **, 0);
    }
}
