/* Database__ConsumeBufferBytes @ 0x80206458 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__ConsumeBufferBytes @ 0x80206458 (0x24). ProDG -O2. */
typedef struct {
    char pad[0x18];
    int pos;
    int remaining;
} DbBufCursor;

extern DbBufCursor lbl_803ADBE4;

void Database__ConsumeBufferBytes(int n) {
    lbl_803ADBE4.pos += n;
    lbl_803ADBE4.remaining -= n;
}
