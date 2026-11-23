/* Game__IsCurrentLevel @ 0x8002D768 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Game__FindLevelIdByName(void *, char *);
void * Game__GetInstance(void);
char * Script__PopString(void *, void *, int *);
void Script__PushInt(void *, void *, int);
void fn_80184430(char *);
extern void *lbl_803DC3C0;

void Game__IsCurrentLevel(void *arg0, void *arg1) {
    s32 sp8;
    s8 *temp_r3;
    void *temp_r30;
    s32 id;

    temp_r30 = Game__GetInstance();
    temp_r3 = Script__PopString(arg0, arg1, &sp8);
    id = Game__FindLevelIdByName(M2C_FIELD(temp_r30, void **, 0x234), temp_r3);
    if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == id) {
        Script__PushInt(arg0, arg1, 1);
    } else {
        Script__PushInt(arg0, arg1, 0);
    }
    if ((sp8 != 0) && (temp_r3 != NULL)) {
        fn_80184430(temp_r3);
    }
}
