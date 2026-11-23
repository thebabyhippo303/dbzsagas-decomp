/* SfxEnvPlayer__ClearEmitters @ 0x8019A9D4 (size: 0x164, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr,type,offset) (*(type)((char*)(expr)+(offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type,expr) ({ typedef char mt_same_width[(sizeof(type)==sizeof(expr))?1:-1]; union { __typeof__(expr) from; type to; } mt_bits={(expr)}; mt_bits.to; })
void Mem__DeleteArray(void*); void AmbientMixer__Reset(s32); M2C_UNK fn_8025EDF8(s32,s32); M2C_UNK fn_8019B6DC(s32,s32); void SfxEnvPlayer__ApplyEnvironment(void*,s32,f32);
void SfxEnvPlayer__ClearEmitters(void*arg0){s32 n,temp_r3,zero;void*head,*vt,*temp_b8;char*var_r31,*list,*mixer;
temp_r3=M2C_FIELD(arg0,s32*,0x17C);if(temp_r3!=0)fn_8025EDF8(temp_r3,3);mixer=(char*)arg0+0xD0;
M2C_FIELD(arg0,volatile s32*,0x180)=0;var_r31=(char*)arg0+0x184;M2C_FIELD(arg0,volatile s32*,0x17C)=0;n=4;
do{fn_8019B6DC((s32)arg0,(s32)var_r31);n-=1;var_r31+=0x1C;}while(n!=0);
head=M2C_FIELD(arg0,void**,0x1F4);if(head!=NULL){list=(char*)arg0+0x1F4;do{
if(M2C_FIELD(arg0,void**,0x1F4)==head)M2C_FIELD(arg0,void**,0x1F4)=M2C_FIELD(head,void**,0x64);else M2C_FIELD(M2C_FIELD(head,void**,0x60),void**,0x64)=M2C_FIELD(head,void**,0x64);
if(M2C_FIELD(list,void**,4)==head)M2C_FIELD(list,void**,4)=M2C_FIELD(head,void**,0x60);else M2C_FIELD(M2C_FIELD(head,void**,0x64),void**,0x60)=M2C_FIELD(head,void**,0x60);
if(M2C_FIELD(list,void**,8)!=NULL){if(head!=NULL){vt=M2C_FIELD(head,void**,0x28);M2C_FIELD(vt,M2C_UNK(**)(void*,M2C_UNK),0xC)((char*)head+M2C_FIELD(vt,s16*,8),3);}}
else{M2C_FIELD(head,void**,0x60)=NULL;M2C_FIELD(head,void**,0x64)=NULL;}
M2C_FIELD(list,s32*,0xC)=M2C_FIELD(list,s32*,0xC)-1;head=M2C_FIELD(arg0,void**,0x1F4);}while(head!=NULL);}
temp_r3=M2C_FIELD(arg0,s32*,0xB0);if(temp_r3!=0)fn_8025EDF8(temp_r3,3);M2C_FIELD(arg0,s32*,0xB0)=0;
temp_b8=M2C_FIELD(arg0,void**,0xB8);zero=0;M2C_FIELD(arg0,s32*,0xB0)=0;
if(temp_b8!=NULL)Mem__DeleteArray(temp_b8);
M2C_FIELD(arg0,volatile s32*,0xBC)=zero;M2C_FIELD(arg0,volatile s32*,0xB8)=zero;
SfxEnvPlayer__ApplyEnvironment(arg0,M2C_FIELD(arg0,s32*,0xC0),M2C_FIELD(arg0,f32*,0xC4));AmbientMixer__Reset((s32)mixer);}