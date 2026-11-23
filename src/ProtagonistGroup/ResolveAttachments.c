/* ProtagonistGroup__ResolveAttachments @ 0x801E8B98 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void ProtagonistGroup__RestoreFlaggedAttachments(void *, void *);
void Attachment__ApplyPendingParent(void *);
void ProtagonistGroup__ClearAttachmentFlags(void *, void *);
void ProtagonistGroup__ResolveAttachments(void *arg0) {
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    if (var_r31 != NULL) {
        do {
            M2C_FIELD(var_r31, s32 *, 0x3C) = 2;
            var_r31 = M2C_FIELD(var_r31, void **, 0x34);
        } while (var_r31 != NULL);
    }
    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    if (var_r31 != NULL) {
        do {
            if ((s32) M2C_FIELD(var_r31, s32 *, 0x54) == 0) {
                ProtagonistGroup__ClearAttachmentFlags(arg0, M2C_FIELD(var_r31, void **, 0));
            }
            var_r31 = M2C_FIELD(var_r31, void **, 0x34);
        } while (var_r31 != NULL);
    }
    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    if (var_r31 != NULL) {
        do {
            if ((s32) M2C_FIELD(var_r31, s32 *, 0x1C) == 0) {
                ProtagonistGroup__RestoreFlaggedAttachments(arg0, M2C_FIELD(var_r31, void **, 0));
            }
            var_r31 = M2C_FIELD(var_r31, void **, 0x34);
        } while (var_r31 != NULL);
    }
    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    if (var_r31 != NULL) {
        do {
            Attachment__ApplyPendingParent(var_r31);
            var_r31 = M2C_FIELD(var_r31, void **, 0x34);
        } while (var_r31 != NULL);
    }
}
