#include <stdio.h>

int sum(int n)
{
  if(n==0)
  {
    return 0;
  }
  else
  {
    return sum(n-1)+n;
  }
}

int sum1(int n)
{
  int i,s=0;
  for(i=1;i<=n;i++)
  {
    s=s+i;
  }
  return s;
}

int sum2(int n)
{
  return n*(n+1)/2;
}

int main()
{
  printf("%d   ",sum(5));
  printf("%d   ",sum1(5));
  printf("%d   ",sum2(5));
  return 0;
}
