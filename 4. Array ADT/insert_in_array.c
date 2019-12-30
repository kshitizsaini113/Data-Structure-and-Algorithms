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

void Append(struct Array *arr,int x)
{
  if(arr->length<arr->size)
  {
    arr->A[arr->length++]=x;
  }
}


int main()
{
  return 0;
}
