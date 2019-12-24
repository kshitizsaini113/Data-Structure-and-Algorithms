#include <stdio.h>

int fun(int n)
{
  if(n>0)
  {
    return fun(n-1)+n;
  }
  return 0;
}
//Using auto variable type.

int fun1(int n)
{
  static int x=0;
  if(n>0)
  {
    x++;
    return fun1(n-1)+x;
  }
  return 0;
}
//Using static variable type.

int fun2(int n)
{
  if(n>0)
  {
    y++;
    return fun2(n-1)+y;
  }
  return 0;
}
//Using global variable.

int main()
{
  int a=5;

  printf("%d",fun(a));
  printf("\n");
  printf("%d",fun1(a));
  printf("\n");
  printf("%d",fun2(a));
}
