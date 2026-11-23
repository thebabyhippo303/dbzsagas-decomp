/* Plant__AddReference @ 0x800F6FB8 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Plant__AddReference @ 0x800F6FB8 (0x5C). ProDG -O2. */
typedef struct PlantReference PlantReference;
struct PlantReference {
    int reference;
    int reserved;
    PlantReference *next;
};

typedef struct {
    char pad0[8];
    PlantReference *head;
    char pad1[0xC];
    int count;
} Plant;

extern void *Mem__New(unsigned int size);
extern PlantReference *Plant__ClearReferenceEntry(PlantReference *entry);

void Plant__AddReference(Plant *self, int reference) {
    PlantReference *entry = (PlantReference *)Mem__New(12);
    entry = Plant__ClearReferenceEntry(entry);
    entry->reserved = 0;
    entry->next = self->head;
    self->head = entry;
    entry->reference = reference;
    self->count++;
}
