#include <stdio.h>

int main()
{
  int n,i;
  scanf("%d",&n);
  int arr[n];

  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("\n\n\n");

  for(i=0;i<n;i++)
  {
    printf("%d   ",arr[i]);;
  }

  return 0;
}
