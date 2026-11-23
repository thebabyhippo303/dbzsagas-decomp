/* Database__ResetIterators @ 0x80203A18 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Database__ResetLoadedCursor(void);
extern void Database__ResetRecordCursor(void);

void Database__ResetIterators(void) {
    Database__ResetLoadedCursor();
    Database__ResetRecordCursor();
}
