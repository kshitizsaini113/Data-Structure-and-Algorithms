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
  //pointing to structure
  cout<<area(r);
  //have its copy of data

  changelength(&r,20);
  //pointing to structure
  return 0;
}
