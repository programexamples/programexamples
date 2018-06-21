/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

extern void cptr_dummy_func(int x ) ;
int data[64]  ;
void jpeg_fdct_islow(void) 
{ 
  int tmp0 ;
  int tmp1 ;
  int tmp2 ;
  int tmp3 ;
  int tmp4 ;
  int tmp5 ;
  int tmp6 ;
  int tmp7 ;
  int tmp10 ;
  int tmp11 ;
  int tmp12 ;
  int tmp13 ;
  int z1 ;
  int z2 ;
  int z3 ;
  int z4 ;
  int z5 ;
  int *dataptr ;
  int ctr ;
  int cptr_jpeg_fdct_islow_1  = 0;
  int cptr_jpeg_fdct_islow_2  = 0;
  int cptr_jpeg_fdct_islow_3  = 0;

  {
  cptr_jpeg_fdct_islow_1 ++;
  dataptr = data;
  ctr = 7;
  while (ctr >= 0) {
    cptr_jpeg_fdct_islow_2 ++;
    tmp0 = *(dataptr + 0) + *(dataptr + 7);
    tmp7 = *(dataptr + 0) - *(dataptr + 7);
    tmp1 = *(dataptr + 1) + *(dataptr + 6);
    tmp6 = *(dataptr + 1) - *(dataptr + 6);
    tmp2 = *(dataptr + 2) + *(dataptr + 5);
    tmp5 = *(dataptr + 2) - *(dataptr + 5);
    tmp3 = *(dataptr + 3) + *(dataptr + 4);
    tmp4 = *(dataptr + 3) - *(dataptr + 4);
    tmp10 = tmp0 + tmp3;
    tmp13 = tmp0 - tmp3;
    tmp11 = tmp1 + tmp2;
    tmp12 = tmp1 - tmp2;
    *(dataptr + 0) = (tmp10 + tmp11) << 2;
    *(dataptr + 4) = (tmp10 - tmp11) << 2;
    z1 = (tmp12 + tmp13) * 4433;
    *(dataptr + 2) = ((z1 + tmp13 * 6270) + (1 << 10)) >> 11;
    *(dataptr + 6) = ((z1 + tmp12 * -15137) + (1 << 10)) >> 11;
    z1 = tmp4 + tmp7;
    z2 = tmp5 + tmp6;
    z3 = tmp4 + tmp6;
    z4 = tmp5 + tmp7;
    z5 = (z3 + z4) * 9633;
    tmp4 *= 2446;
    tmp5 *= 16819;
    tmp6 *= 25172;
    tmp7 *= 12299;
    z1 *= -7373;
    z2 *= -20995;
    z3 *= -16069;
    z4 *= -3196;
    z3 += z5;
    z4 += z5;
    *(dataptr + 7) = (((tmp4 + z1) + z3) + (1 << 10)) >> 11;
    *(dataptr + 5) = (((tmp5 + z2) + z4) + (1 << 10)) >> 11;
    *(dataptr + 3) = (((tmp6 + z2) + z3) + (1 << 10)) >> 11;
    *(dataptr + 1) = (((tmp7 + z1) + z4) + (1 << 10)) >> 11;
    dataptr += 8;
    ctr --;
  }
  dataptr = data;
  ctr = 7;
  while (ctr >= 0) {
    cptr_jpeg_fdct_islow_3 ++;
    tmp0 = *(dataptr + 0) + *(dataptr + 56);
    tmp7 = *(dataptr + 0) - *(dataptr + 56);
    tmp1 = *(dataptr + 8) + *(dataptr + 48);
    tmp6 = *(dataptr + 8) - *(dataptr + 48);
    tmp2 = *(dataptr + 16) + *(dataptr + 40);
    tmp5 = *(dataptr + 16) - *(dataptr + 40);
    tmp3 = *(dataptr + 24) + *(dataptr + 32);
    tmp4 = *(dataptr + 24) - *(dataptr + 32);
    tmp10 = tmp0 + tmp3;
    tmp13 = tmp0 - tmp3;
    tmp11 = tmp1 + tmp2;
    tmp12 = tmp1 - tmp2;
    *(dataptr + 0) = ((tmp10 + tmp11) + (1 << 1)) >> 2;
    *(dataptr + 32) = ((tmp10 - tmp11) + (1 << 1)) >> 2;
    z1 = (tmp12 + tmp13) * 4433;
    *(dataptr + 16) = ((z1 + tmp13 * 6270) + (1 << 14)) >> 15;
    *(dataptr + 48) = ((z1 + tmp12 * -15137) + (1 << 14)) >> 15;
    z1 = tmp4 + tmp7;
    z2 = tmp5 + tmp6;
    z3 = tmp4 + tmp6;
    z4 = tmp5 + tmp7;
    z5 = (z3 + z4) * 9633;
    tmp4 *= 2446;
    tmp5 *= 16819;
    tmp6 *= 25172;
    tmp7 *= 12299;
    z1 *= -7373;
    z2 *= -20995;
    z3 *= -16069;
    z4 *= -3196;
    z3 += z5;
    z4 += z5;
    *(dataptr + 56) = (((tmp4 + z1) + z3) + (1 << 14)) >> 15;
    *(dataptr + 40) = (((tmp5 + z2) + z4) + (1 << 14)) >> 15;
    *(dataptr + 24) = (((tmp6 + z2) + z3) + (1 << 14)) >> 15;
    *(dataptr + 8) = (((tmp7 + z1) + z4) + (1 << 14)) >> 15;
    dataptr ++;
    ctr --;
  }
  return;
}
}
void main(void) 
{ 
  int i ;
  int seed ;
  int cptr_main_1  = 0;
  int cptr_main_2  = 0;

  {
  cptr_main_1 ++;
  seed = 1;
  i = 0;
  while (i < 64) {
    cptr_main_2 ++;
    seed = (seed * 133 + 81) % 65535;
    data[i] = seed;
    i ++;
  }
  jpeg_fdct_islow();
  return;
}
}
