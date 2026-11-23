/* GameMenu__HideRows @ 0x80264B88 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void GameMenu__HideRows(void *arg0) {
 s32 temp_r28, temp_r29, temp_r30, var_r25, var_r31;
 void **var_r26, **temp_r24;
 void *temp_r11, *temp_r11_2, *temp_r11_3, *temp_r11_4, *temp_r11_5;
 void *temp_r9, *temp_r9_2, *temp_r9_3, *temp_r9_4, *temp_r9_5;
 var_r31=0; var_r26=arg0+0x264; temp_r24=arg0+0x3B4; var_r25=0x12;
 do {
  temp_r11=*var_r26; var_r26=(void **)((char *)var_r26+4);
  if(temp_r11!=NULL) {
   temp_r30=arg0+0x2AC;
   if((s32)*(s32 *)(temp_r30+var_r31)!=0) {
    temp_r29=arg0+0x2F4;
    if((s32)*(s32 *)(temp_r29+var_r31)!=0) {
     temp_r28=arg0+0x33C;
     if((s32)*(s32 *)(temp_r28+var_r31)!=0) {
      temp_r9=M2C_FIELD(temp_r11,void **,0x19C);
      M2C_FIELD(temp_r9,M2C_UNK (**)(void *),0x1CC)(temp_r11+M2C_FIELD(temp_r9,s16 *,0x1C8));
      temp_r11_2=*(void **)(temp_r30+var_r31);
      temp_r9_2=M2C_FIELD(temp_r11_2,void **,0x19C);
      M2C_FIELD(temp_r9_2,M2C_UNK (**)(void *),0x1CC)(temp_r11_2+M2C_FIELD(temp_r9_2,s16 *,0x1C8));
      temp_r11_3=*(void **)(temp_r29+var_r31);
      temp_r9_3=M2C_FIELD(temp_r11_3,void **,0x19C);
      M2C_FIELD(temp_r9_3,M2C_UNK (**)(void *),0x1CC)(temp_r11_3+M2C_FIELD(temp_r9_3,s16 *,0x1C8));
      temp_r11_4=*(void **)(temp_r28+var_r31);
      temp_r9_4=M2C_FIELD(temp_r11_4,void **,0x19C);
      M2C_FIELD(temp_r9_4,M2C_UNK (**)(void *),0x1CC)(temp_r11_4+M2C_FIELD(temp_r9_4,s16 *,0x1C8));
      temp_r11_5=*(void **)((char *)temp_r24+var_r31);
      if(temp_r11_5!=NULL) {
       temp_r9_5=M2C_FIELD(temp_r11_5,void **,0x2C);
       M2C_FIELD(temp_r9_5,M2C_UNK (**)(void *,M2C_UNK),0xCC)(temp_r11_5+M2C_FIELD(temp_r9_5,s16 *,0xC8),0);
      }
     }
    }
   }
  }
  var_r31+=4; var_r25-=1;
 } while(var_r25!=0);
 M2C_FIELD(arg0,s32 *,0x448)=1;
}