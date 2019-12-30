#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int *a;
  int size;
  int length;
};

void display(struct Array arr)
{
  int i;
  printf("\nElements are\n");
  for(i=0;i<arr.length;i++)
  {
    printf("%d ",arr.a[i]);
  }
}

int main()
{
  struct Array arr;
  struct Array ar={{2,3,4,5,6},20,5};
  int n,i;

  printf("Enter size of array : ");
  scanf("%d",&arr.size);
  arr.a=(int *)malloc(arr.size*sizeof(int));
  arr.length=0;

  printf("Enter number of numbers : ");
  scanf("%d",&n);

  printf("Enter all elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr.a[i]);
  }
  arr.length=n;

  display(arr);

  display(ar);

  return 0;
}
