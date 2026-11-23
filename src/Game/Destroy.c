/* Game__Destroy @ 0x80006E14 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__Destroy @ 0x80006E14 (0x94). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef void (*ObjectMethod)(void *self, s32 arg);

typedef struct {
    char pad[8];
    s16 subobjOffset;
    char pad2[2];
    ObjectMethod method;
} ObjectVtbl;

void MemHeap__FreeIfFlagSet(void *, s32);
void Options__Destroy(void *, int);
void fn_801843CC(void *);
extern M2C_UNK lbl_80308858 __attribute__((section(".data")));
extern M2C_UNK lbl_80343380 __attribute__((section(".data")));

void Game__Destroy(void *arg0, s32 arg1) {
    ObjectVtbl **obj;

    obj = M2C_FIELD(arg0, ObjectVtbl ***, 0xE4);
    M2C_FIELD(arg0, M2C_UNK **, 0xA8) = &lbl_80308858;
    if (obj != NULL) {
        (*obj)->method((char *) obj + (*obj)->subobjOffset, 3);
    }
    MemHeap__FreeIfFlagSet((char *) arg0 + 0x5384, 2);
    Options__Destroy((char *) arg0 + 0x12C, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0xA8) = &lbl_80343380;
    if (arg1 & 1) {
        fn_801843CC(arg0);
    }
}
