/* PartitionMgr__ServiceFileRead @ 0x80253550 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 FileHandle__WaitForCompletion(void *, s32, void *, void *, void *);
s32 FileHandle__Read(void *, void *, s32, void *);
s32 FileHandle__Close(void *, s32);
M2C_UNK Partition__LoadFile(s32);
void PartitionMgr__ServiceFileRead(void *arg0) {
    void *sp8;
    void *sp8_out;
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    if ((void *) M2C_FIELD(arg0, void **, 0x158) != NULL) {
        if (FileHandle__WaitForCompletion(M2C_FIELD(arg0, void **, 0x164), 0, NULL, NULL, &sp8_out) != 0) {
            sp8 = sp8_out;
            if (sp8 != NULL) {
                temp_r9 = M2C_FIELD(arg0, void **, 0x158);
                FileHandle__Read(M2C_FIELD(arg0, void **, 0x164), M2C_FIELD(temp_r9, void **, 0x14), M2C_FIELD(temp_r9, s32 *, 0x18), NULL);
                return;
            }
            FileHandle__Close(M2C_FIELD(arg0, void **, 0x164), 0);
            temp_r10 = arg0 + 0x144;
            temp_r11 = M2C_FIELD(arg0, void **, 0x158);
            if ((void *) M2C_FIELD(arg0, void **, 0x144) == NULL) {
                M2C_FIELD(temp_r10, void **, 4) = temp_r11;
                M2C_FIELD(arg0, void **, 0x144) = temp_r11;
                M2C_FIELD(temp_r11, void **, 4) = sp8;
                M2C_FIELD(temp_r11, void **, 0) = sp8;
            } else {
                M2C_FIELD(temp_r11, void **, 4) = sp8;
                M2C_FIELD(temp_r11, void **, 0) = (void *) M2C_FIELD(temp_r10, void **, 4);
                M2C_FIELD(M2C_FIELD(temp_r10, void **, 4), void **, 4) = temp_r11;
                M2C_FIELD(temp_r10, void **, 4) = temp_r11;
            }
            M2C_FIELD(temp_r10, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r10, s32 *, 0xC) + 1);
            M2C_FIELD(arg0, void **, 0x158) = NULL;
            goto block_8;
        }
    } else {
block_8:
        Partition__LoadFile((s32) arg0);
    }
}
