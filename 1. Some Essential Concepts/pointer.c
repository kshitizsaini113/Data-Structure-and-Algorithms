#include <stdio.h>

int main()
{
  int a=3;
  //Variable declared.
  int *p;
  //Pointer declared
  p=&a;
  //Pointer initialised.

  printf("Pointer is storing address : %d and value %d. ",p,*p); 
  return 0;
}
