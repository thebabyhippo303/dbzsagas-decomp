/* SOM__Relocate @ 0x80212E54 (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void *Database__GetArrayElement(void *, u32);
void *TextureMgr__GetActiveDatabase(void);
void *SOM__Relocate(void *arg0, void *arg1, void *arg2) {
    s32 i;
    s32 off;
    u32 elem;
    void *db;
    i = 0;
    *(u32 *)((char *)arg0 + 4) = (u32)arg0 + *(u32 *)((char *)arg0 + 4);
    *(u32 *)((char *)arg0 + 8) = (u32)arg0 + *(u32 *)((char *)arg0 + 8);
    *(u32 *)((char *)arg0 + 12) = (u32)arg0 + *(u32 *)((char *)arg0 + 12);
    *(u32 *)((char *)arg0 + 16) = (u32)arg0 + *(u32 *)((char *)arg0 + 16);
    *(u32 *)((char *)arg0 + 20) = (u32)arg0 + *(u32 *)((char *)arg0 + 20);
    *(u32 *)((char *)arg0 + 24) = (u32)arg0 + *(u32 *)((char *)arg0 + 24);
    *(u32 *)((char *)arg0 + 28) = (u32)arg0 + *(u32 *)((char *)arg0 + 28);
    if (i >= *(u16 *)((char *)arg0 + 50)) goto done;
    off = 0;
    while (i < *(u16 *)((char *)arg0 + 50)) {
        db = arg1;
        elem = *(u32 *)((char *)(off + *(u32 *)((char *)arg0 + 24)));
        if ((elem & 0xFF000000) != 0) {
            db = arg2;
        }
        *(void **)((char *)(off + *(u32 *)((char *)arg0 + 24))) = Database__GetArrayElement(db, elem);
        *(u32 *)((char *)(off + *(u32 *)((char *)arg0 + 24)) + 4) = (u32)arg0 + *(u32 *)((char *)(off + *(u32 *)((char *)arg0 + 24)) + 4);
        *(u32 *)((char *)(off + *(u32 *)((char *)arg0 + 24)) + 8) = (u32)arg0 + *(u32 *)((char *)(off + *(u32 *)((char *)arg0 + 24)) + 8);
        *(u32 *)((char *)(off + *(u32 *)((char *)arg0 + 24)) + 12) = (u32)arg0 + *(u32 *)((char *)(off + *(u32 *)((char *)arg0 + 24)) + 12);
        i++;
        *(u32 *)((char *)(off + *(u32 *)((char *)arg0 + 24)) + 16) = (u32)arg0 + *(u32 *)((char *)(off + *(u32 *)((char *)arg0 + 24)) + 16);
        off += 24;
    }
done:
    return (*(void **)((char *)arg0 + 32) = TextureMgr__GetActiveDatabase());
}
