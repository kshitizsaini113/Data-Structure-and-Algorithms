#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a=3;
  //Variable declared.
  int *p;
  int *t;
  //Pointer declared
  p=&a;
  //Pointer initialised.

  p=(int *)malloc(5*sizeof(int));
  //Using pointers to access heap memory as memory allocated dynamically is allocated from heap.

  printf("Pointer is storing address : %d and value %d. ",p,*p);
  return 0;
}
