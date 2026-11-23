/* SoundGroup3D__Destroy @ 0x8019E4DC (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SoundGroup__ReleaseAllVoices(void *);
void Mem__DeleteArray(void *);
void Mem__Delete(void *);
void SoundGroup__Destroy(void *, s32);
extern M2C_UNK lbl_8033FE38 __attribute__((section(".data")));

typedef struct PtrArray { void **data; s32 count; } PtrArray;
typedef struct Inner { s32 pad0; s32 pad4; PtrArray *arr; } Inner;

void SoundGroup3D__Destroy(void *arg0, s32 arg1) {
    Inner *inner;
    PtrArray *a;
    s32 i;
    s32 n;
    s32 cnt;
    void *t;

    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &lbl_8033FE38;
    SoundGroup__ReleaseAllVoices(arg0);
    inner = (Inner *) ((char *) arg0 + 0x68);
    if (inner->arr != NULL) {
        cnt = inner->arr->count;
        if (cnt > 0) {
            n = cnt;
            i = 0;
            do {
                t = *(void **)((char *) inner->arr->data + i);
                if (t != NULL) {
                    Mem__DeleteArray(t);
                }
                i += 4;
            } while (--n != 0);
        }
        a = inner->arr;
        if (a != NULL) {
            if (a->data != NULL) {
                Mem__Delete(a->data);
            }
            Mem__Delete(a);
        }
        inner->arr = NULL;
    }
    SoundGroup__Destroy(arg0, arg1);
}
