/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

extern void cptr_dummy_func(int x ) ;
extern int undet() ;
extern void __assume(int cond ) ;
int fft1(int n , int flag ) ;
double ar[8]  ;
double ai[8]  = {      0.};
double my_fabs(double n ) 
{ 
  double f ;
  int cptr_my_fabs_1  = 0;
  int cptr_my_fabs_2  = 0;

  {
  if (n >= (double )0) {
    cptr_my_fabs_1 ++;
    f = n;
  } else {
    cptr_my_fabs_2 ++;
    f = - n;
  }
  return (f);
}
}
static double my_log(double n ) 
{ 


  {
  return (4.5);
}
}
double my_sin(double rad ) 
{ 
  double app ;
  double diff ;
  int inc ;
  double tmp ;
  int cptr_my_sin_1  = 0;
  int cptr_my_sin_2  = 0;
  int cptr_my_sin_3  = 0;
  int cptr_my_sin_4  = 0;

  {
  cptr_my_sin_1 ++;
  inc = 1;
  while (rad > (double )2 * 3.14159) {
    cptr_my_sin_2 ++;
    rad -= (double )2 * 3.14159;
  }
  while (rad < (double )-2 * 3.14159) {
    cptr_my_sin_3 ++;
    rad += (double )2 * 3.14159;
  }
  diff = rad;
  app = diff;
  diff = (diff * - (rad * rad)) / ((2.0 * (double )inc) * (2.0 * (double )inc + 1.0));
  app += diff;
  inc ++;
  while (1) {
    tmp = my_fabs(diff);
    if (! (tmp >= 0.00001)) {
      break;
    }
    cptr_my_sin_4 ++;
    diff = (diff * - (rad * rad)) / ((2.0 * (double )inc) * (2.0 * (double )inc + 1.0));
    app += diff;
    inc ++;
  }
  return (app);
}
}
static double my_cos(double rad ) 
{ 
  double tmp ;
  int cptr_my_cos_1  = 0;

  {
  cptr_my_cos_1 ++;
  tmp = my_sin(3.14159 / 2.0 - rad);
  return (tmp);
}
}
int main(void) 
{ 
  int i ;
  int n ;
  int tmp ;
  int flag ;
  int chkerr ;
  int cptr_main_1  = 0;
  int cptr_main_2  = 0;

  {
  cptr_main_1 ++;
  tmp = undet();
  n = tmp;
  __assume(n >= 2);
  i = 0;
  while (i < n) {
    cptr_main_2 ++;
    ar[i] = my_cos((((double )2 * 3.14159) * (double )i) / (double )n);
    i ++;
  }
  flag = 0;
  chkerr = fft1(n, flag);
  flag = 1;
  chkerr = fft1(n, flag);
  return (0);
}
}
int fft1(int n , int flag ) 
{ 
  int i ;
  int j ;
  int k ;
  int it ;
  int xp ;
  int xp2 ;
  int j1 ;
  int j2 ;
  int iter ;
  double sign ;
  double w ;
  double wr ;
  double wi ;
  double dr1 ;
  double dr2 ;
  double di1 ;
  double di2 ;
  double tr ;
  double ti ;
  double arg ;
  double tmp ;
  double tmp___0 ;
  double tmp___1 ;
  double tmp___2 ;
  int cptr_fft1_1  = 0;
  int cptr_fft1_2  = 0;
  int cptr_fft1_3  = 0;
  int cptr_fft1_4  = 0;
  int cptr_fft1_5  = 0;
  int cptr_fft1_6  = 0;
  int cptr_fft1_7  = 0;
  int cptr_fft1_8  = 0;
  int cptr_fft1_9  = 0;
  int cptr_fft1_10  = 0;
  int cptr_fft1_11  = 0;
  int cptr_fft1_12  = 0;
  int cptr_fft1_13  = 0;

  {
  if (n < 2) {
    return (999);
  }
  cptr_fft1_1 ++;
  tmp = my_log((double )n);
  tmp___0 = my_log(2.0);
  iter = (int )(tmp / tmp___0);
  j = 1;
  i = 0;
  while (i < iter) {
    cptr_fft1_2 ++;
    j *= 2;
    i ++;
  }
  tmp___1 = my_fabs((double )(n - j));
  if (tmp___1 > 1.0e-6) {
    return (1);
  }
  if (flag == 1) {
    cptr_fft1_3 ++;
    sign = 1.0;
  } else {
    cptr_fft1_4 ++;
    sign = - 1.0;
  }
  cptr_fft1_5 ++;
  xp2 = n;
  it = 0;
  while (it < iter) {
    cptr_fft1_6 ++;
    xp = xp2;
    xp2 /= 2;
    w = 3.14159 / (double )xp2;
    k = 0;
    while (k < xp2) {
      cptr_fft1_7 ++;
      arg = (double )k * w;
      wr = my_cos(arg);
      tmp___2 = my_sin(arg);
      wi = sign * tmp___2;
      i = k - xp;
      j = xp;
      while (j <= n) {
        cptr_fft1_8 ++;
        j1 = j + i;
        j2 = j1 + xp2;
        dr1 = ar[j1];
        dr2 = ar[j2];
        di1 = ai[j1];
        di2 = ai[j2];
        tr = dr1 - dr2;
        ti = di1 - di2;
        ar[j1] = dr1 + dr2;
        ai[j1] = di1 + di2;
        ar[j2] = tr * wr - ti * wi;
        ai[j2] = ti * wr + tr * wi;
        j += xp;
      }
      k ++;
    }
    it ++;
  }
  j1 = n / 2;
  j2 = n - 1;
  j = 1;
  i = 1;
  while (i <= j2) {
    if (i < j) {
      cptr_fft1_9 ++;
      tr = ar[j - 1];
      ti = ai[j - 1];
      ar[j - 1] = ar[i - 1];
      ai[j - 1] = ai[i - 1];
      ar[i - 1] = tr;
      ai[i - 1] = ti;
    }
    cptr_fft1_10 ++;
    k = j1;
    while (k < j) {
      cptr_fft1_11 ++;
      j -= k;
      k /= 2;
    }
    j += k;
    i ++;
  }
  if (flag == 0) {
    return (0);
  }
  cptr_fft1_12 ++;
  w = (double )n;
  i = 0;
  while (i < n) {
    cptr_fft1_13 ++;
    ar[i] /= w;
    ai[i] /= w;
    i ++;
  }
  return (0);
}
}
int main2(void) 
{ 
  double rad ;
  double r ;
  double tmp ;
  int cptr_main2_1  = 0;

  {
  cptr_main2_1 ++;
  tmp = my_sin(rad);
  r = tmp;
  return (0);
}
}