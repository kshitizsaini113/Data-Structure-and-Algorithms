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

void changelength(struct rectangle *r, int l)
{
  r->length=l
}

int area(struct rectangle r)
{
  return r.length*r.bredth;
}

int main()
{
  struct rectangle r;

  initialize(&r,10,5);
  cout<<area(r);

  changelength(&r,20);
  return 0;
}
