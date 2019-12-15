#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[5];
  //Declaring an array.
  int b[5]={1,3,5,7,9};
  //Declaring as well initialising an array.
  int i;

  for(i=0;i<5;i++)
  {
    printf("%d  ",b[i]);
    //Printing value of array using for loop.
  }

  return 0;
}
