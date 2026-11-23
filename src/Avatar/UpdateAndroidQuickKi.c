/* Avatar__UpdateAndroidQuickKi @ 0x800335EC (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { f32 x; f32 y; f32 z; } HandPos;
typedef struct { u8 bone; char pad[7]; HandPos pos; } HandWork;
extern void *Script__PopInt(void *script, void *context);
extern int Actor__FindBoneIdByName(void *actor, char *name, unsigned char *bone_id);
extern void *CActor__GetBoneWorldOffsetPosition(void *, void *, int);
extern int Emitter__SetWorldPosition(unsigned int id, HandPos *pos);
extern char lbl_803114FC[] __attribute__((section(".data")));
extern char lbl_80311784[] __attribute__((section(".data")));
void Avatar__UpdateAndroidQuickKi(void *script, void *context) {
    void *actor;
    u32 eA;
    u32 eB;
    HandPos holder;
    HandPos out2;
    HandWork work;
    actor = Script__PopInt(script, context);
    eA = (u32)Script__PopInt(script, context);
    eB = (u32)Script__PopInt(script, context);
    Actor__FindBoneIdByName(actor, lbl_803114FC, &work.bone);
    CActor__GetBoneWorldOffsetPosition(&work.pos, actor, work.bone);
    holder = work.pos;
    Actor__FindBoneIdByName(actor, lbl_80311784, &work.bone);
    CActor__GetBoneWorldOffsetPosition(&work.pos, actor, work.bone);
    out2 = work.pos;
    Emitter__SetWorldPosition(eA, &holder);
    Emitter__SetWorldPosition(eB, &out2);
}
