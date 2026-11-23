/* Archive__Open @ 0x8017EE5C (size: 0x1D8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef unsigned int u32;

typedef struct {
    s32 flags;          /* 0x00 */
    s32 state;          /* 0x04 */
    char pad8[8];       /* 0x08 */
    u32 count;          /* 0x10 */
    s32 size;           /* 0x14 */
    s32 base;           /* 0x18 */
    char *data;         /* 0x1C */
    void *aligned;      /* 0x20 */
    void *raw;          /* 0x24 */
} Archive;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} ArchiveEntry;

Archive *Archive__FindFreeSlot(void);
s32 Archive__OpenBackingSource(void *, s32, s32);
s32 Archive__ReadBackingSource(void *, s32, char *);
void Archive__SeekBackingSource(void *, s32);
void *MemHeap__Alloc(unsigned int, unsigned int);
s32 Archive__GetBackingSize(void *);
void Archive__Close(void *);
s32 Archive__CloseBackingSource(void *);
void *memcpy(void *, void *, unsigned int);

Archive *Archive__Open(s32 arg0, s32 arg1, s32 arg2) {
    Archive *archive;
    s32 backingSize;
    void *raw;
    char *aligned;
    char *adjust;
    s32 offset1;
    u32 i1;
    s32 offset2;

    archive = Archive__FindFreeSlot();
    if (archive == 0) {
        return 0;
    }
    archive->state = 3;
    if (Archive__OpenBackingSource(archive, arg0, arg1) == 0) {
        return 0;
    }
    if (arg2 != 0) {
        archive->flags |= 0x1000;
    }
    if (arg1 == 0) {
        if (Archive__ReadBackingSource((char *)archive + 12, 16, (char *)archive) == 0) {
            Archive__Close(archive);
            return 0;
        }
        Archive__SeekBackingSource(archive, archive->base);
        archive->data = MemHeap__Alloc(archive->size, 8);
        if (archive->data == 0) {
            Archive__Close(archive);
            return 0;
        }
        if (Archive__ReadBackingSource(archive->data, archive->size, (char *)archive) == 0) {
            Archive__Close(archive);
            return 0;
        }
        adjust = archive->data - archive->base;
    } else {
        backingSize = Archive__GetBackingSize(archive);
        raw = MemHeap__Alloc(backingSize + 63, 8);
        archive->raw = raw;
        aligned = (char *)raw + (((s32)raw ^ 63) + 1 & 63);
        archive->aligned = aligned;
        if (aligned == 0) {
            Archive__Close(archive);
            return 0;
        }
        if (Archive__ReadBackingSource(aligned, backingSize, (char *)archive) == 0) {
            Archive__Close(archive);
            return 0;
        }
        Archive__CloseBackingSource(archive);
        memcpy((void *)((char *)archive + 12), (void *)archive->aligned, 16);
        archive->data = (char *)archive->aligned + archive->base;
        adjust = (char *)archive->aligned;
        i1 = 0;
        if (i1 < archive->count) {
            offset1 = 0;
            do {
                ArchiveEntry *entry = (ArchiveEntry *)(offset1 + (s32)archive->data);
                i1 += 1;
                entry->f4 += (s32)adjust;
                offset1 += 12;
            } while (i1 < archive->count);
        }
    }
    i1 = 0;
    if (i1 < archive->count) {
        offset2 = 0;
        do {
            s32 *field = (s32 *)(offset2 + (s32)archive->data);
            i1 += 1;
            *field += (s32)adjust;
            offset2 += 12;
        } while (i1 < archive->count);
    }
    return archive;
}
