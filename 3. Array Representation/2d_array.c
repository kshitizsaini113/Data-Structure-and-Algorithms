#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[3][4];
  //2-d array
  //actually memory will be allocated like 1-d array but we are allowed to access elements using two indices.

  int b[3][4]={{1,2,3,4},{5,6,7,8},{2,4,6,8}};
  //Declaration and initialisation
  //Declaring 2-d array type 1

  int *c[3];
  int **d;

  c[0]=(int *)malloc(4*sizeof(int));
  c[1]=(int *)malloc(4*sizeof(int));
  c[2]=(int *)malloc(4*sizeof(int));
  //Declaring 2-d array type 2

  d=(int **)malloc(3*sizeof(int));
  d[0]=(int *)malloc(4*sizeof(int));
  d[1]=(int *)malloc(4*sizeof(int));
  d[2]=(int *)malloc(4*sizeof(int));
  //Declaring 2-d array type 3

  //In type 2 and type 3 array is created in Heap.

  return 0;
}
