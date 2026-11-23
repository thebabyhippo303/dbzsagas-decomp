/* DBFileMgr__Shutdown @ 0x802044B4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct {
    char pad[140];
    void *ptr140;
    char rest[168 - 144];
} DBMgr;
extern DBMgr lbl_803ADBE4 __attribute__((section(".data")));
void DBFileMgr__UnloadAll(s32);
void memFree(void *);
void memset(void *, int, u32);
void DBFileMgr__Shutdown(void) {
    DBMgr *db;
    void *p;
    DBFileMgr__UnloadAll(1);
    db = &lbl_803ADBE4;
    p = db->ptr140;
    if (p != NULL) {
        memFree(p);
        memset(db, 0, 168);
    }
}
