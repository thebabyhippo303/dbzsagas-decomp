/* Database__GetReferencedObject @ 0x80206B3C (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct DatabaseObject {
    char pad0[2];
    unsigned short flags;
    char pad1[0x78 - 4];
    void **refs;
} DatabaseObject;

void *Database__GetReferencedObject(DatabaseObject *self, int index) {
    if (self->flags & 4) {
        void **table = self->refs;
        return table[index];
    }
    if (index == 0) {
        return self->refs;
    }
    return 0;
}
