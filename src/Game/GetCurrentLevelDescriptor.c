/* Game__GetCurrentLevelDescriptor @ 0x8001F460 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__GetCurrentLevelDescriptor @ 0x8001F460 (0x1C). ProDG -O2. */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern char lbl_8035E640[];

void *Game__GetCurrentLevelDescriptor(void *self) {
    s32 index = M2C_FIELD(M2C_FIELD(self, void **, 0x238), s32 *, 4);
    return *(void **)(lbl_8035E640 + (index << 5));
}
