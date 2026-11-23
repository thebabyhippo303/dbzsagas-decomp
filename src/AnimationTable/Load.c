/* AnimationTable__Load @ 0x802124F4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void *dblLoad(void *, s32, s32);
s32 fn_80212548(void *, void *, void *);
s32 AnimationTable__Load(void *arg0, void *arg1, void *arg2) {
    void *db;
    db = dblLoad(arg0, 0, 0);
    if (db == NULL) {
        return 0;
    }
    return fn_80212548(db, arg1, arg2);
}
