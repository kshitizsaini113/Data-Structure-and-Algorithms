/*
(e)^x = 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + ... n-terms
*/

#include <stdio.h>

double taylor_series(int x, int n)
{
  static double p=1,f=1;
  double r;
  if(n==0)
  {
    return 1;
  }
  else
  {
    r=taylor_series(x,n-1);
    p=p*x;
    f=f*n;
    return r+(p/f);
  }
}

int main()
{
  printf("%lf",taylor_series(1,10));
  return 0;
}
