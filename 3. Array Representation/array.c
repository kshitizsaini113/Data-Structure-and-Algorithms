#include <stdio.h>

int main()
{
  int i;

  int a[5];
  //Array declared
  int b[5]={1,2,3,4,5};
  //Array declared as well as initialised
  int c[5]={2,4};
  //Reat elements will be initialised as 0, except the position 0 and 1.

  for(i=0;i<5;i++)
  {
      printf("%d   ",a[i] );
  }
  printf("\n");

  for(i=0;i<5;i++)
  {
      printf("%d   ",b[i] );
  }
  printf("\n");

  for(i=0;i<5;i++)
  {
      printf("%d   ",c[i] );
  }
  printf("\n");

  printf("%d\n",b[2]);
  printf("%d\n",2[b]);
  printf("%d\n",*(b+2));
  //Different ways of accessing array elements.

  return 0;
}
