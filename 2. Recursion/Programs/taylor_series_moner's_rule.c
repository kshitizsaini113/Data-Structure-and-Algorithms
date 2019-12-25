/*
(e)^x = 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + ... n-terms
*/

#include <stdio.h>

double taylor_series(int x, int n)
{
  static double s;
  if(n==0)
  {
    return s;
  }
  s=1+x*s/n;
  return taylor_series(x,n-1);
}

int main()
{
  printf("%lf",taylor_series(1,10));
  return 0;
}
