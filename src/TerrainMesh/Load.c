/* TerrainMesh__Load @ 0x801D1C60 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8;
typedef unsigned int u32;

extern char lbl_803417BC[] __attribute__((section(".data")));
extern u32 *Database__GetTypedObject(int type, char *name, void *file, int *outSize);
extern void *Mem__New(int size);
extern void *TerrainMesh__Construct(void *self, void *a, u32 *header, u32 *body, void *file);

void *TerrainMesh__Load(void *file, void *arg) {
    int size;
    u32 *data = Database__GetTypedObject(640, lbl_803417BC, file, &size);
    if (data == 0 || size == 0) {
        return 0;
    }
    {
        u32 *body = data + 32;
        int i;
        for (i = 0; i < 32; i++) {
            u32 in = data[i];
            u32 out;
            u8 *pi = (u8 *)&in;
            u8 *po = (u8 *)&out;
            po[0] = pi[3];
            po[1] = pi[2];
            po[2] = pi[1];
            po[3] = pi[0];
            data[i] = out;
        }
        return TerrainMesh__Construct(Mem__New(1552), arg, data, body, file);
    }
}
