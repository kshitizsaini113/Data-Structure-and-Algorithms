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
  struct rectangle re={10,5};
  //Declaring and initialising structure type variable
  re.length=15;
  re.breadth=10;
  printf("Area of rectangle is : %d",re.length*re.breadth);
  return 0;
}
