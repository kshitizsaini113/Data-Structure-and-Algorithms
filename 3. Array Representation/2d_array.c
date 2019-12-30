#include <stdio.h>

int main()
{
  int a[3][4];
  //2-d array
  //actually memory will be allocated like 1-d array but we are allowed to access elements using two indices.

  int b[3][4]={{1,2,3,4},{5,6,7,8},{2,4,6,8}};
  //Declaration and initialisation
  //Declaring 2-d array type 1

  int *c[3];
  c[0]=new int[4];
  c[1]=new int[4];
  c[2]=new int[4];
  //Declaring 2-d array type 2

  return 0;
}
