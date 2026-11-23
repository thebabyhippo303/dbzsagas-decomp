/* MainMenu__DestroyLetterAnimationState @ 0x8012F3A4 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef short s16;
void Sound__StopHandle(void *);
void VoiceHandle__Destroy(void *, s32);
void Sphere__DestroyCore(void *, s32);
void MainMenu__DestroyLetterAnimationChildList(void *, s32);
extern char lbl_80335BA0 __attribute__((section(".data")));

void MainMenu__DestroyLetterAnimationState(char *self, s32 flags) {
    char *var_r31;
    char *tbl;
    char *list;

    *(void **)(self + 0x19C) = &lbl_80335BA0;
    if (*(void **)(self + 0x9EC) != 0) {
        *(s32 *)(self + 0x9F0) = 0;
        Sound__StopHandle(self + 0x9EC);
        if (*(void **)(self + 0x9EC) != 0) {
            VoiceHandle__Destroy(*(void **)(self + 0x9EC), 3);
        }
    }
    *(void **)(self + 0x9EC) = 0;
    list = self + 0x1A0;
    if (self + 0x368 != 0) {
        var_r31 = self + 0x9E8;
        if (self + 0x368 != var_r31) {
            do {
                var_r31 -= 0x1A0;
                tbl = *(char **)(var_r31 + 0x19C);
                (*(void (**)(void *, s32))(tbl + 0xC))(var_r31 + *(s16 *)(tbl + 8), 0);
            } while (self + 0x368 != var_r31);
        }
    }
    MainMenu__DestroyLetterAnimationChildList(list, 2);
    Sphere__DestroyCore(self, flags);
}
