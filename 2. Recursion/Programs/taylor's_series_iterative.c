/*
(e)^x = 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + ... n-terms
*/

#include <stdio.h>

double taylor_series(int x, int n)
{
  double s=1;
  int i;
  double num=1;
  double den=1;

  for(i=1;i<=n;i++)
  {
    num*=x;
    den*=i;
    s+=num/den;
  }

  return s;
}

int main()
{
  printf("%lf",taylor_series(1,10));
  return 0;
}
