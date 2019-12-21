#include <iostream>

using namespace std;

struct rectangle
{
  int length;
  int bredth;
};

void initialize(struct rectangle *r, int l, int b)
{
  r->length=l;
  r->bredth=b;
}

int main()
{
  struct rectangle r;

  initialize(&r,10,5);
  return 0;
}
