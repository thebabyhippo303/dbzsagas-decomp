/* SceneMgr__FindSceneByType @ 0x8022A3E4 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

#define M2C_FIELD(expr,type,offset) (*(type)((char *)(expr)+(offset)))
typedef int s32; typedef struct Node { struct Node *next; char pad[0x31c-4]; s32 type; } Node;
extern Node *lbl_803AD7C0 __attribute__((section(".data")));
Node *SceneMgr__FindSceneByType(s32 type) { Node *node; if (type == 2) return lbl_803AD7C0; node = lbl_803AD7C0; if (node == 0 || node->type == type) return node; do { node = node->next; } while (node != 0 && node->type != type); return node; }