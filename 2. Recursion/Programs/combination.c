/*
 nCr = (n)!/((n-r)!*(r)!)
*/

#include <stdio.h>

int combination(int n, int r)
{
  if(r==0 || n==r)
  {
    return 1;
  }
  else
  {
    return combination(n-1,r-1)+combination(n-1,r);
  }
}

int main()
{
  printf("%d\n",combination(4,2));
  return 0;
}
