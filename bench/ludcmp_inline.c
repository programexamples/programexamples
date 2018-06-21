/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

double a[50][50]  ;
double b[50]  ;
double x[50]  ;
int ludcmp(int n , double eps ) ;
static double fabs(double n ) 
{ 
  double f ;

  {
  if (n >= (double )0) {
    f = n;
  } else {
    f = - n;
  }
  return (f);
}
}
int main(void) 
{ 
  int i ;
  int j ;
  int n ;
  int chkerr ;
  double eps ;
  double w ;
  int n7 ;
  double eps8 ;
  int i9 ;
  int j10 ;
  int k11 ;
  double w12 ;
  double y13[100] ;
  double tmp14 ;
  double n915 ;
  double f1016 ;
  double ret_fabs1117 ;
  int ret_ludcmp18 ;

  {
  n = 5;
  eps = 1.0e-6;
  i = 0;
  while (i <= n) {
    w = 0.0;
    j = 0;
    while (j <= n) {
      a[i][j] = (double )((i + 1) + (j + 1));
      if (i == j) {
        a[i][j] *= 10.0;
      }
      w += a[i][j];
      j ++;
    }
    b[i] = w;
    i ++;
  }
  {
  n7 = n;
  eps8 = eps;
  {
  if (n7 > 99) {
    {
    ret_ludcmp18 = 999;
    goto Lret_ludcmp;
    }
  } else
  if (eps8 <= 0.0) {
    {
    ret_ludcmp18 = 999;
    goto Lret_ludcmp;
    }
  }
  i9 = 0;
  while (i9 < n7) {
    {
    n915 = a[i9][i9];
    {
    if (n915 >= (double )0) {
      f1016 = n915;
    } else {
      f1016 = - n915;
    }
    {
    ret_fabs1117 = f1016;
    goto Lret_fabs;
    }
    }
    Lret_fabs: /* CIL Label */ 
    tmp14 = ret_fabs1117;
    }
    if (tmp14 <= eps8) {
      {
      ret_ludcmp18 = 1;
      goto Lret_ludcmp;
      }
    }
    j10 = i9 + 1;
    while (j10 <= n7) {
      w12 = a[j10][i9];
      if (i9 != 0) {
        k11 = 0;
        while (k11 < i9) {
          w12 -= a[j10][k11] * a[k11][i9];
          k11 ++;
        }
      }
      a[j10][i9] = w12 / a[i9][i9];
      j10 ++;
    }
    j10 = i9 + 1;
    while (j10 <= n7) {
      w12 = a[i9 + 1][j10];
      k11 = 0;
      while (k11 <= i9) {
        w12 -= a[i9 + 1][k11] * a[k11][j10];
        k11 ++;
      }
      a[i9 + 1][j10] = w12;
      j10 ++;
    }
    i9 ++;
  }
  y13[0] = b[0];
  i9 = 1;
  while (i9 <= n7) {
    w12 = b[i9];
    j10 = 0;
    while (j10 < i9) {
      w12 -= a[i9][j10] * y13[j10];
      j10 ++;
    }
    y13[i9] = w12;
    i9 ++;
  }
  x[n7] = y13[n7] / a[n7][n7];
  i9 = n7 - 1;
  while (i9 >= 0) {
    w12 = y13[i9];
    j10 = i9 + 1;
    while (j10 <= n7) {
      w12 -= a[i9][j10] * x[j10];
      j10 ++;
    }
    x[i9] = w12 / a[i9][i9];
    i9 --;
  }
  {
  ret_ludcmp18 = 0;
  goto Lret_ludcmp;
  }
  }
  Lret_ludcmp: /* CIL Label */ 
  chkerr = ret_ludcmp18;
  }
  return (0);
}
}
int ludcmp(int n , double eps ) 
{ 
  int i ;
  int j ;
  int k ;
  double w ;
  double y[100] ;
  double tmp ;
  double n9 ;
  double f10 ;
  double ret_fabs11 ;

  {
  if (n > 99) {
    return (999);
  } else
  if (eps <= 0.0) {
    return (999);
  }
  i = 0;
  while (i < n) {
    {
    n9 = a[i][i];
    {
    if (n9 >= (double )0) {
      f10 = n9;
    } else {
      f10 = - n9;
    }
    {
    ret_fabs11 = f10;
    goto Lret_fabs;
    }
    }
    Lret_fabs: /* CIL Label */ 
    tmp = ret_fabs11;
    }
    if (tmp <= eps) {
      return (1);
    }
    j = i + 1;
    while (j <= n) {
      w = a[j][i];
      if (i != 0) {
        k = 0;
        while (k < i) {
          w -= a[j][k] * a[k][i];
          k ++;
        }
      }
      a[j][i] = w / a[i][i];
      j ++;
    }
    j = i + 1;
    while (j <= n) {
      w = a[i + 1][j];
      k = 0;
      while (k <= i) {
        w -= a[i + 1][k] * a[k][j];
        k ++;
      }
      a[i + 1][j] = w;
      j ++;
    }
    i ++;
  }
  y[0] = b[0];
  i = 1;
  while (i <= n) {
    w = b[i];
    j = 0;
    while (j < i) {
      w -= a[i][j] * y[j];
      j ++;
    }
    y[i] = w;
    i ++;
  }
  x[n] = y[n] / a[n][n];
  i = n - 1;
  while (i >= 0) {
    w = y[i];
    j = i + 1;
    while (j <= n) {
      w -= a[i][j] * x[j];
      j ++;
    }
    x[i] = w / a[i][i];
    i --;
  }
  return (0);
}
}
