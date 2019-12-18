#include <stdio.h>

struct rectangle
{
  //Creating a structure
  int length;
  int breadth;
};

int main()
{
  struct rectangle r;
  //Declaring structure type variable
  struct rectangle arr[52];
  //Will create array of structures.
  struct rectangle re={10,5};
  struct rectangle a[2]={{10,5},{5,2}};
  //Declaring and initialising structure type variable
  printf("Area of rectangle is : %d",re.length*re.breadth);
  printf("\n");
  re.length=15;
  re.breadth=10;
  printf("Area of rectangle is : %d",re.length*re.breadth);
  return 0;
}
