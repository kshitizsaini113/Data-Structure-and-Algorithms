#include <iostream>

using namespace std;

struct rectangle
{
  int length;
  int bredth;
};

int main()
{
  struct rectangle r={10,5};
  struct rectangle *p=&r;

  r.length=15;
  (*p).length=20;
  p->length=20;
  //Accessing structure using pointer.

  return 0;
}
