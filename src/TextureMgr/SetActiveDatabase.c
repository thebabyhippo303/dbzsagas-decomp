/* TextureMgr__SetActiveDatabase @ 0x802475E0 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
void SList__Remove(void *, void *);
void SList__PushFront(void *, void *);
extern M2C_UNK lbl_803B1D38 __attribute__((section(".data")));
void TextureMgr__SetActiveDatabase(void *db) {
    SList__Remove(&lbl_803B1D38, db);
    SList__PushFront(&lbl_803B1D38, db);
}
