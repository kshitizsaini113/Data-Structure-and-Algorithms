#include<stdio.h>

struct Array
{
  int A[10];
  int size;
  int length;
};

void Display(struct Array arr)
{
  int i;
  printf("\nElements are\n");
  for(i=0;i<arr.length;i++)
  {
    printf("%d ",arr.A[i]);
  }
}

int main()
{
  return 0;
}
