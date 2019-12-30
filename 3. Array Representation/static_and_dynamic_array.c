#include <stdio.h>

int main()
{
  int n,i;
  scanf("%d",&n);
  int arr[n];
  int *p;

  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("\n\n\n");

  for(i=0;i<n;i++)
  {
    printf("%d   ",arr[i]);;
  }
  //Memory in stack

  p=new int[5];
  //Memory in heap

  return 0;
}
