/* Tutorial__FindLayerByName @ 0x8004484C (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Database__GetTypedObject(int type, const char *name, void *db, int flags);
void *Database__GetArrayElement(void *array, u32 index);
int String__CompareIgnoreCase(const char *a, const char *b);
extern void *lbl_803B1E94 __attribute__((section(".data")));

void *Tutorial__FindLayerByName(s8 *arg0) {
    u16 *list;
    u32 i;
    void *elem;

    list = Database__GetTypedObject(0x60, NULL, lbl_803B1E94, 0);
    if (list != NULL) {
        for (i = 0; (s32)i < (s32)*list; i++) {
            elem = Database__GetArrayElement(list, i);
            if (String__CompareIgnoreCase((char *)*(void **)((char *)elem + 0x94) + 0x20, arg0) == 0) {
                return elem;
            }
        }
    }
    return NULL;
}
