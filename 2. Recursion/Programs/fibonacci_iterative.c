#include <stdio.h>

int fib(int n)
{
  int t0=0;
  int t1=1;
  int s=0,i;

  if(n<=1)
  {
    return n;
  }
  for(i=2;i<=n;i++)
  {
    s=t0+t1;
    t0=t1;
    t1=s;
  }
  return s;
}

int main()
{;
  printf("%d",fib(10));
  return 0;
}
