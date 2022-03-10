/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

#include <stdio.h>
void _cipher$_xtea_encipherBlock(unsigned int num_rounds , unsigned int *v , unsigned int *key ) 
{ 
  unsigned int v0 ;
  unsigned int v1 ;
  unsigned int delta ;
  unsigned int sum ;
  unsigned int i ;

  {
  v0 = v[0];
  v1 = v[1];
  delta = 2117564857;
  sum = 0;
  i = 0;
  while (i < num_rounds) {
    v0 += (((v1 << 4) ^ (v1 >> 5)) + v1) ^ (sum + key[sum & 3]);
    sum += delta;
    v1 += (((v0 << 4) ^ (v0 >> 5)) + v0) ^ (sum + key[(sum >> 11) & 3]);
    i ++;
  }
  v[0] = v0;
  v[1] = v1;
}
}
void _cipher$_xtea_decipherBlock(unsigned int num_rounds , unsigned int *v , unsigned int *key ) 
{ 
  unsigned int v0 ;
  unsigned int v1 ;
  unsigned int delta ;
  unsigned int sum ;
  unsigned int i ;

  {
  v0 = v[0];
  v1 = v[1];
  delta = 2117564857;
  sum = delta * num_rounds;
  i = 0;
  while (i < num_rounds) {
    v1 -= (((v0 << 4) ^ (v0 >> 5)) + v0) ^ (sum + key[(sum >> 11) & 3]);
    sum -= delta;
    v0 -= (((v1 << 4) ^ (v1 >> 5)) + v1) ^ (sum + key[sum & 3]);
    i ++;
  }
  v[0] = v0;
  v[1] = v1;
}
}
void _cipher$_xtea_encipher(unsigned int block_no , unsigned int num_rounds , unsigned int *v ,
                            unsigned int *key , unsigned int size ) 
{ 
  unsigned int i ;

  {
  i = 0;
  while (i < size / 8) {
    _cipher$_xtea_encipherBlock(num_rounds, v, key);
    v += 2;
    i ++;
  }
}
}
void _cipher$_xtea_decipher(unsigned int block_no , unsigned int num_rounds , unsigned int *v ,
                            unsigned int *key , unsigned int size ) 
{ 
  unsigned int i ;

  {
  i = 0;
  while (i < size / 8) {
    _cipher$_xtea_decipherBlock(num_rounds, v, key);
    v += 2;
    i ++;
  }
}
}
void _cipher$_xor_encipher(unsigned int block_no , unsigned int *start , unsigned int *key ,
                           unsigned int length ) 
{ 
  unsigned int *i ;

  {
  i = start;
  while (i < start + length / 4) {
    *i ^= *key;
    i ++;
  }
}
}
void _cipher$_xor_decipher(unsigned int block_no , unsigned int *start , unsigned int *key ,
                           unsigned int length ) 
{ 
  unsigned int *i ;

  {
  i = start;
  while (i < start + length / 4) {
    *i ^= *key;
    i ++;
  }
}
}
void DUMP_byte(int block , unsigned char *from , long length ) 
{ 
  unsigned char *j ;

  {
  printf("BLOCK %i byte ", block);
  printf(" %ld ", length);
  j = from;
  while (j < from + length) {
    printf("%u ", *j);
    j ++;
  }
  printf(" 0\n");
}
}
void DUMP_short(int block , unsigned short *from , long length ) 
{ 
  unsigned short *j ;

  {
  printf("BLOCK %i short ", block);
  printf(" %ld ", length);
  j = from;
  while (j < from + length) {
    printf("%u ", *j);
    j ++;
  }
  printf(" 0\n");
}
}
void DUMP_int(int block , unsigned int *from , long length ) 
{ 
  unsigned int *j ;

  {
  printf("BLOCK %i int ", block);
  printf(" %ld ", length);
  j = from;
  while (j < from + length) {
    printf("%u ", *j);
    j ++;
  }
  printf(" 0\n");
}
}
int main(void) 
{ 
  int __cil_tmp1 ;
  unsigned int _2_sum__block_28_2[4]  = {3363671368U, 1208453960U, 3875483787U, 2425393296U};
  int __cil_tmp3 ;
  unsigned int _2_sum__block_29_4[4]  = {3363671368U, 1208453960U, 3875483787U, 2425393296U};
  unsigned int _2_sum__block_23_5[4]  = {3361049928U, 1208126280U, 3791587467U, 2425393296U};
  unsigned int KEY_1517678326_4014194194_3257063792_2501829164[4]  = {1517678326U,
                                                                      4014194194U,
                                                                      3257063792U,
                                                                      2501829164U};
  unsigned int _2_sum__block_19_7[46]  = {3363147080U, 3360001352U, 1209043784U, 441U,
                                          0U, 3381349376U, 1238469453U, 1308877505U,
                                          1276255373U, 2370313865U, 4294885557U, 109791487U,
                                          113224U, 0U, 2336751616U, 3381349578U, 65126729U,
                                          135564622U, 3697118540U, 3361574216U, 1292077900U,
                                          2337091683U, 881676286U, 847859003U, 3233123656U,
                                          1224736766U, 4274029965U, 2336817151U, 28919824U,
                                          0U, 1275068416U, 2337130891U, 3804318161U,
                                          479022595U, 512314386U, 3363147080U, 3360001352U,
                                          1209043784U, 441U, 0U, 3381349376U, 1238469453U,
                                          1308877505U, 1276255373U, 2425364105U, 2425393296U};
  unsigned int _2_sum__block_26_8[4]  = {3363671368U, 1208453960U, 3875483787U, 2425393296U};
  int __cil_tmp9 ;
  unsigned int _2_sum__block_24_10[4]  = {3363671368U, 1208453960U, 3875483787U, 2425393296U};
  unsigned int _2_sum__block_9_11[12]  = {3233647944U, 1224736766U, 3192391563U, 1U,
                                          0U, 1289128776U, 3242838667U, 2370700257U,
                                          2370570260U, 2303580253U, 2425393178U, 2425393296U};
  unsigned int _2_sum__block_3_12[20]  = {3363671368U, 3360001352U, 1211140936U, 442U,
                                          0U, 3398126592U, 1238469453U, 1308877505U,
                                          1276517517U, 2370314121U, 2370359421U, 4294885509U,
                                          814434559U, 1288844104U, 2337131147U, 3804318161U,
                                          479022595U, 459491606U, 2425364361U, 2425393296U};
  int __cil_tmp13 ;
  unsigned int _2_sum__block_7_14[12]  = {3233647944U, 1224736766U, 3192391563U, 1U,
                                          0U, 1289128776U, 3242838667U, 2370700257U,
                                          2370570260U, 2303579229U, 2425393178U, 2425393296U};
  int __cil_tmp15 ;
  unsigned int _2_sum__block_15_16[22]  = {3231026504U, 1224736766U, 4274029965U,
                                           2336817151U, 29313072U, 0U, 1275068416U,
                                           2337132427U, 3804318161U, 479022595U, 445205526U,
                                           3361049928U, 3360001352U, 1211140936U,
                                           447U, 0U, 3482012672U, 1238469453U, 1308877505U,
                                           1276517517U, 2425363081U, 2425393296U};
  int __cil_tmp17 ;
  unsigned int _2_sum__block_18_18[26]  = {3361049928U, 3360001352U, 1225296712U,
                                           440U, 0U, 3364572416U, 1238469453U, 1308877505U,
                                           1276189837U, 2370312841U, 4294885525U,
                                           42682623U, 1288254280U, 2337128843U, 3787540936U,
                                           344804867U, 2643282952U, 4294966976U, 1293650761U,
                                           2337137715U, 4270542324U, 65519945U, 993824074U,
                                           1211599688U, 2302754403U, 2425393210U};
  int __cil_tmp19 ;
  unsigned int _2_sum__block_5_20[38]  = {3363671368U, 3360001352U, 1211140936U, 442U,
                                          0U, 3398126592U, 1238469453U, 1308877505U,
                                          1276517517U, 2370314121U, 4294885565U, 126568703U,
                                          1224094536U, 2337068683U, 3787540938U, 344804867U,
                                          445336840U, 3231550792U, 1224736766U, 3091794827U,
                                          4294967295U, 4294967295U, 1308134221U, 3242850187U,
                                          2370700262U, 1665741060U, 193544456U, 3233647944U,
                                          1224736766U, 4274029965U, 2336817151U, 4273621040U,
                                          4294967295U, 1291845631U, 2337131147U, 3804318161U,
                                          479022595U, 529091606U};
  int __cil_tmp21 ;
  unsigned int _2_sum__block_22_22[4]  = {3363671368U, 1208453960U, 3875483787U, 2425393296U};
  int __cil_tmp23 ;
  unsigned int _2_sum__block_16_24[48]  = {3363671368U, 3360001352U, 1211140936U,
                                           442U, 0U, 3398126592U, 1238469453U, 1308877505U,
                                           1276517517U, 2370314121U, 4294885565U,
                                           126568703U, 4294950472U, 4294967295U, 2336817151U,
                                           3398126806U, 65126729U, 135564622U, 3231550796U,
                                           1241513982U, 860691339U, 4102770148U, 1221495625U,
                                           1275322817U, 1225458829U, 2370570339U,
                                           4294885509U, 814435839U, 4294948937U, 4294967295U,
                                           2337144831U, 3297463776U, 65061193U, 103058767U,
                                           604267341U, 19172686U, 1210222917U, 4274044301U,
                                           2370371583U, 4294885509U, 814434559U, 4294949448U,
                                           4294967295U, 2337079295U, 3515567562U,
                                           65192265U, 370969934U, 2417985868U};
  int __cil_tmp25 ;
  unsigned int _2_sum__block_25_26[4]  = {3361049928U, 1208126280U, 3791587467U, 2425393296U};
  unsigned int _2_sum__block_17_27[20]  = {3363147080U, 3360001352U, 1209043784U,
                                           441U, 0U, 3381349376U, 1238469453U, 1308877505U,
                                           1276255373U, 2370313865U, 2370357365U,
                                           2336802885U, 1301104656U, 160124104U, 1292985165U,
                                           2336873099U, 3821095131U, 76368899U, 109661210U,
                                           2425393296U};

  {
  _cipher$_xtea_encipher(17U, 32U, (unsigned int *)_2_sum__block_17_27, KEY_1517678326_4014194194_3257063792_2501829164,
                         80U);
  DUMP_int(17, _2_sum__block_17_27, 20);
  __cil_tmp25 = 0;
  while (__cil_tmp25 < 4) {
    *((unsigned int *)_2_sum__block_25_26 + __cil_tmp25) ^= 3341723899U;
    __cil_tmp25 ++;
  }
  DUMP_int(25, _2_sum__block_25_26, 4);
  __cil_tmp23 = 0;
  while (__cil_tmp23 < 48) {
    *((unsigned int *)_2_sum__block_16_24 + __cil_tmp23) ^= 3341723899U;
    __cil_tmp23 ++;
  }
  DUMP_int(16, _2_sum__block_16_24, 48);
  __cil_tmp21 = 0;
  while (__cil_tmp21 < 4) {
    *((unsigned int *)_2_sum__block_22_22 + __cil_tmp21) ^= 3341723899U;
    __cil_tmp21 ++;
  }
  DUMP_int(22, _2_sum__block_22_22, 4);
  __cil_tmp19 = 0;
  while (__cil_tmp19 < 38) {
    *((unsigned int *)_2_sum__block_5_20 + __cil_tmp19) ^= 3341723899U;
    __cil_tmp19 ++;
  }
  DUMP_int(5, _2_sum__block_5_20, 38);
  __cil_tmp17 = 0;
  while (__cil_tmp17 < 26) {
    *((unsigned int *)_2_sum__block_18_18 + __cil_tmp17) ^= 3341723899U;
    __cil_tmp17 ++;
  }
  DUMP_int(18, _2_sum__block_18_18, 26);
  __cil_tmp15 = 0;
  while (__cil_tmp15 < 22) {
    *((unsigned int *)_2_sum__block_15_16 + __cil_tmp15) ^= 3341723899U;
    __cil_tmp15 ++;
  }
  DUMP_int(15, _2_sum__block_15_16, 22);
  __cil_tmp13 = 0;
  while (__cil_tmp13 < 12) {
    *((unsigned int *)_2_sum__block_7_14 + __cil_tmp13) ^= 3341723899U;
    __cil_tmp13 ++;
  }
  DUMP_int(7, _2_sum__block_7_14, 12);
  _cipher$_xtea_encipher(3U, 32U, (unsigned int *)_2_sum__block_3_12, KEY_1517678326_4014194194_3257063792_2501829164,
                         80U);
  DUMP_int(3, _2_sum__block_3_12, 20);
  _cipher$_xtea_encipher(9U, 32U, (unsigned int *)_2_sum__block_9_11, KEY_1517678326_4014194194_3257063792_2501829164,
                         48U);
  DUMP_int(9, _2_sum__block_9_11, 12);
  __cil_tmp9 = 0;
  while (__cil_tmp9 < 4) {
    *((unsigned int *)_2_sum__block_24_10 + __cil_tmp9) ^= 3341723899U;
    __cil_tmp9 ++;
  }
  DUMP_int(24, _2_sum__block_24_10, 4);
  _cipher$_xtea_encipher(26U, 32U, (unsigned int *)_2_sum__block_26_8, KEY_1517678326_4014194194_3257063792_2501829164,
                         16U);
  DUMP_int(26, _2_sum__block_26_8, 4);
  _cipher$_xtea_encipher(19U, 32U, (unsigned int *)_2_sum__block_19_7, KEY_1517678326_4014194194_3257063792_2501829164,
                         184U);
  DUMP_int(19, _2_sum__block_19_7, 46);
  _cipher$_xtea_encipher(23U, 32U, (unsigned int *)_2_sum__block_23_5, KEY_1517678326_4014194194_3257063792_2501829164,
                         16U);
  DUMP_int(23, _2_sum__block_23_5, 4);
  __cil_tmp3 = 0;
  while (__cil_tmp3 < 4) {
    *((unsigned int *)_2_sum__block_29_4 + __cil_tmp3) ^= 3341723899U;
    __cil_tmp3 ++;
  }
  DUMP_int(29, _2_sum__block_29_4, 4);
  __cil_tmp1 = 0;
  while (__cil_tmp1 < 4) {
    *((unsigned int *)_2_sum__block_28_2 + __cil_tmp1) ^= 3341723899U;
    __cil_tmp1 ++;
  }
  DUMP_int(28, _2_sum__block_28_2, 4);
  return (0);
}
}
