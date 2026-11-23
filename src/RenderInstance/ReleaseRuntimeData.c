/* RenderInstance__ReleaseRuntimeData @ 0x8020689C (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

typedef struct RenderInstance {
    char pad_00;
    u8 flag_01;
    char pad_02[122];
    char slots[2][8];
    char pad_9C[20];
    void *lightList;
} RenderInstance;

void LightList__Destroy(void *, s32);
void *Database__GetReferencedObject(void *, s32);
void memset(void *, int, u32);

void RenderInstance__ReleaseRuntimeData(RenderInstance *self) {
    s32 i;
    char (*slot)[8];
    void *list;

    list = self->lightList;
    if (list != 0) {
        LightList__Destroy(list, 3);
        self->lightList = 0;
    }
    if ((self->flag_01 & 0x20) == 0) {
        i = 0;
        slot = self->slots;
        do {
            if (Database__GetReferencedObject(self, i) != 0) {
                memset(slot, 0, 8);
            }
            i += 1;
            slot += 1;
        } while (i <= 1);
    }
}
