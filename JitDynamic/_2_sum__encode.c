/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

#include <stdio.h>
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
  unsigned int _2_sum__block_6_1[12]  = {3233647944U, 1224736766U, 4274029965U, 2336817151U,
                                         28919824U, 0U, 1275068416U, 2337130891U,
                                         3804318161U, 479022595U, 529091602U, 2425393296U};
  unsigned int KEY_217317770_1719632535_578430253_2884096621[4]  = {217317770U, 1719632535U,
                                                                    578430253U, 2884096621U};
  unsigned int _2_sum__block_12_3[8]  = {3363671368U, 3360001352U, 1211140936U, 442U,
                                         0U, 3398126592U, 236227918U, 2417461580U};
  unsigned int _2_sum__block_20_4[12]  = {3233647944U, 1224736766U, 3192391563U, 1U,
                                          0U, 1289128776U, 3242838667U, 2370700257U,
                                          2370570260U, 2303582301U, 2425393178U, 2425393296U};
  int __cil_tmp5 ;
  unsigned int _2_sum__block_9_6[8]  = {3363671368U, 3360001352U, 1209043784U, 441U,
                                        0U, 3381349376U, 169119054U, 2417461580U};
  int __cil_tmp7 ;
  unsigned int _2_sum__block_16_8[8]  = {3363671368U, 3360001352U, 1211140936U, 442U,
                                         0U, 3398126592U, 236227918U, 2417461580U};
  unsigned int _2_sum__block_26_9[12]  = {3233647944U, 1224736766U, 4274029965U, 2336817151U,
                                          28985392U, 0U, 1275068416U, 2337131147U,
                                          3804318161U, 479022595U, 529091606U, 2425393296U};
  unsigned int _2_sum__block_7_10[8]  = {3363671368U, 3360001352U, 1211140936U, 1210U,
                                         0U, 3398126592U, 236227918U, 2417461580U};
  int __cil_tmp11 ;
  unsigned int _2_sum__block_34_12[10]  = {3833433416U, 3229977928U, 1224736766U,
                                           860369035U, 3398126802U, 1238469453U, 1308877505U,
                                           1226185869U, 529079139U, 2425393296U};
  int __cil_tmp13 ;
  unsigned int _2_sum__block_29_14[8]  = {3363147080U, 3360001352U, 1209043784U, 441U,
                                          0U, 3381349376U, 169119054U, 2417396044U};
  int __cil_tmp15 ;
  unsigned int _2_sum__block_13_16[18]  = {3233647944U, 1224736766U, 860358539U, 3398125778U,
                                           1237945164U, 1308877249U, 1292375181U,
                                           2370574987U, 4294885509U, 411781631U, 4294950729U,
                                           4294967295U, 2337144831U, 4169878983U,
                                           65519945U, 990154062U, 1092117321U, 2425363337U};
  int __cil_tmp17 ;
  unsigned int _2_sum__block_38_18[8]  = {3363671368U, 3360001352U, 1209043784U, 1288195469U,
                                          1665993099U, 3666562321U, 436505934U, 2416413004U};
  int __cil_tmp19 ;
  unsigned int _2_sum__block_5_20[16]  = {3233647944U, 1224736766U, 3192391563U, 1U,
                                          0U, 1289128776U, 3242838667U, 2370700257U,
                                          2370570260U, 2370359389U, 2336802909U, 23284747U,
                                          1341688653U, 1295713421U, 2425356937U, 2425393296U};
  int __cil_tmp21 ;
  unsigned int _2_sum__block_1_22[8]  = {3233647944U, 1224736766U, 4274554253U, 2303262719U,
                                         2106411015U, 1166887112U, 814434536U, 2419558728U};
  int __cil_tmp23 ;
  unsigned int _2_sum__block_31_24[12]  = {3233647944U, 1224736766U, 4274029965U,
                                           2336817151U, 4290398256U, 4294967295U,
                                           1291845631U, 2337131147U, 3804318161U,
                                           479022595U, 529091606U, 2425393296U};
  unsigned int _2_sum__block_30_25[28]  = {3231026504U, 1224736766U, 3192390283U,
                                           4294967295U, 4294967295U, 1291750216U,
                                           3242839947U, 2370700257U, 2370570260U,
                                           4294885533U, 462113279U, 1288254280U, 2337128843U,
                                           3888204280U, 76369411U, 140724539U, 3229977932U,
                                           1308622846U, 3091806347U, 4294967295U,
                                           4294967295U, 1289259849U, 3242836875U,
                                           2370503648U, 1665926940U, 479021571U, 445202689U,
                                           2425393296U};
  unsigned int _2_sum__block_37_26[8]  = {3363147080U, 3360001352U, 1209043784U, 441U,
                                          0U, 3381349376U, 169119054U, 2417396044U};
  int __cil_tmp27 ;
  unsigned int _2_sum__block_4_28[8]  = {3361049928U, 3360001352U, 1225296712U, 440U,
                                         0U, 3364572416U, 152341838U, 2417133900U};
  unsigned int _2_sum__block_27_29[8]  = {3363671368U, 3360001352U, 1211140936U, 1210U,
                                          0U, 3398126592U, 236227918U, 2417461580U};
  int __cil_tmp30 ;
  unsigned int _2_sum__block_18_31[12]  = {3231026504U, 1224736766U, 3108504203U,
                                           1U, 0U, 1304529740U, 3242838155U, 2370700257U,
                                           2370570260U, 2303581277U, 2425393178U,
                                           2425393296U};
  unsigned int _2_sum__block_14_32[12]  = {3231026504U, 1224736766U, 4274029965U,
                                           2336817151U, 4273948720U, 4294967295U,
                                           1291845631U, 2337132427U, 3804318161U,
                                           479022595U, 445205526U, 2425393296U};
  int __cil_tmp33 ;
  unsigned int _2_sum__block_33_34[8]  = {3363671368U, 3360001352U, 1211140936U, 442U,
                                          0U, 3398126592U, 236227918U, 2417461580U};
  unsigned int _2_sum__block_10_35[16]  = {3233647944U, 1224736766U, 860358539U, 3599452406U,
                                           1238010700U, 1308877249U, 1275597965U,
                                           4274036109U, 2336882687U, 3375581211U,
                                           1304529740U, 3242850443U, 2370700263U,
                                           2336832260U, 23284744U, 2416085317U};

  {
  _cipher$_xtea_encipher(10U, 32U, (unsigned int *)_2_sum__block_10_35, KEY_217317770_1719632535_578430253_2884096621,
                         64U);
  DUMP_int(10, _2_sum__block_10_35, 16);
  __cil_tmp33 = 0;
  while (__cil_tmp33 < 8) {
    *((unsigned int *)_2_sum__block_33_34 + __cil_tmp33) ^= 4052017105U;
    __cil_tmp33 ++;
  }
  DUMP_int(33, _2_sum__block_33_34, 8);
  _cipher$_xtea_encipher(14U, 32U, (unsigned int *)_2_sum__block_14_32, KEY_217317770_1719632535_578430253_2884096621,
                         48U);
  DUMP_int(14, _2_sum__block_14_32, 12);
  __cil_tmp30 = 0;
  while (__cil_tmp30 < 12) {
    *((unsigned int *)_2_sum__block_18_31 + __cil_tmp30) ^= 4052017105U;
    __cil_tmp30 ++;
  }
  DUMP_int(18, _2_sum__block_18_31, 12);
  _cipher$_xtea_encipher(27U, 32U, (unsigned int *)_2_sum__block_27_29, KEY_217317770_1719632535_578430253_2884096621,
                         32U);
  DUMP_int(27, _2_sum__block_27_29, 8);
  __cil_tmp27 = 0;
  while (__cil_tmp27 < 8) {
    *((unsigned int *)_2_sum__block_4_28 + __cil_tmp27) ^= 4052017105U;
    __cil_tmp27 ++;
  }
  DUMP_int(4, _2_sum__block_4_28, 8);
  _cipher$_xtea_encipher(37U, 32U, (unsigned int *)_2_sum__block_37_26, KEY_217317770_1719632535_578430253_2884096621,
                         32U);
  DUMP_int(37, _2_sum__block_37_26, 8);
  _cipher$_xtea_encipher(30U, 32U, (unsigned int *)_2_sum__block_30_25, KEY_217317770_1719632535_578430253_2884096621,
                         112U);
  DUMP_int(30, _2_sum__block_30_25, 28);
  __cil_tmp23 = 0;
  while (__cil_tmp23 < 12) {
    *((unsigned int *)_2_sum__block_31_24 + __cil_tmp23) ^= 4052017105U;
    __cil_tmp23 ++;
  }
  DUMP_int(31, _2_sum__block_31_24, 12);
  __cil_tmp21 = 0;
  while (__cil_tmp21 < 8) {
    *((unsigned int *)_2_sum__block_1_22 + __cil_tmp21) ^= 4052017105U;
    __cil_tmp21 ++;
  }
  DUMP_int(1, _2_sum__block_1_22, 8);
  __cil_tmp19 = 0;
  while (__cil_tmp19 < 16) {
    *((unsigned int *)_2_sum__block_5_20 + __cil_tmp19) ^= 4052017105U;
    __cil_tmp19 ++;
  }
  DUMP_int(5, _2_sum__block_5_20, 16);
  __cil_tmp17 = 0;
  while (__cil_tmp17 < 8) {
    *((unsigned int *)_2_sum__block_38_18 + __cil_tmp17) ^= 4052017105U;
    __cil_tmp17 ++;
  }
  DUMP_int(38, _2_sum__block_38_18, 8);
  __cil_tmp15 = 0;
  while (__cil_tmp15 < 18) {
    *((unsigned int *)_2_sum__block_13_16 + __cil_tmp15) ^= 4052017105U;
    __cil_tmp15 ++;
  }
  DUMP_int(13, _2_sum__block_13_16, 18);
  __cil_tmp13 = 0;
  while (__cil_tmp13 < 8) {
    *((unsigned int *)_2_sum__block_29_14 + __cil_tmp13) ^= 4052017105U;
    __cil_tmp13 ++;
  }
  DUMP_int(29, _2_sum__block_29_14, 8);
  __cil_tmp11 = 0;
  while (__cil_tmp11 < 10) {
    *((unsigned int *)_2_sum__block_34_12 + __cil_tmp11) ^= 4052017105U;
    __cil_tmp11 ++;
  }
  DUMP_int(34, _2_sum__block_34_12, 10);
  _cipher$_xtea_encipher(7U, 32U, (unsigned int *)_2_sum__block_7_10, KEY_217317770_1719632535_578430253_2884096621,
                         32U);
  DUMP_int(7, _2_sum__block_7_10, 8);
  _cipher$_xtea_encipher(26U, 32U, (unsigned int *)_2_sum__block_26_9, KEY_217317770_1719632535_578430253_2884096621,
                         48U);
  DUMP_int(26, _2_sum__block_26_9, 12);
  __cil_tmp7 = 0;
  while (__cil_tmp7 < 8) {
    *((unsigned int *)_2_sum__block_16_8 + __cil_tmp7) ^= 4052017105U;
    __cil_tmp7 ++;
  }
  DUMP_int(16, _2_sum__block_16_8, 8);
  __cil_tmp5 = 0;
  while (__cil_tmp5 < 8) {
    *((unsigned int *)_2_sum__block_9_6 + __cil_tmp5) ^= 4052017105U;
    __cil_tmp5 ++;
  }
  DUMP_int(9, _2_sum__block_9_6, 8);
  _cipher$_xtea_encipher(20U, 32U, (unsigned int *)_2_sum__block_20_4, KEY_217317770_1719632535_578430253_2884096621,
                         48U);
  DUMP_int(20, _2_sum__block_20_4, 12);
  _cipher$_xtea_encipher(12U, 32U, (unsigned int *)_2_sum__block_12_3, KEY_217317770_1719632535_578430253_2884096621,
                         32U);
  DUMP_int(12, _2_sum__block_12_3, 8);
  _cipher$_xtea_encipher(6U, 32U, (unsigned int *)_2_sum__block_6_1, KEY_217317770_1719632535_578430253_2884096621,
                         48U);
  DUMP_int(6, _2_sum__block_6_1, 12);
  return (0);
}
}